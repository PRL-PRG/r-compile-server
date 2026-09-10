// Grammar of FIŘ, the functional IR in `org.prlprg.fir`.
//
// This is the textual form read by `org.prlprg.fir.parseprint.ModuleParseContext` and written by
// `org.prlprg.fir.parseprint.IrPrintContext`. It only describes syntax; see `FIR.md` for the
// static semantics (typing, ownership, effects, and well-formedness).
//
// Build with `typst compile grammar.typ`.

#set page(paper: "a4", margin: 2cm)
#set text(size: 10pt)

// --- Notation helpers ----------------------------------------------------------------------------

// Keyword terminal (bold typewriter).
#let kw(s) = math.bold(math.mono(s))
// Punctuation terminal (typewriter).
#let tt(s) = math.mono(s)
// Multi-letter nonterminal (italic, so it isn't confused with an upright operator name).
#let nt(s) = math.italic(s)
// Empty production.
#let eps = math.epsilon
// `x_1, ..., x_n` (comma-separated).
#let seq(x, n: $n$) = $attach(#x, br: 1), dots, attach(#x, br: #n)$
// `x_1 ... x_n` (whitespace-separated).
#let wseq(x, n: $n$) = $attach(#x, br: 1) dots attach(#x, br: #n)$
// `x_1:t_1, ..., x_n:t_n`
#let tseq(x, t, n: $n$) = $attach(#x, br: 1) attach(#t, br: 1), dots, attach(#x, br: #n) attach(#t, br: #n)$
// Alternative separator that fits on one line.
#let alt = $quad | quad$
// Marks a line that continues the previous alternative instead of starting a new one.
#let cont(c) = (cont: c)

// A grammar table. Each rule is `(lhs, line, line, ...)`: the first line follows `::=`, the rest
// follow `|` (or nothing, if wrapped in `cont`). A line may itself hold several alternatives
// separated by `alt`.
#let grammar(..rules) = {
  let cells = ()
  for rule in rules.pos() {
    let lhs = rule.at(0)
    let first = true
    for line in rule.slice(1) {
      if type(line) == dictionary {
        cells.push([])
        cells.push([])
        cells.push(h(1.5em) + line.cont)
      } else {
        cells.push(if first { lhs } else { [] })
        cells.push(if first { $::=$ } else { $|$ })
        cells.push(line)
      }
      first = false
    }
  }
  table(
    columns: 3,
    align: (right, center, left),
    stroke: none,
    inset: (x: 3pt, y: 2.5pt),
    ..cells,
  )
}

// --- Metavariables -------------------------------------------------------------------------------

#let fn = nt("fn")
#let prop = nt("prop")
#let ver = nt("ver")
#let prm = nt("par")
#let body = nt("body")
#let bb = nt("bb")
#let blk = nt("blk")
#let sig = nt("sig")
#let ptp = nt("pt")
#let fx = nt("fx")
#let ox = nt("ox")
#let pk = nt("pk")
#let tg = nt("tg")
#let na = nt("na")
#let on = nt("on")
#let dm = nt("dm")
#let env = nt("env")
#let sexp = nt("sexp")
#let strb = nt("str")

// `-fx>`
#let arrow = $tt("-")#h(0pt)fx#h(0pt)tt(">")$

= FIŘ syntax

FIŘ (Functional IR) is the intermediate representation defined in `org.prlprg.fir`. This document
gives its textual grammar, which is what `.fir` files, test snapshots, and the parser/printer in
`org.prlprg.fir.parseprint` use. The static semantics (typing, ownership, effects, and
well-formedness) are described in `FIR.md`.

== Notation

Keywords and punctuation are set in #kw("bold") and #tt("typewriter"). Nonterminals are set in
italics; the single-letter ones are the metavariables below. $eps$ is the empty production.
$attach(x, br: 1), dots, attach(x, br: n)$ is a comma-separated sequence of zero or more $x$, and
$attach(x, br: 1) dots attach(x, br: n)$ a whitespace-separated one.

