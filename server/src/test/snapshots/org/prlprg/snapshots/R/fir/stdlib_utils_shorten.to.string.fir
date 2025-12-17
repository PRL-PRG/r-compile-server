fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner495899597;
    st `shorten.to.string` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner495899597(line, token) {
  (reg line:*, reg token:*) -+> V { var line:*, var token:*, reg substr:cls, reg line1:*, reg line2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st line = line;
    st token = token;
    substr = ldf substr;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      line1 = ld line;
      line2 = force? line1;
      checkMissing(line2);
      return line2;
    };
    r1 = dyn substr(p, 1, 1);
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    popenv;
    return r1;
  }
}