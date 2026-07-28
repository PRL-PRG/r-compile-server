#? stdlib
`inRfunsCrude` <- function (syms) 
{
    syms <- union(syms[syms == toupper(syms)], grep("^_?Rf?_", 
        syms, value = TRUE))
    pat <- "R_MB_CUR_MAX|R_BaseNamespace|R_BlankScalarString|R_BlankString"
    pat <- sprintf("%s|R_CStackDir|R_CStackLimit|R_CStackStart", 
        pat)
    pat <- sprintf("%s|R_Consolefile|R_CurrentExpression|R_Interactive", 
        pat)
    pat <- sprintf("%s|R_Outputfile|R_Srcref|R_TempDir", pat)
    pat <- sprintf("%s|R_compact_.*_class|R_ignore_SIGPIPE", 
        pat)
    pat <- sprintf("%s|R_interrupts_pending|R_interrupts_suspended", 
        pat)
    pat <- sprintf("%s|R_isForkedChild", pat)
    pat <- sprintf("%s|R_NilValue|R_MissingArg|R_Visible", pat)
    pat <- sprintf("%s|R_.*Symbol$|R_dot_|R_Na", pat)
    pat <- sprintf("%s|R_NilValue|R_GlobalEnv|R_BaseEnv|R_EmptyEnv", 
        pat)
    pat <- sprintf("%s|R_(Pos|Neg)Inf|R_.*Value$|R_.*Handlers$", 
        pat)
    syms[!grepl(pat, syms)]
}
