#? stdlib
`example2html` <- function (topic, package, Rhome = "", env = NULL) 
{
    enhancedHTML <- config_val_to_logical(Sys.getenv("_R_HELP_ENABLE_ENHANCED_HTML_", 
        "TRUE"))
    if (!enhancedHTML || !requireNamespace("knitr", quietly = TRUE)) {
        utils::example(topic, package = package, character.only = TRUE, 
            ask = FALSE)
        .code2html_payload_console("example", topic, package, 
            enhancedHTML = enhancedHTML, Rhome = Rhome)
    }
    else {
        ecode <- utils::example(topic, package = package, character.only = TRUE, 
            give.lines = TRUE)
        hlines <- grep("^###[ ][^*]", ecode)
        wskip <- which(diff(hlines) != 1)
        if (length(wskip)) 
            hlines <- hlines[seq_len(wskip[1])]
        if (length(hlines)) {
            header.info <- as.list(read.dcf(textConnection(substring(ecode[hlines], 
                5)))[1, , drop = TRUE])
            ecode <- ecode[-hlines]
        }
        else header.info <- NULL
        .code2html_payload_browser("example", ecode, topic, package, 
            Rhome = Rhome, header.info = header.info, env = env)
    }
}
