#? stdlib
`regexpr` <- function (pattern, text, ignore.case = FALSE, perl = FALSE, fixed = FALSE, 
    useBytes = FALSE) 
{
    if (is.factor(text) && length(levels(text)) < length(text)) {
        out <- regexpr(pattern, levels(text), ignore.case, perl, 
            fixed, useBytes)
        structure(out[text], match.length = attr(out, "match.length")[text], 
            index.type = attr(out, "index.type"), useBytes = attr(out, 
                "useBytes"), capture.start = attr(out, "capture.start")[text, 
                , drop = FALSE], capture.length = attr(out, "capture.length")[text, 
                , drop = FALSE], capture.names = attr(out, "capture.names"))
    }
    else {
        if (!is.character(text)) 
            text <- as.character(text)
        .Internal(regexpr(as.character(pattern), text, ignore.case, 
            perl, fixed, useBytes))
    }
}
