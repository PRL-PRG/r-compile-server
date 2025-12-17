fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.transform_S4_method_markup` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sprintf:cls, reg _S4_method_markup_regexp:*, reg _S4_method_markup_regexp1:V, reg p:p(V +), reg r1:V, reg _strip_backticks:cls, reg sub:cls, reg re:*, reg re1:V, reg p1:p(V +), reg x1:*, reg x2:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), reg r6:V |
    mkenv;
    st x = x;
    sprintf = ldf sprintf;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      _S4_method_markup_regexp = ld `.S4_method_markup_regexp`;
      _S4_method_markup_regexp1 = force? _S4_method_markup_regexp;
      checkMissing(_S4_method_markup_regexp1);
      return _S4_method_markup_regexp1;
    };
    r1 = dyn sprintf("%s(<-)?", p);
    check L1() else D1();
  D1():
    deopt 4 [r1];
  L1():
    st re = r1;
    _strip_backticks = ldf `.strip_backticks`;
    check L2() else D2();
  D2():
    deopt 7 [];
  L2():
    p3 = prom<V +>{
      sub = ldf sub;
      p1 = prom<V +>{
        re = ld re;
        re1 = force? re;
        checkMissing(re1);
        return re1;
      };
      p2 = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r4 = dyn sub(p1, "\\\\S4method{\\2\\7}{\\3}", p2);
      return r4;
    };
    r6 = dyn _strip_backticks(p3);
    check L3() else D3();
  D3():
    deopt 9 [r6];
  L3():
    popenv;
    return r6;
  }
}