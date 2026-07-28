#? stdlib
`.check_package_code_class_is_string` <- function (dir) 
{
    funA <- function(e) {
        if (is.call(e) && (length(e) >= 2L) && (length(s <- as.character(e[[1L]])) == 
            1L)) {
            if (s %in% c("(", "!")) 
                return(Recall(e[[2L]]))
            else if (s %in% c("||", "&&", "|", "&")) 
                return(Recall(e[[2L]]) || Recall(e[[3L]]))
            else if (s %in% c("==", "!=") && is.call(e2 <- e[[2L]]) && 
                (as.character(e2[[1L]])[1L] == "class") && is.character(e[[3L]])) 
                return(TRUE)
        }
        FALSE
    }
    funB <- function(e) {
        if (is.call(e) && (length(e) >= 2L) && (as.character(e[[1L]])[1L] == 
            "if")) 
            return(funA(e[[2L]]))
        FALSE
    }
    x <- Filter(length, .find_calls_in_package_code(dir, funB, 
        recursive = TRUE))
    if (length(x)) {
        s <- sprintf("File %s: %s", sQuote(rep.int(names(x), 
            lengths(x))), vapply(unlist(x), function(e) sprintf("if (%s) ...", 
            deparse1(e[[2L]])), ""))
        writeLines(c("Found if() conditions comparing class() to string:", 
            s, "Use inherits() (or maybe is()) instead."))
    }
    invisible(x)
}