#table(
  columns: (auto, 1fr),
  stroke: none,
  inset: (x: 4pt, y: 2.5pt),
  [$f$, $x$], [
    An R name (function name, function parameter name, or named environment variable): an
    identifier, or any non-empty string in backticks (`` `...` ``) with backticks and backslashes
    escaped.
  ],
  [$r$], [
    A register name: an identifier (letters, digits, `_`; not `_` alone). Registers are SSA values
    and are named at their single definition site: a version parameter, a block parameter, or a
    statement assignee. By convention they don't start with an uppercase letter, so they're
    visibly distinct from block labels.
  ],
  [$L$], [A basic block label: an identifier.],
  [$i$, $d$], [
    An unboxed integer literal (`42`, `-1`) and an unboxed real literal (`1.5`, `1e3`). A
    number is an integer unless it has a decimal point or exponent.
  ],
  [$strb$], [A string body, in double quotes with the usual escapes.],
  [$sexp$], [
    A boxed R value in the SEXP syntax of `org.prlprg.sexp.parseprint`, always delimited by `<`
    and `>`: e.g. `<int 42>`, `<real 1.5>`, `<sym x>`, `<missing>`, `<nil>`.
  ],
)

Comment lines (`#` to the end of the line) may precede any function, version, block header, or
instruction, and are preserved by the printer. Whitespace is insignificant except where it
separates tokens.

== Modules, functions, versions, and types

