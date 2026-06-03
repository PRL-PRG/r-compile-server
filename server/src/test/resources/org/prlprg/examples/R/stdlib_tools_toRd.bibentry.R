#? stdlib
`toRd.bibentry` <- function (obj, style = NULL, ...) 
{
    obj <- sort(obj, .bibstyle = style)
    style <- bibstyle(style, .default = FALSE)
    env <- new.env(hash = FALSE, parent = style)
    bib <- unclass(obj)
    result <- character(length(bib))
    for (i in seq_along(bib)) {
        env$paper <- bib[[i]]
        result[i] <- with(env, switch(attr(paper, "bibtype"), 
            Article = formatArticle(paper), Book = formatBook(paper), 
            InBook = formatInbook(paper), InCollection = formatIncollection(paper), 
            InProceedings = formatInProceedings(paper), Manual = formatManual(paper), 
            MastersThesis = formatMastersthesis(paper), Misc = formatMisc(paper), 
            PhdThesis = formatPhdthesis(paper), Proceedings = formatProceedings(paper), 
            TechReport = formatTechreport(paper), Unpublished = formatUnpublished(paper), 
            paste("bibtype", attr(paper, "bibtype"), "not implemented")))
    }
    gsub("(^|[^\\])((\\\\\\\\)*)%", "\\1\\2\\\\%", result)
}
