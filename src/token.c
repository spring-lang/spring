#include "token.h"

char *token_names[] = {
	/* TOKEN_EOF = 0 */ "<eof>",

	/* TOKEN_ADD */ "+",
	/* TOKEN_SUB */ "-",
	/* TOKEN_MUL */ "*",
	/* TOKEN_DIV */ "/",
	/* TOKEN_MOD */ "%",

	/* TOKEN_SHL */ "<<",
	/* TOKEN_SHR */ ">>",

	/* TOKEN_LT */ "<",
	/* TOKEN_LE */ "<=",

	/* TOKEN_GT */ ">",
	/* TOKEN_GE */ ">=",

	/* TOKEN_EQ */ "==",
	/* TOKEN_NE */ "!=",
	/* TOKEN_IN */ "in",

	/* TOKEN_BITWISE_NOT */ "~",
	/* TOKEN_BITWISE_AND */ "&",
	/* TOKEN_BITWISE_XOR */ "^",
	/* TOKEN_BITWISE_OR */ "|",

	/* TOKEN_LOGICAL_NOT */ "!",
	/* TOKEN_LOGICAL_AND */ "&&",
	/* TOKEN_LOGICAL_OR */ "||",

	/* TOKEN_CONDITIONAL */ "?",

	/* TOKEN_ADD_ASSIGN */ "+=",
	/* TOKEN_SUB_ASSIGN */ "-=",
	/* TOKEN_MUL_ASSIGN */ "*=",
	/* TOKEN_DIV_ASSIGN */ "/=",
	/* TOKEN_MOD_ASSIGN */ "%=",
	/* TOKEN_SHL_ASSIGN */ "<<=",
	/* TOKEN_SHR_ASSIGN */ ">>=",

	/* TOKEN_BITWISE_AND_ASSIGN */ "&=",
	/* TOKEN_BITWISE_XOR_ASSIGN */ "^=",
	/* TOKEN_BITWISE_OR_ASSIGN */ "|=",

	/* TOKEN_LPAREN */ "(",
	/* TOKEN_RPAREN */ ")",
	/* TOKEN_LBRACK */ "[",
	/* TOKEN_RBRACK */ "]",
	/* TOKEN_LBRACE */ "{",
	/* TOKEN_RBRACE */ "}",

	/* TOKEN_DOT */ ".",
	/* TOKEN_COMMA */ ",",
	/* TOKEN_COLON */ ":",
	/* TOKEN_SEMICON */ ";",

	/* TOKEN_ASSIGN */ "=",

	/* TOKEN_ACCESSOR */ "@"

	/* TOKEN_IF */ "if",
	/* TOKEN_ELSE */ "else",

	/* TOKEN_WHILE */ "while",
	/* TOKEN_DO */ "do",
	/* TOKEN_FOR */ "for",

	/* TOKEN_LET */ "let",
	/* TOKEN_CONST */ "const",
	/* TOKEN_DEFINE */ "define",

	/* TOKEN_CLASS */ "class",
	/* TOKEN_SELF */ "self",
    /* TOKEN_NEW */ "new",
	
    /* TOKEN_BREAK */ "break",
	/* TOKEN_CONTINUE */ "continue",
	/* TOKEN_DELETE */ "delete",

	/* TOKEN_FN */ "fn",
	/* TOKEN_RETURN */ "return",

	/* TOKEN_AS */ "as",
	/* TOKEN_USE */ "use",

	/* TOKEN_TRY */ "try",
	/* TOKEN_CATCH */ "catch",
	/* TOKEN_FINALLY */ "finally",
	/* TOKEN_THROW */ "throw",

	/* TOKEN_NIL */ "nil",
	/* TOKEN_TRUE */ "true",
	/* TOKEN_FALSE */ "false"
};

char * token_name(int token)
{
	return token_names[token];
}