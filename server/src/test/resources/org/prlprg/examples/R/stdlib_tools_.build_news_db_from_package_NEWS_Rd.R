#? stdlib
`.build_news_db_from_package_NEWS_Rd` <- function (file) 
{
    macros <- initialRdMacros()
    x <- prepare_Rd(parse_Rd(file, macros = macros, encoding = "UTF-8"), 
        stages = "install")
    db <- .extract_news_from_Rd(x)
    re_v <- sprintf(".*version[[:space:]]+(%s).*$", .standard_regexps()$valid_package_version)
    reDt <- "[[:digit:]]{4}-[[:digit:]]{2}-[[:digit:]]{2}"
    rEnd <- "[[:punct:][:space:]]*$"
    re_d1 <- sprintf(paste0("^.*(%s)", rEnd), reDt)
    re_d2 <- sprintf(paste0("^.*\\((%s)[[:punct:]] .*\\)", rEnd), 
        reDt)
    nms <- db[, 1L]
    ind <- grepl(re_v, nms, ignore.case = TRUE)
    if (!all(ind)) 
        warning(gettextf("Cannot extract version info from the following section titles:\n%s", 
            paste0("  ", unique(nms[!ind]), collapse = "\n")), 
            domain = NA, call. = FALSE)
    .make_news_db(cbind(ifelse(ind, sub(re_v, "\\1", nms, ignore.case = TRUE), 
        NA_character_), ifelse(grepl(re_d1, nms, perl = TRUE), 
        sub(re_d1, "\\1", nms, perl = TRUE), ifelse(grepl(re_d2, 
            nms, perl = TRUE), sub(re_d2, "\\1", nms, perl = TRUE), 
            NA_character_)), db[, 2L], Text = sub("\n*$", "", 
        db[, 3L]), HTML = db[, 4L]), NULL, "news_db_from_Rd")
}
