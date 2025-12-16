#? stdlib
`select.list` <- function (choices, preselect = NULL, multiple = FALSE, title = NULL, 
    graphics = getOption("menu.graphics")) 
{
    if (!interactive()) 
        stop("select.list() cannot be used non-interactively")
    if (!is.null(title) && (!is.character(title) || length(title) != 
        1)) 
        stop("'title' must be NULL or a length-1 character vector")
    if (isTRUE(graphics)) {
        if (.Platform$OS.type == "windows" || .Platform$GUI == 
            "AQUA") 
            return(.External2(C_selectlist, choices, preselect, 
                multiple, title))
        else if (graphics && capabilities("tcltk") && capabilities("X11") && 
            suppressWarnings(tcltk::.TkUp)) 
            return(tcltk::tk_select.list(choices, preselect, 
                multiple, title))
    }
    if (!multiple) {
        res <- menu(choices, FALSE, title)
        if (res < 1L || res > length(choices)) 
            return("")
        else return(choices[res])
    }
    else {
        nc <- length(choices)
        if (length(title) && nzchar(title[1L])) 
            cat(title, "\n", sep = "")
        def <- if (is.null(preselect)) 
            rep.int(FALSE, nc)
        else choices %in% preselect
        op <- paste0(format(seq_len(nc)), ": ", ifelse(def, "+", 
            " "), " ", choices)
        if (nc > 10L) {
            fop <- format(op)
            nw <- nchar(fop[1L], "w") + 2L
            ncol <- getOption("width")%/%nw
            if (ncol > 1L) 
                op <- paste0(fop, c(rep.int("  ", ncol - 1L), 
                  "\n"), collapse = "")
            cat("", op, sep = "\n")
        }
        else cat("", op, "", sep = "\n")
        cat(gettext("Enter one or more numbers separated by spaces and then ENTER, or 0 to cancel\n"))
        repeat {
            res <- tryCatch(scan("", what = 0, quiet = TRUE, 
                nlines = 1), error = identity)
            if (!inherits(res, "error")) 
                break
            cat(gettext("Invalid input, please try again\n"))
        }
        if (any(res == 0)) 
            return(character())
        if (!is.null(preselect)) 
            res <- c(which(def), res)
        res <- unique(res)
        res <- sort(res[1 <= res & res <= nc])
        return(choices[res])
    }
}

# Examples
