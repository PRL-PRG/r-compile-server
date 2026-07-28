#? stdlib
`.build_news_db_from_R_NEWS_Rd` <- function (file = NULL, Rfile = "NEWS.rds") 
{
    x <- if (is.null(file)) 
        readRDS(file.path(R.home("doc"), Rfile))
    else {
        macros <- initialRdMacros()
        prepare_Rd(parse_Rd(file, macros = macros), stages = "install")
    }
    db <- .extract_news_from_Rd(x)
    skip <- c("CHANGES in previous versions", "LATER NEWS", "OLDER NEWS")
    db <- db[!(db[, 1L] %in% skip), , drop = FALSE]
    .make_news_db(cbind(sub("^CHANGES IN (R )?(VERSION )?", "", 
        db[, 1L]), NA_character_, db[, 2L], Text = sub("\n*$", 
        "", db[, 3L]), HTML = db[, 4L]), NULL, "news_db_from_Rd")
}
