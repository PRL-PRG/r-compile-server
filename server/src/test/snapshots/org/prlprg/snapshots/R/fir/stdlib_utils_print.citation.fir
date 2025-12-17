fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner80654505;
    st `print.citation` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner80654505(x, style, `...`) {
  (reg x:*, reg style:*, reg ddd:dots) -+> V { var x:*, var style:*, reg style_isMissing:L, reg style_orDefault:*, var `...`:dots?, reg print_bibentry:cls, reg x1:*, reg x2:V, reg p:p(V +), reg style1:*, reg style2:V, reg p1:p(V +), reg ddd1:dots?, reg r2:V |
    mkenv;
    st x = x;
    style_isMissing = missing.0(style);
    if style_isMissing then L0("citation") else L0(style);
  L0(style_orDefault):
    st style = style_orDefault;
    st `...` = ddd;
    print_bibentry = ldf `print.bibentry`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p1 = prom<V +>{
      style1 = ld style;
      style2 = force? style1;
      checkMissing(style2);
      return style2;
    };
    ddd1 = ld `...`;
    r2 = dyn print_bibentry[, style, `...`](p, p1, ddd1);
    check L2() else D1();
  D1():
    deopt 6 [r2];
  L2():
    popenv;
    return r2;
  }
}