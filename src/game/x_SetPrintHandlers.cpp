void DUMMY_Print(char const *);
void DUMMY_PrintAt(char const *, int, int);

typedef void (*PrintFunc_t)(char const *);
typedef void (*PrintAtFunc_t)(char const *, int, int);

extern PrintFunc_t _STDIO_Print;
extern PrintAtFunc_t _STDIO_PrintAt;


void fn_8013ABBC(PrintFunc_t arg0, PrintAtFunc_t arg1) {
    _STDIO_Print = arg0;
    _STDIO_PrintAt = arg1;
    if (!arg0) {
        _STDIO_Print = DUMMY_Print;
    }
    if (!arg1) {
        _STDIO_PrintAt = DUMMY_PrintAt;
    }
}