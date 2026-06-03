#? stdlib
`demo2html` <- function (topic, package, Rhome = "", env = NULL) 
{
    enhancedHTML <- config_val_to_logical(Sys.getenv("_R_HELP_ENABLE_ENHANCED_HTML_", 
        "TRUE"))
    if (!enhancedHTML || !requireNamespace("knitr", quietly = TRUE)) {
        utils::demo(topic, package = package, character.only = TRUE, 
            ask = FALSE)
        .code2html_payload_console("demo", topic, package, enhancedHTML = enhancedHTML, 
            Rhome = Rhome)
    }
    else {
        dcode <- readLines(system.file("demo", paste0(topic, 
            ".R"), package = package))
        .code2html_payload_browser("demo", dcode, topic, package, 
            Rhome = Rhome, env = env)
    }
}
