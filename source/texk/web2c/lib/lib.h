/* lib.h: declare prototypes for functions in lib.a.
  Public domain. */

#ifndef LIB_LIB_H
#define LIB_LIB_H

#define eof web2c_eof

/* basechsuffix.c */
extern string basenamechangesuffix (const_string, const_string, const_string);

/* chartostring.c */
extern string chartostring (char);

/* eofeoln.c */
extern boolean eof (FILE *);
extern boolean eoln (FILE *);
extern void readln (FILE *);

/* fprintreal.c */
extern void fprintreal (FILE *, double, int, int);

/* inputint.c */
extern integer inputint (FILE *);

/* input2int.c */
extern void zinput2ints (integer *, integer *);
extern void zinput3ints (integer *, integer *, integer *);

/* main.c */
extern int argc;
extern string *argv;
extern string cmdline (int);
extern TEXDLL void mainbody (void); /* generated by web2c */

/* openclose.c */
extern boolean open_input (FILE **, int, const_string fopen_mode);
extern boolean open_output (FILE **, const_string fopen_mode);
extern void close_file (FILE *);
extern void recorder_change_filename (string);
extern boolean recorder_enabled;
extern string output_directory;
extern void recorder_record_input (const_string);
extern void recorder_record_output (const_string);

/* printversion.c */
extern void printversionandexit (const_string, const_string, const_string, char*);

/* version.c */
extern char *versionstring;

/* zround.c */
extern integer zround (double);

#endif /* not LIB_LIB_H */