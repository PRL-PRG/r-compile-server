#? stdlib
`format_native_routine_registration_db_for_skeleton` <- function (nrdb, align = TRUE, include_declarations = FALSE) 
{
    if (!length(nrdb)) 
        return(character())
    fmt1 <- function(x, n) {
        c(if (align) {
            paste(format(sprintf("    {\"%s\",", x[, 1L])), format(sprintf(if (n == 
                "Fortran") "(DL_FUNC) &F77_NAME(%s)," else "(DL_FUNC) &%s,", 
                x[, 1L])), format(sprintf("%d},", x[, 2L]), justify = "right"))
        } else {
            sprintf(if (n == "Fortran") "    {\"%s\", (DL_FUNC) &F77_NAME(%s), %d}," else "    {\"%s\", (DL_FUNC) &%s, %d},", 
                x[, 1L], x[, 1L], x[, 2L])
        }, "    {NULL, NULL, 0}")
    }
    package <- attr(nrdb, "package")
    dups <- attr(nrdb, "duplicates")
    symbols <- attr(nrdb, "symbols")
    nrdb <- split(nrdb[, -1L, drop = FALSE], factor(nrdb[, 1L], 
        levels = c(".C", ".Call", ".Fortran", ".External")))
    has <- vapply(nrdb, NROW, 0L) > 0L
    nms <- names(nrdb)
    entries <- substring(nms, 2L)
    blocks <- Map(function(x, n) {
        c(sprintf("static const R_%sMethodDef %sEntries[] = {", 
            n, n), fmt1(x, n), "};", "")
    }, nrdb[has], entries[has])
    decls <- c("/* FIXME: ", "   Add declarations for the native routines registered below.", 
        "*/")
    if (include_declarations) {
        prepare <- function(nargs, type = "void *") if (nargs > 
            0) 
            paste(rep.int(type, nargs), collapse = ", ")
        else "void"
        decls <- c("/* FIXME: ", "   Check these declarations against the C/Fortran source code.", 
            "*/", if (NROW(y <- nrdb$.C)) {
                args <- sapply(y$n, function(n) if (n >= 0) prepare(n) else "/* FIXME */")
                c("", "/* .C calls */", paste0("extern void ", 
                  y$s, "(", args, ");"))
            }, if (NROW(y <- nrdb$.Call)) {
                args <- sapply(y$n, function(n) if (n >= 0) prepare(n, 
                  "SEXP") else "/* FIXME */")
                c("", "/* .Call calls */", paste0("extern SEXP ", 
                  y$s, "(", args, ");"))
            }, if (NROW(y <- nrdb$.Fortran)) {
                args <- sapply(y$n, function(n) if (n >= 0) prepare(n) else "/* FIXME */")
                c("", "/* .Fortran calls */", paste0("extern void F77_NAME(", 
                  y$s, ")(", args, ");"))
            }, if (NROW(y <- nrdb$.External)) c("", "/* .External calls */", 
                paste0("extern SEXP ", y$s, "(SEXP);")))
    }
    headers <- if (NROW(nrdb$.Call) || NROW(nrdb$.External)) 
        c("#include <R.h>", "#include <Rinternals.h>")
    else if (NROW(nrdb$.Fortran)) 
        "#include <R_ext/RS.h>"
    else character()
    c(headers, "#include <stdlib.h> // for NULL", "#include <R_ext/Rdynload.h>", 
        "", if (length(symbols)) {
            c("/*", "  The following symbols/expressions for .NAME have been omitted", 
                "", strwrap(symbols, indent = 4, exdent = 4), 
                "", "  Most likely possible values need to be added below.", 
                "*/", "")
        }, if (length(dups)) {
            c("/*", "  The following name(s) appear with different usages", 
                "  e.g., with different numbers of arguments:", 
                "", strwrap(dups, indent = 4, exdent = 4), "", 
                "  This needs to be resolved in the tables and any declarations.", 
                "*/", "")
        }, decls, "", unlist(blocks, use.names = FALSE), sprintf("void R_init_%s(DllInfo *dll)", 
            gsub(".", "_", package, fixed = TRUE)), "{", sprintf("    R_registerRoutines(dll, %s);", 
            paste0(ifelse(has, paste0(entries, "Entries"), "NULL"), 
                collapse = ", ")), "    R_useDynamicSymbols(dll, FALSE);", 
        "}")
}
