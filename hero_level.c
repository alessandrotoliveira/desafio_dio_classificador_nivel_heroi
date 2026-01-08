#include <stdio.h>
#include <string.h>

int	main()
{
	char	hero[50];
	int		xp;
	char	nivel[50];

	printf("Bem vindo ao classificador de nível de herói!\n");
	printf("Digite o nome do seu heroi: ");
	scanf("%49s", hero);
	printf("Após sua jornada quanto de XP seu herói evoluiu?: ");
	scanf("%d", &xp);

	if (xp < 1000)
		strcpy(nivel, "Ferro");
	else if (xp > 1001 && xp < 2000)
		strcpy(nivel, "Bronze");
	else if (xp > 2001 && xp < 5000)
		strcpy(nivel, "Prata");
	else if (xp > 5001 && xp < 7000)
		strcpy(nivel, "Ouro");
	else if (xp > 7001 && xp < 8000)
		strcpy(nivel, "Platina");
	else if (xp > 8001 && xp < 9000)
		strcpy(nivel, "Ascendente");
	else if (xp > 9001 && xp < 10000)
		strcpy(nivel, "Imortal");
	else if (xp >= 10001)
		strcpy(nivel, "Radiante");
	printf("O herói %s está no nível %s!\n", hero, nivel);
	return (0);
}
