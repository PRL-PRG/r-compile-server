fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st Rd_expr_doi = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg _canonicalize_doi:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg Rd_escape_specials:cls, reg urlify_doi:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg r5:V, reg Rd_escape_specials1:cls, reg x5:*, reg x6:V, reg p3:p(V +), reg r7:V, reg gsub:cls, reg gsub1:cls, reg x7:*, reg x8:V, reg p4:p(V +), reg r9:V, reg p5:p(V +), reg r11:V, reg sprintf:cls, reg sprintf1:cls, reg x9:*, reg x10:V, reg p6:p(V +), reg u:*, reg u1:V, reg p7:p(V +), reg r14:V, reg p8:p(V +), reg sprintf2:cls, reg u2:*, reg u3:V, reg p9:p(V +), reg y:*, reg y1:V, reg p10:p(V +), reg r18:V, reg p11:p(V +), reg sprintf3:cls, reg u4:*, reg u5:V, reg p12:p(V +), reg x11:*, reg x12:V, reg p13:p(V +), reg r22:V, reg p14:p(V +), reg r24:V |
    mkenv;
    st x = x;
    _canonicalize_doi = ldf `.canonicalize_doi`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn _canonicalize_doi(p);
    check L1() else D1();
  D1():
    deopt 3 [r1];
  L1():
    st x = r1;
    Rd_escape_specials = ldf Rd_escape_specials;
    check L2() else D2();
  D2():
    deopt 6 [];
  L2():
    p2 = prom<V +>{
      urlify_doi = ldf urlify_doi;
      p1 = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      r3 = dyn urlify_doi(p1);
      return r3;
    };
    r5 = dyn Rd_escape_specials(p2);
    check L3() else D3();
  D3():
    deopt 8 [r5];
  L3():
    st u = r5;
    Rd_escape_specials1 = ldf Rd_escape_specials;
    check L4() else D4();
  D4():
    deopt 11 [];
  L4():
    p3 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r7 = dyn Rd_escape_specials1(p3);
    check L5() else D5();
  D5():
    deopt 13 [r7];
  L5():
    st x = r7;
    gsub = ldf gsub;
    check L6() else D6();
  D6():
    deopt 16 [];
  L6():
    p5 = prom<V +>{
      gsub1 = ldf gsub;
      p4 = prom<V +>{
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        return x8;
      };
      r9 = dyn gsub1[, , , fixed]("-", "\\out{\\-}", p4, TRUE);
      return r9;
    };
    r11 = dyn gsub[, , fixed, ]("/", "\\out{\\slash{}}", TRUE, p5);
    check L7() else D7();
  D7():
    deopt 22 [r11];
  L7():
    st y = r11;
    sprintf = ldf sprintf;
    check L8() else D8();
  D8():
    deopt 25 [];
  L8():
    p8 = prom<V +>{
      sprintf1 = ldf sprintf;
      p6 = prom<V +>{
        x9 = ld x;
        x10 = force? x9;
        checkMissing(x10);
        return x10;
      };
      p7 = prom<V +>{
        u = ld u;
        u1 = force? u;
        checkMissing(u1);
        return u1;
      };
      r14 = dyn sprintf1("doi:%s <https://doi.org/%s>", p6, p7);
      return r14;
    };
    p11 = prom<V +>{
      sprintf2 = ldf sprintf;
      p9 = prom<V +>{
        u2 = ld u;
        u3 = force? u2;
        checkMissing(u3);
        return u3;
      };
      p10 = prom<V +>{
        y = ld y;
        y1 = force? y;
        checkMissing(y1);
        return y1;
      };
      r18 = dyn sprintf2("\\href{https://doi.org/%s}{doi:%s}", p9, p10);
      return r18;
    };
    p14 = prom<V +>{
      sprintf3 = ldf sprintf;
      p12 = prom<V +>{
        u4 = ld u;
        u5 = force? u4;
        checkMissing(u5);
        return u5;
      };
      p13 = prom<V +>{
        x11 = ld x;
        x12 = force? x11;
        checkMissing(x12);
        return x12;
      };
      r22 = dyn sprintf3("\\href{https://doi.org/%s}{doi:%s}", p12, p13);
      return r22;
    };
    r24 = dyn sprintf("\\ifelse{text}{%s}{\\ifelse{latex}{%s}{%s}}", p8, p11, p14);
    check L9() else D9();
  D9():
    deopt 30 [r24];
  L9():
    popenv;
    return r24;
  }
}