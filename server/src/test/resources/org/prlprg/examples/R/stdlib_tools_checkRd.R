#? stdlib
`checkRd` <- function (Rd, defines = .Platform$OS.type, stages = "render", 
    unknownOK = TRUE, listOK = TRUE, ..., def_enc = FALSE) 
{
    allow_empty_item_in_describe <- config_val_to_logical(Sys.getenv("_R_CHECK_RD_ALLOW_EMPTY_ITEM_IN_DESCRIBE_", 
        "FALSE"))
    note_lost_braces <- config_val_to_logical(Sys.getenv("_R_CHECK_RD_NOTE_LOST_BRACES_", 
        "TRUE"))
    warnRd <- function(block, Rdfile, ..., level = 0L) {
        msg <- sprintf("checkRd: (%d) %s", level, .makeMessageRd(block, 
            Rdfile, ...))
        .messages <<- c(.messages, msg)
    }
    checkLink <- function(tag, block) {
        option <- attr(block, "Rd_option")
        if (!is.null(option)) 
            checkContent(option, tag)
        checkContent(block, tag)
        get_link(block, tag, Rdfile)
    }
    checkEmail <- function(block) {
        pattern <- .make_RFC_2822_email_address_regexp()
        if (length(block)) {
            address <- lines2str(.Rd_deparse(block, tag = FALSE))
            if (!grepl(re_anchor(pattern), address)) 
                warnRd(block, Rdfile, level = 7, "Invalid email address: ", 
                  address)
        }
    }
    checkURL <- function(block, tag) {
        pattern <- .make_RFC_2822_email_address_regexp()
        if (tag == "\\url") 
            u <- .Rd_deparse(block, tag = FALSE)
        else u <- .Rd_deparse(block[[1L]], tag = FALSE)
        u <- lines2str(u)
        parts <- parse_URI_reference(u)
        if (nzchar(s <- parts[, "scheme"])) {
            if (is.na(match(s, c(IANA_URI_scheme_db$URI_Scheme, 
                "javascript"))) || ((s == "mailto") && !grepl(re_anchor(pattern), 
                parts[, "path"]))) 
                warnRd(block, Rdfile, level = 7, "Invalid URL: ", 
                  u)
        }
    }
    checkLIST <- function(block, tag, blocktag, preblocks = NULL) {
        if (!length(block) || inherits(block, "Rd")) 
            return()
        if (!listOK) 
            stopRd(block, Rdfile, "Lost braces", showSource = TRUE)
        level <- -3
        msg2 <- NULL
        showSource <- TRUE
        if (note_lost_braces) {
            npre <- length(preblocks)
            pretags <- vapply(preblocks, function(block) {
                tag <- attr(block, "Rd_tag")
                if (tag == "TEXT" && grepl("^[[:space:]]*$", 
                  block)) 
                  "BLANK"
                else tag
            }, "")
            pretagsNB <- pretags[pretags != "BLANK"]
            if (npreNB <- length(pretagsNB)) {
                pretag <- pretagsNB[npreNB]
                tags <- RdTags(block)
                inItemize <- blocktag %in% c("\\itemize", "\\enumerate")
                separated <- npre == 0L || pretags[npre] == "BLANK" || 
                  (pretags[npre] == "TEXT" && !grepl("([[:alnum:]]|\\\\[[:punct:]]|[])])$", 
                    preblocks[[npre]]))
                ignore <- (length(tags) == 1L && startsWith(tags, 
                  "\\") && separated) || (length(tags) == 2L && 
                  tags[1L] == "USERMACRO") || (inItemize && pretag == 
                  "\\item") || pretag == "\\tab" || (!is.null(srcref <- attr(block, 
                  "srcref")) && srcref[1L] == srcref[3L] && srcref[5L] > 
                  srcref[6L]) || (sectiontag %in% c("\\source", 
                  "\\references") && (separated || pretag == 
                  "\\cr"))
                if (!ignore) {
                  level <- -1
                  if (inItemize && npreNB > 1L && pretag == "LIST" && 
                    pretagsNB[npreNB - 1L] == "\\item") {
                    msg2 <- paste0(" in ", blocktag, "; ", if (sectiontag == 
                      "\\value") 
                      "\\value handles \\item{}{} directly"
                    else "meant \\describe ?")
                    showSource <- FALSE
                  }
                  else if (separated && identical(tags, "TEXT")) {
                    msg2 <- "; missing escapes or markup?"
                  }
                }
            }
        }
        warnRd(block, Rdfile, level = level, "Lost braces", msg2, 
            showSource = showSource)
    }
    checkBlock <- function(block, tag, blocktag, preblocks = NULL) {
        switch(tag, UNKNOWN = if (!unknownOK) stopRd(block, Rdfile, 
            "Unrecognized macro ", block[[1L]]), VERB = , RCODE = , 
            TEXT = if (!grepl("^[[:space:]]*$", block)) {
                has_text <<- TRUE
                if (inEnc2 || !def_enc) {
                  msg2 <- if (inEnc2) "in second part of \\enc" else "without declared encoding"
                  if (Encoding(block) == "UTF-8") warnRd(block, 
                    Rdfile, level = -1, "Non-ASCII contents ", 
                    msg2, ":\n  ", sQuote(trimws(block)))
                }
                if (tag == "TEXT") {
                  pat <- "([^\\]|^)\\\\[#$&_^~]"
                  if (grepl(pat, block)) {
                    txt <- sub("^[^\\]*", "", unlist(regmatches(block, 
                      gregexpr(pat, block))))
                    warnRd(block, Rdfile, level = -1, "Escaped LaTeX specials: ", 
                      paste(txt, collapse = " "))
                  }
                }
            }, USERMACRO = , `\\newcommand` = , `\\renewcommand` = , 
            COMMENT = {
            }, LIST = {
                checkLIST(block, tag, blocktag, preblocks)
                checkContent(block, tag)
            }, `\\describe` = , `\\enumerate` = , `\\itemize` = , 
            `\\bold` = , `\\cite` = , `\\command` = , `\\dfn` = , 
            `\\emph` = , `\\kbd` = checkContent(block, tag), 
            `\\code` = , `\\preformatted` = checkCodeBlock(block, 
                tag), `\\Sexpr` = , `\\special` = , `\\strong` = , 
            `\\var` = , `\\verb` = checkContent(block, tag), 
            `\\linkS4class` = , `\\link` = checkLink(tag, block), 
            `\\email` = {
                checkEmail(block)
                has_text <<- TRUE
            }, `\\url` = {
                checkURL(block, tag)
                has_text <<- TRUE
            }, `\\cr` = {
            }, `\\dots` = , `\\ldots` = , `\\R` = has_text <<- TRUE, 
            `\\abbr` = , `\\acronym` = , `\\env` = , `\\file` = , 
            `\\option` = , `\\pkg` = , `\\samp` = , `\\sQuote` = , 
            `\\dQuote` = checkContent(block, tag), `\\method` = , 
            `\\S3method` = , `\\S4method` = warnRd(block, Rdfile, 
                level = 7, "Tag ", tag, " not valid outside a code block"), 
            `\\enc` = {
                checkContent(block[[1L]], tag)
                save_enc <- def_enc
                def_enc <<- FALSE
                inEnc2 <<- TRUE
                checkContent(block[[2L]], tag)
                def_enc <<- save_enc
                inEnc2 <<- FALSE
            }, `\\eqn` = , `\\deqn` = , `\\figure` = {
                checkContent(block[[1L]], tag)
                if (length(block) > 1L) checkContent(block[[2L]], 
                  tag)
            }, `\\tabular` = checkTabular(block), `\\subsection` = {
                checkSection(block, tag)
                has_text <<- TRUE
            }, `\\if` = , `\\ifelse` = {
                condition <- block[[1L]]
                tags <- RdTags(condition)
                if (!all(tags %in% c("TEXT", "\\Sexpr"))) stopRd(block, 
                  Rdfile, "Condition must be \\Sexpr or plain text")
                condition <- condition[tags == "TEXT"]
                allow <- trimws(strsplit(paste(condition, collapse = ""), 
                  ",")[[1L]])
                unknown <- allow %w/o% c("", "latex", "example", 
                  "text", "html", "TRUE", "FALSE")
                if (length(unknown)) warnRd(block, Rdfile, level = 7, 
                  "Unrecognized format: ", unknown)
                checkContent(block[[2L]], tag)
                if (tag == "\\ifelse") checkContent(block[[3L]], 
                  tag)
            }, `\\href` = {
                if (!identical(RdTags(block[[1L]]), "VERB")) stopRd(block, 
                  Rdfile, "First argument to \\href must be verbatim URL")
                checkURL(block, tag)
                checkContent(block[[2L]], tag)
            }, `\\out` = {
                tags <- RdTags(block)
                if (!all(tags == "VERB")) stopRd(block, Rdfile, 
                  "Must contain verbatim text")
            }, warnRd(block, Rdfile, level = 7, "Tag ", tag, 
                " not recognized"))
    }
    checkCodeBlock <- function(blocks, blocktag) {
        for (block in blocks) {
            tag <- attr(block, "Rd_tag")
            switch(tag, UNKNOWN = if (!unknownOK) stopRd(block, 
                Rdfile, "Unrecognized macro ", block[[1L]]), 
                VERB = , RCODE = , TEXT = if (!grepl("^[[:space:]]*$", 
                  block)) {
                  has_text <<- TRUE
                  if ((inEnc2 || !def_enc) && Encoding(block) == 
                    "UTF-8") {
                    msg2 <- if (inEnc2) "in second part of \\enc" else "without declared encoding"
                    warnRd(block, Rdfile, level = -1, "Non-ASCII contents ", 
                      msg2, ":\n  ", sQuote(trimws(block)))
                  }
                }, USERMACRO = , `\\newcommand` = , `\\renewcommand` = , 
                COMMENT = {
                }, `\\var` = checkCodeBlock(block, blocktag), 
                `\\special` = checkCodeBlock(block, blocktag), 
                `\\dots` = has_text <<- TRUE, `\\ldots` = {
                  warnRd(block, Rdfile, level = -3, "Tag ", tag, 
                    " is invalid in a code block")
                  has_text <<- TRUE
                }, `\\linkS4class` = , `\\link` = checkLink(tag, 
                  block), `\\method` = , `\\S3method` = , `\\S4method` = if (blocktag == 
                  "\\usage") {
                  checkContent(block[[1L]], tag)
                  checkContent(block[[2L]], tag)
                } else warnRd(block, Rdfile, level = 7, "Tag ", 
                  tag, " is only valid in \\usage"), `\\dontrun` = , 
                `\\donttest` = , `\\dontdiff` = , `\\dontshow` = , 
                `\\testonly` = if (blocktag == "\\examples") checkCodeBlock(block, 
                  blocktag) else warnRd(block, Rdfile, level = 7, 
                  "Tag ", tag, " is only valid in \\examples"), 
                {
                  warnRd(block, Rdfile, level = 7, "Tag ", tag, 
                    " is invalid in a ", blocktag, " block")
                  has_text <<- TRUE
                })
        }
    }
    checkTabular <- function(table) {
        has_text <<- TRUE
        format <- table[[1L]]
        content <- table[[2L]]
        if (length(format) != 1 || RdTags(format) != "TEXT") 
            warnRd(table, Rdfile, level = 7, "\\tabular format must be simple text")
        format <- strsplit(format[[1L]], "", fixed = TRUE)[[1L]]
        if (!all(format %in% c("l", "c", "r"))) 
            warnRd(table, Rdfile, level = 7, "Unrecognized \\tabular format: ", 
                table[[1L]][[1L]])
        tags <- RdTags(content)
        newrow <- TRUE
        for (i in seq_along(tags)) {
            if (newrow) {
                newrow <- FALSE
                col <- 0
                newcol <- TRUE
            }
            if (newcol) {
                col <- col + 1
                if (col > length(format)) 
                  warnRd(table, Rdfile, level = 7, "Only ", length(format), 
                    if (length(format) == 1) 
                      " column "
                    else " columns ", "allowed in this table")
                newcol <- FALSE
            }
            switch(tags[i], `\\tab` = {
                newcol <- TRUE
            }, `\\cr` = {
                newrow <- TRUE
            }, checkBlock(content[[i]], tags[i], "\\tabular", 
                content[seq_len(i - 1L)]))
        }
    }
    checkContent <- function(blocks, blocktag) {
        inlist <- FALSE
        tags <- RdTags(blocks)
        for (i in seq_along(tags)) {
            tag <- tags[i]
            block <- blocks[[i]]
            switch(tag, `\\item` = {
                if (!inlist) inlist <- TRUE
                CHECK_BLOCKS <- c(if (!allow_empty_item_in_describe) "\\describe", 
                  "\\arguments", "\\value")
                if ((blocktag %in% CHECK_BLOCKS) && isBlankRd(block[[1L]])) warnRd(block, 
                  Rdfile, level = 5, "\\item in ", blocktag, 
                  " must have non-empty label")
                switch(blocktag, `\\arguments` = {
                  checkContent(block[[1L]], tag)
                  checkContent(block[[2L]], tag)
                }, `\\value` = , `\\describe` = {
                  checkContent(block[[1L]], tag)
                  checkContent(block[[2L]], tag)
                }, `\\enumerate` = , `\\itemize` = {
                })
            }, {
                if (inlist && (blocktag %notin% c("\\itemize", 
                  "\\enumerate")) && !(tag == "TEXT" && isBlankRd(block))) {
                  inlist <- FALSE
                }
                checkBlock(block, tag, blocktag, blocks[seq_len(i - 
                  1L)])
            })
        }
    }
    has_text <- FALSE
    checkSection <- function(section, tag) {
        s0 <- section
        if (tag == "\\section" || tag == "\\subsection") {
            title <- section[[1L]]
            checkContent(title, tag)
            section <- section[[2L]]
            tagtitle <- sQuote(trimws(.Rd_deparse(title)))
        }
        else tagtitle <- tag
        has_text <<- FALSE
        if (tag %in% c("\\usage", "\\examples")) 
            checkCodeBlock(section, tag)
        else checkContent(section, tag)
        if (!has_text) 
            warnRd(s0, Rdfile, level = 3, "Empty section ", tagtitle)
        if (tag %in% c("\\title", "\\section", "\\subsection")) {
            rd <- .Rd_deparse(if (tag == "\\title") 
                section
            else title, tag = FALSE)
            if (grepl("[^.]\\.[[:space:]]*$", rd) && !grepl("(etc|et[[:space:]]+al)\\.[[:space:]]*$", 
                rd)) 
                warnRd(s0, Rdfile, level = -5, tag, if (tag != 
                  "\\title") 
                  " name", " should not end in a period")
        }
    }
    .messages <- character()
    .whandler <- function(e) {
        .messages <<- c(.messages, paste("prepare_Rd:", conditionMessage(e)))
        tryInvokeRestart("muffleWarning")
    }
    Rd <- withCallingHandlers({
        prepare_Rd(Rd, defines = defines, stages = stages, warningCalls = FALSE, 
            ..., msglevel = 1)
    }, warning = .whandler)
    Rdfile <- attr(Rd, "Rdfile")
    name <- as.character(Rd[[2L]])
    if (grepl("[!|@]", name)) 
        warnRd(Rd[[2L]], Rdfile, level = 5, "\\name should not contain !, | or @")
    if (Encoding(name) == "UTF-8" || !all(utils::charClass(trimws(name), 
        "print"))) 
        warnRd(Rd[[2L]], Rdfile, level = -1, "\\name should only contain printable ASCII characters")
    sections <- RdTags(Rd)
    if (any(sections == "\\encoding")) 
        def_enc <- TRUE
    inEnc2 <- FALSE
    for (i in seq_along(sections)) {
        sectiontag <- sections[i]
        checkSection(Rd[[i]], sections[i])
    }
    structure(.messages, class = "checkRd")
}

# Examples
## parsed Rd from the installed version of _this_ help file
rd <- Rd_db("tools")[["checkRd.Rd"]]
\donttest{rd}
stopifnot(length(checkRd(rd)) == 0)  # there should be no issues

## make up \tabular issues
bad <- r"(\name{bad}\title{bad}\description{\tabular{p}{1 \tab 2}})"
(res <- checkRd(parse_Rd(textConnection(bad))))
stopifnot(length(res) > 0)

