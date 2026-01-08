#include <stdio.h>

int	main()
{
	char	hero[50];
	int		xp;

	printf("Bem vindo ao classificador de nível de herói!\n");
	printf("Digite o nome do seu heroi: ");
	scanf("%49s", hero);
	printf("Após sua jornada quanto de XP seu herói evoluiu?: ");
	scanf("%d", &xp);

	if (xp < 1000)
		printf("Seu herói %s foi classificado como nível bronze!\n", hero);
	else if (xp > 1001 && xp < 2000)
		printf("Seu herói %s foi classificado como nível ferro!\n", hero);
	else if (xp > 2001 && xp < 5000)
		printf("Seu herói %s foi classificado como nível prata!\n", hero);
	else if (xp > 5001 && xp < 7000)
		printf("Seu herói %s foi classificado como nível ouro!\n", hero);
	else if (xp > 7001 && xp < 8000)
		printf("Seu herói %s foi classificado como nível platina!\n", hero);
	else if (xp > 8001 && xp < 9000)
		printf("Seu herói %s foi classificado como nível ascendente!\n", hero);
	else if (xp > 9001 && xp < 10000)
		printf("Seu herói %s foi classificado como nível imortal!\n", hero);
	else if (xp >= 10001)
		printf("Seu herói %s foi classificado como nível radiante!\n", hero);

	return (0);
}
