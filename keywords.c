#define MAX_NAME 30

struct keytab{
	
	int nums;
	char name[MAX_NAME];
	
};//구조체 틀 완성



struct keytab keywrds[13] = {
	
	{0,"int"},
	{0,"float"},
	{0,"return"},
	{0,"if"},
	{0,"for"},
	{0,"while"},
	{0,"goto"},
	{0,"switch"},
	{0,"case"},
	{0,"void"},
	{0,"default"},
	{0,"char"},
	{0,"do"}
	
};//구조체 이름

void count_word(char *word)
{
	
	int i;	

	for(i=0;i<13;i++)
	{
		if(strncmp(word,keywrds[i].name,strlen(keywrds[i].name))==0)
		{
			keywrds[i].nums++;
		}
	}

}

void printf_word()
{
	
	int i;
	//i번째 keyword에 대해서
		//printf(키워드이름:빈도수) 
		
	for(i=0;i<13;i++)
		printf("%s : %i\n",keywrds[i].name,keywrds[i].nums);
	
}