#figure(
  grid(
    columns: (auto, auto),
    column-gutter: 2em,
    align: top,
    grammar(
      ($F$, $wseq(fn)$),
      ($fn$, $wseq(prop, n: k) space kw("fun") f tt("(")seq(x)tt(")") tt("{")$,
             cont($wseq(ver, n: m) tt("}")$)),
      ($prop$, $tt("@strict") alt tt("@liteSpecial")$),
      ($ver$, $tt("(")seq(prm)tt(")") arrow t tt("{") body tt("}")$,
              $tt("(")seq(prm)tt(")") arrow t tt("{") tt("...") tt("}")$),
      ($prm$, $kw("reg") r tt(":") t alt kw("reg") r tt(":") t tt("@!")$),
      ($body$, $blk space wseq(bb)$),
      ($bb$, $L tt("(")tseq(r, tt(":") t)tt(")")tt(":") blk$),
      ($blk$, $attach(s, br: 1)tt(";") dots attach(s, br: n)tt(";") space j tt(";")$),
    ),
    grammar(
      ($sig$, $seq(ptp) space arrow t$),
      ($ptp$, $t alt t tt("@!")$),
      ($t$, $tt("*") alt q alt q tt("?")$),
      ($q$, $k alt tt("p(")k space fx#h(0pt)tt(")") alt tt("p?(")k space fx#h(0pt)tt(")")$),
      ($k$, $tt("V") alt tt("B") alt tt("cls") alt tt("dots") alt tt("miss") alt pk$,
            $tt("v(")pk#h(0pt)tt(")")ox alt tt("v1(")pk#h(0pt)tt(")")ox$),
      ($pk$, $tt("I") alt tt("L") alt tt("R") alt tt("S")$),
      ($ox$, $eps alt tt("s") alt tt("o") alt tt("b") alt tt("f")$),
      ($fx$, $tt("-") alt tt("~") alt tt("+")$),
    ),
  ),
  caption: [Module structure and types],
) <syn-module>

A function has $m >= 1$ versions; the first is its _baseline_ and the rest are specializations,
each with the same number of parameters as the function has parameter names. A version with body
$tt("...")$ is a _stub_ (a declaration without code, e.g. a builtin). The entry block has no
header: a version body starts directly with the entry block's instructions, followed by the
labeled blocks. Block parameters ($L tt("(")r tt(":") t tt(")")$) are MLIR-style phis, and jump
targets supply their arguments.

Types are read as follows. $k$ is the kind of the value: $tt("V")$ is any R value, $tt("B")$ an
unboxed boolean, $tt("cls")$ a closure, $tt("dots")$ a `...` list, $tt("miss")$ the missing
argument, $pk$ an unboxed primitive scalar (integer, logical, real, string), $tt("v(")pk#h(0pt)tt(")")$
a primitive vector, and $tt("v1(")pk#h(0pt)tt(")")$ a primitive vector of length one (a boxed scalar).
Only vectors carry an ownership $ox$: shared ($tt("s")$, the default and never printed), owned,
borrowed, or fresh. $q$ adds promisity: $tt("p(")k space fx#h(0pt)tt(")")$ is a promise whose forcing
has effects $fx$ and yields a $k$; $tt("p?(")k space fx#h(0pt)tt(")")$ is either such a promise or a
$k$ value. A trailing $tt("?")$ makes the type _maybe_: a variable of type $q tt("?")$ can hold a
value of another type that was written by reflection. $tt("*")$ is the top type, sugar for
$tt("p?(V +)?")$. Effects $fx$ are none ($tt("-")$, pure), impure without reflection
($tt("~")$), or any including reflection ($tt("+")$). $tt("@!")$ marks a promise-typed parameter
as _strict_: the version forces it on every path.

== Instructions, expressions, and arguments

#figure(
  grid(
    columns: (auto, auto),
    column-gutter: 2em,
    align: top,
    grammar(
      ($s$, $e alt r tt(":") t tt("=") e$),
      ($j$, $kw("goto") tg$,
            $kw("if") a kw("then") tg kw("else") tg$,
            $kw("check") tg kw("else") tg$,
            $kw("deopt") i tt("[")seq(a)tt("]")$,
            $kw("return") a alt kw("raise") a alt kw("unreachable")$),
      ($tg$, $L tt("(")seq(a)tt(")")$),
      ($a$, $c alt r alt kw("consume") r$),
      ($na$, $a alt x tt("=") a$),
      ($on$, $eps alt x$),
      ($dm$, $eps alt tt("%")$),
      ($env$, $eps alt tt("@")a$),
      ($c$, $i alt d alt tt("\"")strb#h(0pt)tt("\"") alt tt("<")sexp#h(0pt)tt(">")$,
            $tt("TRUE") alt tt("FALSE")$,
            $tt("TRUE_LGL") alt tt("FALSE_LGL") alt tt("NA_LGL")$,
            $tt("NA_INT") alt tt("NA_REAL") alt tt("NA_STR")$),
    ),
    grammar(
      ($e$, $kw("noop")$,
            $kw("mkenv") alt kw("mkenv~") alt kw("mkenv-") alt kw("popenv")$,
            $kw("ld") x alt kw("ld-super") x$,
            $kw("ldf") x alt kw("ldf-glob") x alt kw("ldf-base") x$,
            $kw("st") x tt("=") a alt kw("st-super") x tt("=") a$,
            $a tt("$")x alt a tt("$")x tt("=") a$,
            $kw("v(")pk#h(0pt)kw(")")tt("[")seq(a)tt("]") alt kw("dots")tt("[")seq(na)tt("]")$,
            $a tt("[")a#h(0pt)tt("]") alt a tt("[[")a#h(0pt)tt("]]") alt a tt("[")a#h(0pt)tt("]") tt("=") a$,
            $f dm env tt("<") sig#h(0pt)tt(">")tt("(")seq(a)tt(")")$,
            $kw("dyn") a tt("(")seq(a)tt(")")$,
            $kw("dyn") a tt("[")seq(on)tt("]")tt("(")seq(a)tt(")")$,
            $kw("clos") f alt kw("clos-static") f$,
            $kw("prom")tt("<")t space fx#h(0pt)tt(">")tt("{") body tt("}")$,
            $kw("prom-")tt("<")t space fx#h(0pt)tt(">")tt("{") body tt("}")$,
            $kw("force") a alt kw("force?") a$,
            $kw("dup") a$,
            $a kw("as") t$,
            $a tt("?:") t alt a tt("?=") c alt a tt("?-") f$,
            $kw("ld") x tt("?=") c alt kw("ldf") x tt("?-") f$),
    ),
  ),
  caption: [Instructions, expressions, and arguments],
) <syn-body>

