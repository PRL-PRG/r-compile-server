#? stdlib
`xgettext2pot` <- function (dir, potFile, name = "R", version, bugs) 
{
    dir <- file_path_as_absolute(dir)
    if (missing(potFile)) 
        potFile <- paste0("R-", basename(dir), ".pot")
    msgid <- unique(unlist(xgettext(dir, asCall = FALSE)))
    msgid <- msgid[nzchar(msgid)]
    if (length(msgid) > 0L) 
        msgid <- shQuote(encodeString(msgid), type = "cmd")
    msgid_plural <- xngettext(dir)
    un <- unique(unlist(msgid_plural))
    con <- file(potFile, "wt")
    on.exit(close(con))
    if (missing(version)) 
        version <- paste(R.version$major, R.version$minor, sep = ".")
    if (missing(bugs)) 
        bugs <- "bugs.r-project.org"
    writeLines(con = con, c("msgid \"\"", "msgstr \"\"", sprintf("\"Project-Id-Version: %s %s\\n\"", 
        name, version), sprintf("\"Report-Msgid-Bugs-To: %s\\n\"", 
        bugs), paste0("\"POT-Creation-Date: ", format(Sys.time(), 
        "%Y-%m-%d %H:%M"), "\\n\""), "\"PO-Revision-Date: YEAR-MO-DA HO:MI+ZONE\\n\"", 
        "\"Last-Translator: FULL NAME <EMAIL@ADDRESS>\\n\"", 
        "\"Language-Team: LANGUAGE <LL@li.org>\\n\"", "\"Language: \\n\"", 
        "\"MIME-Version: 1.0\\n\"", "\"Content-Type: text/plain; charset=CHARSET\\n\"", 
        "\"Content-Transfer-Encoding: 8bit\\n\"", if (length(un)) "\"Plural-Forms: nplurals=INTEGER; plural=EXPRESSION;\\n\""))
    for (e in msgid) writeLines(con = con, c("", paste("msgid", 
        e), "msgstr \"\""))
    for (ee in msgid_plural) for (e in ee) if (e[1L] %in% un) {
        writeLines(con = con, c("", paste("msgid       ", shQuote(encodeString(e[1L]), 
            type = "cmd")), paste("msgid_plural", shQuote(encodeString(e[2L]), 
            type = "cmd")), "msgstr[0]    \"\"", "msgstr[1]    \"\""))
        un <- un[-match(e, un)]
    }
}
