#? stdlib
`.DESCRIPTION_to_HTML` <- function (descfile, dynamic = FALSE) 
{
    trfm <- .gsub_with_transformed_matches
    htmlify_text <- function(x, a = FALSE, d = FALSE) {
        x <- fsub("&", "&amp;", x)
        x <- fsub("``", "&ldquo;", x)
        x <- fsub("''", "&rdquo;", x)
        x <- psub("`([^']+)'", "&lsquo;\\1&rsquo;", x)
        x <- fsub("`", "'", x)
        x <- fsub("<", "&lt;", x)
        x <- fsub(">", "&gt;", x)
        if (a) {
            x <- trfm("&lt;(http://|ftp://|https://)([^[:space:],>]+)&gt;", 
                "<a href=\"\\1%s\">\\1\\2</a>", x, urlify, 2L)
        }
        if (d) {
            x <- trfm("&lt;(DOI|doi):[[:space:]]*([^<[:space:]]+[[:alnum:]])&gt;", 
                "&lt;<a href=\"https://doi.org/%s\">doi:\\2</a>&gt;", 
                x, function(u) utils::URLencode(u, TRUE), 2L)
            x <- trfm("&lt;(arXiv|arxiv):(([[:alpha:].-]+/)?[[:digit:].]+)(v[[:digit:]]+)?([[:space:]]*\\[[^]]+\\])?&gt;", 
                "&lt;<a href=\"https://doi.org/10.48550/arXiv.%s\">doi:10.48550/arXiv.\\2</a>&gt;", 
                x, urlify, 2L)
        }
        if (a || d) {
            m <- gregexpr("<a href=\"[^>]*\">[^<>]*</a>", x)
            regmatches(x, m, invert = TRUE) <- lapply(regmatches(x, 
                m, invert = TRUE), function(x) {
                x <- fsub("---", "&mdash;", x)
                x <- fsub("--", "&ndash;", x)
                x
            })
        }
        else {
            x <- fsub("---", "&mdash;", x)
            x <- fsub("--", "&ndash;", x)
        }
        x
    }
    htmlify_compare_ops <- function(x) {
        x <- fsub("<=", "&le;", x)
        x <- fsub(">=", "&ge;", x)
        x <- fsub("!=", "&ne;", x)
        x
    }
    htmlify_license_spec <- function(x, p) {
        do_one <- function(x) {
            x <- gsub("[[:space:]]*([+|])[[:space:]]*", " \\1 ", 
                x)
            a <- analyze_license(x)
            if (!a$is_standardizable) 
                return(htmlify(x))
            htmlify_component_texts <- function(x) {
                x <- fsub("&", "&amp;", x)
                x <- fsub("<=", "&le;", x)
                x <- fsub(">=", "&ge;", x)
                x <- fsub("!=", "&ne;", x)
                x <- fsub("<", "&lt;", x)
                x <- fsub(">", "&gt;", x)
                x
            }
            components <- a$components
            expansions <- unlist(a$expansions)
            expanded <- length(expansions) > length(components)
            y <- character(length(expansions))
            y[expansions == "Unlimited"] <- "Unlimited"
            re <- "(.*[^[:space:]])?(([[:space:]]*\\+[[:space:]]*)?file )(LICEN[CS]E)"
            ind <- grepl(re, expansions)
            if (any(ind)) {
                y[ind] <- sub(re, if (dynamic) {
                  sprintf("\\2<a href=\"/library/%s/\\4\">\\4</a>", 
                    p)
                }
                else "\\2\\4", expansions[ind])
                expansions[ind] <- sub(re, "\\1", expansions[ind])
            }
            ldb <- R_license_db()
            pos <- match(expansions, ldb$Labels)
            ind <- !is.na(pos)
            if (any(ind)) {
                pos <- pos[ind]
                urls <- if (dynamic) {
                  paths <- ldb[pos, "File"]
                  ifelse(nzchar(paths), sprintf("/licenses/%s", 
                    basename(paths)), ldb[pos, "URL"])
                }
                else urls <- ldb[pos, "URL"]
                texts <- if (expanded) {
                  expansions[ind]
                }
                else {
                  sub("[[:space:]]*\\+.*", "", components[ind])
                }
                y[ind] <- sprintf("<a href=\"%s\">%s</a>%s", 
                  vapply(urls, urlify, ""), htmlify_component_texts(texts), 
                  y[ind])
            }
            y <- paste(y, collapse = " | ")
            if (expanded) {
                y <- sprintf("%s [expanded from: %s]", y, paste(htmlify_component_texts(components), 
                  collapse = " | "))
            }
            y
        }
        v <- unique(x)
        s <- vapply(v, do_one, "")
        s[match(x, v)]
    }
    htmlify_depends_spec <- function(x) {
        chunks <- strsplit(x, ",")
        entries <- sub("^[[:space:]]*(.*)[[:space:]]*$", "\\1", 
            unlist(chunks, use.names = FALSE))
        entries <- sub("[[:space:]]*\\(", " (", entries)
        pos <- regexpr("[[:space:]]", entries)
        names <- ifelse(pos == -1L, entries, substring(entries, 
            1L, pos - 1L))
        rests <- ifelse(pos == -1L, "", substring(entries, pos))
        found <- logical(length(names))
        for (lib.loc in .libPaths()) {
            found <- found | file.exists(file.path(lib.loc, names, 
                "DESCRIPTION"))
        }
        names[found] <- sprintf("<a href=\"/library/%s\">%s</a>", 
            names[found], names[found])
        vapply(split(paste(names, rests, sep = ""), rep.int(seq_along(chunks), 
            lengths(chunks))), paste, "", collapse = ", ")
    }
    .format_authors_at_R_field_with_expanded_ORCID_identifier <- function(a) {
        x <- utils:::.read_authors_at_R_field(a)
        format_person1 <- function(e) {
            comment <- e$comment
            pos <- which((names(comment) == "ORCID") & grepl(.ORCID_iD_variants_regexp, 
                comment))
            if ((len <- length(pos)) > 0L) {
                e$family <- c(e$family, paste0("<", paste0("https://replace.me.by.orcid.org/", 
                  .ORCID_iD_canonicalize(comment[pos])), ">"))
                e$comment <- if (len < length(comment)) 
                  comment[-pos]
                else NULL
            }
            e
        }
        x[] <- lapply(unclass(x), format_person1)
        utils:::.format_authors_at_R_field_for_author(x)
    }
    desc <- enc2utf8(.read_description(descfile))
    desc <- desc[nzchar(desc)]
    pack <- desc["Package"]
    aatr <- desc["Authors@R"]
    desc <- desc[names(desc) %w/o% c("Package", "Authors@R")]
    if (!is.na(aatr)) 
        desc["Author"] <- .format_authors_at_R_field_with_expanded_ORCID_identifier(aatr)
    desc["Title"] <- htmlify_text(desc["Title"])
    desc["Description"] <- htmlify_text(desc["Description"], 
        a = TRUE, d = TRUE)
    fields <- setdiff(names(desc), c("Title", "Description", 
        "License"))
    theops <- intersect(fields, c("Depends", "Imports", "LinkingTo", 
        "Suggests", "Enhances"))
    desc[fields] <- fsub("&", "&amp;", desc[fields])
    desc[theops] <- htmlify_compare_ops(desc[theops])
    desc[fields] <- fsub("<", "&lt;", desc[fields])
    desc[fields] <- fsub(">", "&gt;", desc[fields])
    for (f in intersect(fields, c("URL", "BugReports", "Additional_repositories", 
        "git_url"))) {
        trafo <- function(s) urlify(gsub("&amp;", "&", s))
        desc[f] <- trfm("(^|[^>\"?])((https?|ftp)://[^[:space:],]*)", 
            "\\1<a href=\"%s\">\\2</a>", desc[f], trafo, 2L)
    }
    if (!is.na(aatr)) {
        desc["Author"] <- gsub(sprintf("&lt;https://replace.me.by.orcid.org/(%s)&gt;", 
            .ORCID_iD_regexp), paste0("<a href=\"https://orcid.org/\\1\">", 
            "<img alt=\"ORCID iD\"", if (dynamic) 
                "src=\"/doc/html/orcid.svg\" "
            else "src=\"https://cloud.R-project.org/web/orcid.svg\" ", 
            "style=\"width:16px; height:16px; margin-left:4px; margin-right:4px; vertical-align:middle\"", 
            " /></a>"), desc["Author"])
    }
    desc["License"] <- htmlify_license_spec(desc["License"], 
        pack)
    if (dynamic) 
        desc[theops] <- htmlify_depends_spec(desc[theops])
    c("<table>", sprintf("<tr>\n<td>%s:</td>\n<td>%s</td>\n</tr>", 
        names(desc), desc), "</table>")
}
