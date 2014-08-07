#ifndef __CCOMMANDS_H__
#define __CCOMMANDS_H__


typedef void(__cdecl* xcommand_t)(void);

typedef struct cmd_function_s
{
	struct cmd_function_s	*next;
	char					*name;
	xcommand_t				function;
} cmd_function_t;

class CCommands
{
private:
	cmd_function_t* cmd_functions;

public:
	CCommands();

	cmd_function_t* FindCommand(const char* name);
	void AddCommand(const char* name, xcommand_t function);

};


#endif /* __CCOMMANDS_H__ */