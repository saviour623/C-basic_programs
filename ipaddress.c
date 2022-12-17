#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define ERR "\033[1;31m[error]: "
#define ERR_1 "\033[0mInvalid IP address! "
#define ERR_2 "length overflow!!"
#define ERR_3 "\033[0mClass is unidentified!!"
#define CLRCL "\033[0m"

/** __ipcheck: ip address identifier */
void __ipcheck(char *ipAddress){
	int i, ip_integ;
	char *class;

	/** @buff: stores 1st three chars of @ipAdress */
	char buff[4];
	i = 0;
	while (i < 3){
		if (ipAddress[i] == '.')
			break;
		buff[i] = ipAddress[i];
		i++;
	}
	buff[i] = '\0';
	/* convert characters in buff to int (atoi) */
	ip_integ = 0;
	i = 0;
	while (buff[i]){
		ip_integ = (ip_integ * 10) + buff[i] - 48;
		i++;
	}
	/*Class identifier */
	if (ip_integ >= 0 && ip_integ <= 127)
		class = "Class A";
	else if (ip_integ > 127 && ip_integ <= 191)
		class = "Class B";
	else if (ip_integ > 191 && ip_integ <= 223)
		class = "Class C";
	else if (ip_integ > 223 && ip_integ <= 239)
		class = "Class D";
	else if (ip_integ > 239 && ip_integ <= 254)
		class = "class E";
	else {
 		write(2, ERR, sizeof(ERR));
		write (2, ERR_3, sizeof(ERR_1));
		write(2, "\n", 2);
		exit(0);
	}

        /* print result */
	printf("...\n");
	sleep(3);
	printf("Inputed IP adress: %s\n", ipAddress);
	sleep(3);
	printf("Type: IPV4\n");
	sleep(3);
	printf("Class: %s\n", class);
}

/** main - input ip address; calls function @__ipcheck
 * @ipaddress: stores input from external environment
 * Ip div: IPV4.
 * All possible errors considered - exit: 0
 * Return: 0
 */
int main(void){
	char ipaddress[16];
	int count;
	int i;

	printf("- Input IP Address -\nformat: xxx.xxx.xxx.xxx\n");
	scanf("%s", ipaddress);

	/* check errors in ip address string.ignore this if uninterested */

	/** error: if chars in @ipaddress is above 15 */
	if ((sizeof(ipaddress) - 1) > 15){
		write(2, ERR, sizeof(ERR));
		write (2, ERR_1, sizeof(ERR_1));
		write(2, "\n", 2);
		exit(0);
	}

	i = 0; /** error: if @ipaddress has alphabeths | special chars */
	while (ipaddress[i]){
		if (!((ipaddress[i] >= 48 && ipaddress[i] <= 57) || (ipaddress[i] == '.'))){
		exit:
			write(2, ERR, sizeof(ERR));
			write (2, ERR_1, sizeof(ERR_1));
			write(2, "\n", 2);
			exit(0);
		}
		i++;

	}
	/** error: if number of characters before (.) is greater than 3 */
	i = 0;
	count = 0;
	while (ipaddress[i]){
		if (ipaddress[i] != '.')
			count++;
		if (ipaddress[i] == '.'){
			if (ipaddress[i + 1] == '\0')
				goto exit;
			if (count > 3)
				goto exit;
			else count = 0;
		}
		if (count > 3)
			goto exit;
		i++;
	}/* */
	__ipcheck(ipaddress);
	return 0;
}
//Author: Mike