A statement is an expression, optionally assigned to a register that is defined and typed right
there ($r tt(":") t tt("=") e$). Every block ends with exactly one jump $j$. Arguments $a$ are the
only sub-expressions: an expression can't nest another expression, only a constant, a register
read, or $kw("consume") r$, which reads an owned vector for the last time and moves it out.
Unboxed constants have unboxed types: $i$ is an $tt("I")$, $d$ an $tt("R")$, a string an
$tt("S")$, $tt("TRUE")$/$tt("FALSE")$ are $tt("B")$, and
$tt("TRUE_LGL")$/$tt("FALSE_LGL")$/$tt("NA_LGL")$ are $tt("L")$. Boxed R values are written as
$tt("<")sexp#h(0pt)tt(">")$.

The expressions, in the order of @syn-body:

- $kw("noop")$ does nothing (a placeholder the optimizer leaves behind and later removes).
- $kw("mkenv")$ creates the closure environment; $kw("mkenv~")$ creates one that's assumed not to
  be observed by reflection; $kw("mkenv-")$ is an elided environment that isn't materialized (a
  deopt re-creates it). $kw("popenv")$ discards the innermost environment.
- $kw("ld") x$ / $kw("st") x tt("=") a$ load and store a named variable in the innermost
  environment; the $tt("-super")$ forms skip it (R's `<<-`). $kw("ldf") x$ looks $x$ up as a
  function (forcing promises and skipping non-closures); $kw("ldf-glob")$ and $kw("ldf-base")$
  start the lookup in the global and base environment.
- $a tt("$")x$ and $a tt("$")x tt("=") a$ reflectively load and store $x$ in the environment of
  the promise $a$.
- $kw("v(")pk#h(0pt)kw(")")tt("[")dots#h(0pt)tt("]")$ builds a primitive vector from unboxed elements;
  $kw("dots")tt("[")dots#h(0pt)tt("]")$ builds a `...` list of optionally named elements.
- $a tt("[")a#h(0pt)tt("]")$ reads an element (0-based; out-of-range reads `NA`); $a tt("[[")a#h(0pt)tt("]]")$
  is the same but fails out of range (R's `[[`); $a tt("[")a#h(0pt)tt("]") tt("=") a$ writes an
  element of an owned or fresh vector in place.
- $f dm env tt("<") sig#h(0pt)tt(">")tt("(")dots#h(0pt)tt(")")$ calls the function $f$ with the given
  signature. $dm = tt("%")$ makes it a _dispatch_ call (the version is chosen at run time);
  otherwise the version is chosen statically. $env = tt("@")a$ passes the closure $a$ whose
  environment the callee uses; when omitted the closure is elided.
- $kw("dyn") a tt("(")dots#h(0pt)tt(")")$ calls the closure $a$ that is only known at run time; the
  bracketed list names arguments (an empty $on$ leaves one unnamed) and is omitted when none is
  named.
- $kw("clos") f$ creates a closure of $f$ over the current environment; $kw("clos-static") f$
  over the global environment.
- $kw("prom")tt("<")t space fx#h(0pt)tt(">")tt("{") body tt("}")$ creates a promise whose body returns
  a $t$ with effects $fx$. The body is a CFG in the enclosing version's register namespace.
  $kw("prom-")$ marks the promise _local_: it's speculated not to escape its stack frame, so it
  may read registers defined outside it.
- $kw("force") a$ forces a promise; $kw("force?") a$ forces $a$ if it's a promise and is a no-op
  otherwise. $kw("dup") a$ copies a vector. $a kw("as") t$ casts.
- The $tt("?")$ forms are _assumptions_: no-ops when evaluated, checked at the next
  $kw("check")$. $a tt("?:") t$ assumes $a$ has type $t$, $a tt("?=") c$ that it equals $c$,
  $a tt("?-") f$ that it's a closure of $f$; $kw("ld") x tt("?=") c$ and $kw("ldf") x tt("?-") f$
  fuse a load with the corresponding assumption.

The jumps: $kw("goto")$ is unconditional; $kw("if")$ branches on a $tt("B")$; $kw("check")$
checks the assumptions in its first target and jumps to the second (a deopt block) if any fails;
$kw("deopt") i tt("[")dots#h(0pt)tt("]")$ deoptimizes to GNU-R bytecode position $i$ with the given
stack; $kw("return")$ returns from the version or promise; $kw("raise")$ throws the $tt("S")$ as
an R error; $kw("unreachable")$ marks dead code.
