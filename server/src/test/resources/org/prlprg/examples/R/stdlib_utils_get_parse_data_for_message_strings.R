#? stdlib
`get_parse_data_for_message_strings` <- function (file, encoding = "unknown") 
{
    exprs <- suppressWarnings(tools:::.parse_code_file(file = file, 
        encoding = encoding, keep.source = TRUE))
    if (!length(exprs)) 
        return(NULL)
    pd <- getParseData(exprs)
    parents <- pd$parent
    names(parents) <- pd$id
    gpids <- function(ids) parents[as.character(parents[as.character(ids)])]
    ind <- (pd$token == "SYMBOL_FUNCTION_CALL") & !is.na(match(pd$text, 
        c("warning", "stop", "message", "packageStartupMessage", 
            "gettext", "gettextf", "ngettext")))
    funs <- pd$text[ind]
    ids <- gpids(pd$id[ind])
    calls <- getParseText(pd, ids)
    table <- pd[pd$token == "STR_CONST", ]
    table$text <- getParseText(table, table$id)
    pos <- match(gpids(table$id), ids)
    ind <- !is.na(pos)
    table <- split(table[ind, ], factor(pos[ind], seq_along(ids)))
    extract_message_strings <- function(fun, call, table) {
        call <- str2lang(call)
        call <- call[as.character(call) != "..."]
        mc <- as.list(match.call(get(fun, envir = .BaseNamespaceEnv), 
            call))
        args <- if (fun == "gettextf") 
            mc["fmt"]
        else if (fun == "ngettext") 
            mc[c("msg1", "msg2")]
        else {
            if (!is.null(names(mc))) 
                mc <- mc[!nzchar(names(mc))]
            mc[-1L]
        }
        strings <- as.character(args[vapply(args, is.character, 
            TRUE)])
        texts <- vapply(str2expression(table$text), as.character, 
            "")
        pos <- which(!is.na(match(texts, strings)))
        cbind(table[pos, ], caller = rep.int(fun, length(pos)))
    }
    do.call(rbind, Map(extract_message_strings, as.list(funs), 
        as.list(calls), table))
}
