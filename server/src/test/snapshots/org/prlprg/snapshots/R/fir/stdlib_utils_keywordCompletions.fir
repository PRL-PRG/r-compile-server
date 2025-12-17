fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3773442701;
    st keywordCompletions = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3773442701(text) {
  (reg text:*) -+> V { var text:*, reg findExactMatches:cls, reg sprintf:cls, reg makeRegexpSafe:cls, reg text1:*, reg text2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg c:cls, reg r7:V, reg p3:p(V +), reg r9:V |
    mkenv;
    st text = text;
    findExactMatches = ldf findExactMatches;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p2 = prom<V +>{
      sprintf = ldf sprintf;
      p1 = prom<V +>{
        makeRegexpSafe = ldf makeRegexpSafe;
        p = prom<V +>{
          text1 = ld text;
          text2 = force? text1;
          checkMissing(text2);
          return text2;
        };
        r1 = dyn makeRegexpSafe(p);
        return r1;
      };
      r3 = dyn sprintf("^%s", p1);
      return r3;
    };
    p3 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r6):
      return r6;
    L1():
      c = ldf c in base;
      r7 = dyn c("NULL", "NA", "TRUE", "FALSE", "Inf", "NaN", "NA_integer_", "NA_real_", "NA_character_", "NA_complex_", "repeat ", "in ", "next ", "break ", "else ");
      goto L0(r7);
    L2():
      r5 = dyn base("NULL", "NA", "TRUE", "FALSE", "Inf", "NaN", "NA_integer_", "NA_real_", "NA_character_", "NA_complex_", "repeat ", "in ", "next ", "break ", "else ");
      goto L0(r5);
    };
    r9 = dyn findExactMatches(p2, p3);
    check L1() else D1();
  D1():
    deopt 4 [r9];
  L1():
    popenv;
    return r9;
  }
}