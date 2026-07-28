#? stdlib
`parse_Rd` <- function (file, srcfile = NULL, encoding = "unknown", verbose = FALSE, 
    fragment = FALSE, warningCalls = TRUE, macros = file.path(R.home("share"), 
        "Rd", "macros", "system.Rd"), permissive = FALSE) 
{
    if (is.character(file)) {
        file0 <- file
        if (file == "") {
            file <- stdin()
        }
        else {
            if (missing(srcfile)) 
                srcfile <- srcfile(file)
        }
    }
    else file0 <- "<connection>"
    lines <- readLines(file, warn = FALSE)
    if (is.character(macros)) 
        macros <- initialRdMacros(macros = macros)
    lines[lines == "\\non_function{}"] <- ""
    enc <- grep("\\encoding{", lines, fixed = TRUE, useBytes = TRUE, 
        value = TRUE)
    enc <- grep("^[[:space:]]*\\\\encoding\\{([^}]*)\\}.*", enc, 
        value = TRUE)
    if (length(enc)) {
        if (length(enc) > 1L) 
            warning(file0, ": multiple \\encoding lines, using the first", 
                domain = NA, call. = warningCalls)
        enc <- enc[1L]
        enc <- sub("^[[:space:]]*\\\\encoding\\{([^}]*)\\}.*", 
            "\\1", enc)
        if (verbose) 
            message("found encoding ", enc, domain = NA)
        encoding <- if (enc %in% c("UTF-8", "utf-8", "utf8")) 
            "UTF-8"
        else enc
    }
    if (length(encoding) != 1L || encoding == "unknown") 
        encoding <- ""
    if (!inherits(srcfile, "srcfile")) 
        srcfile <- srcfile(file0)
    basename <- basename(srcfile$filename)
    srcfile$encoding <- encoding
    srcfile$Enc <- "UTF-8"
    if (encoding == "ASCII") {
        if (anyNA(iconv(lines, "", "ASCII"))) 
            stop(file0, ": non-ASCII input and no declared encoding", 
                domain = NA, call. = warningCalls)
    }
    else {
        validate <- config_val_to_logical(Sys.getenv("_R_CHECK_VALIDATE_UTF8_", 
            "FALSE"))
        if (encoding %in% c("unknown", "") && l10n_info()[["UTF-8"]]) 
            encoding <- "UTF-8"
        if (encoding %in% c("UTF-8", "UTF8")) {
            valid <- validUTF8(lines)
            if (any(!valid)) 
                if (validate) 
                  stop(sprintf("invalid UTF-8 in file %s", sQuote(file0)), 
                    domain = NA, call. = FALSE)
                else warning(sprintf("invalid UTF-8 in file %s", 
                  sQuote(file0)), domain = NA, call. = FALSE)
        }
        if (encoding != "UTF-8") 
            lines <- iconv(lines, encoding, "UTF-8", sub = "byte")
        bytes <- charToRaw(lines[1L])
        if (identical(as.integer(bytes[1L:3L]), c(239L, 187L, 
            191L))) 
            lines[1L] <- rawToChar(bytes[-(1L:3L)])
    }
    tcon <- file()
    writeLines(lines, tcon, useBytes = TRUE)
    on.exit(close(tcon))
    warndups <- config_val_to_logical(Sys.getenv("_R_WARN_DUPLICATE_RD_MACROS_", 
        "FALSE"))
    result <- if (permissive) 
        withCallingHandlers(.External2(C_parseRd, tcon, srcfile, 
            "UTF-8", verbose, basename, fragment, warningCalls, 
            macros, warndups), warning = function(w) if (grepl("unknown macro", 
            conditionMessage(w))) 
            tryInvokeRestart("muffleWarning"))
    else .External2(C_parseRd, tcon, srcfile, "UTF-8", verbose, 
        basename, fragment, warningCalls, macros, warndups)
    result <- expandDynamicFlags(result)
    if (permissive) 
        permissify(result)
    else result
}
