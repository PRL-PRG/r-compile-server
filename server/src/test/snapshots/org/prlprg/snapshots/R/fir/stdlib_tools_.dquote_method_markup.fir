fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner542019283;
    st `.dquote_method_markup` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner542019283(txt, re) {
  (reg txt:*, reg re:*) -+> V { var txt:*, var re:*, reg regexpr:cls, reg re1:*, reg re2:V, reg p:p(V +), reg txt1:*, reg txt2:V, reg p1:p(V +), reg r2:V, reg r3:V, reg c:L, reg ipos:*, reg ipos1:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg ipos4:V, reg r5:V, reg ipos5:*, reg ipos6:V, reg attr:cls, reg r6:V, reg r7:V, reg r8:V, reg substring:cls, reg txt3:*, reg txt4:V, reg p2:p(V +), reg ipos7:*, reg ipos8:V, reg p3:p(V +), reg epos:*, reg epos1:V, reg p4:p(V +), reg r12:V, reg sub:cls, reg str:*, reg str1:V, reg p5:p(V +), reg r14:V, reg sub1:cls, reg str2:*, reg str3:V, reg p6:p(V +), reg r16:V, reg sprintf:cls, reg out:*, reg out1:V, reg p7:p(V +), reg substring1:cls, reg txt5:*, reg txt6:V, reg p8:p(V +), reg ipos9:*, reg ipos10:V, reg r19:V, reg p9:p(V +), reg r21:V, reg p10:p(V +), reg str4:*, reg str5:V, reg p11:p(V +), reg r24:V, reg substring2:cls, reg txt7:*, reg txt8:V, reg p12:p(V +), reg epos2:*, reg epos3:V, reg r26:V, reg p13:p(V +), reg r28:V, reg paste0:cls, reg out2:*, reg out3:V, reg p14:p(V +), reg txt9:*, reg txt10:V, reg p15:p(V +), reg r31:V |
    mkenv;
    st txt = txt;
    st re = re;
    st out = "";
    goto L2();
  L2():
    regexpr = ldf regexpr;
    check L3() else D0();
  D0():
    deopt 4 [];
  L3():
    p = prom<V +>{
      re1 = ld re;
      re2 = force? re1;
      checkMissing(re2);
      return re2;
    };
    p1 = prom<V +>{
      txt1 = ld txt;
      txt2 = force? txt1;
      checkMissing(txt2);
      return txt2;
    };
    r2 = dyn regexpr(p, p1);
    check L4() else D1();
  D1():
    deopt 7 [r2];
  L4():
    st ipos = r2;
    r3 = `>`(r2, -1);
    c = `as.logical`(r3);
    if c then L5() else L0();
  L0():
    paste0 = ldf paste0;
    check L22() else D15();
  L5():
    ipos = ld ipos;
    check L6() else D2();
  D2():
    deopt 11 [ipos];
  D15():
    deopt 66 [];
  L6():
    ipos1 = force? ipos;
    checkMissing(ipos1);
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L22():
    p14 = prom<V +>{
      out2 = ld out;
      out3 = force? out2;
      checkMissing(out3);
      return out3;
    };
    p15 = prom<V +>{
      txt9 = ld txt;
      txt10 = force? txt9;
      checkMissing(txt10);
      return txt10;
    };
    r31 = dyn paste0(p14, p15);
    check L23() else D16();
  D16():
    deopt 69 [r31];
  L1(ipos4, r5):
    r7 = `+`(ipos4, r5);
    r8 = `-`(r7, 1);
    st epos = r8;
    substring = ldf substring;
    check L11() else D5();
  L7():
    ipos5 = ld ipos;
    check L9() else D3();
  L8():
    r4 = dyn base(<sym ipos>, "match.length");
    goto L1(ipos1, r4);
  L23():
    popenv;
    return r31;
  D3():
    deopt 14 [ipos1, ipos5];
  D5():
    deopt 24 [];
  L9():
    ipos6 = force? ipos5;
    checkMissing(ipos6);
    attr = ldf attr in base;
    r6 = dyn attr(ipos6, "match.length");
    check L10() else D4();
  L11():
    p2 = prom<V +>{
      txt3 = ld txt;
      txt4 = force? txt3;
      checkMissing(txt4);
      return txt4;
    };
    p3 = prom<V +>{
      ipos7 = ld ipos;
      ipos8 = force? ipos7;
      checkMissing(ipos8);
      return ipos8;
    };
    p4 = prom<V +>{
      epos = ld epos;
      epos1 = force? epos;
      checkMissing(epos1);
      return epos1;
    };
    r12 = dyn substring(p2, p3, p4);
    check L12() else D6();
  D4():
    deopt 18 [ipos1, r6];
  D6():
    deopt 28 [r12];
  L10():
    goto L1(ipos1, r6);
  L12():
    st str = r12;
    sub = ldf sub;
    check L13() else D7();
  D7():
    deopt 31 [];
  L13():
    p5 = prom<V +>{
      str = ld str;
      str1 = force? str;
      checkMissing(str1);
      return str1;
    };
    r14 = dyn sub[, , , fixed]("\"", "\\\"", p5, TRUE);
    check L14() else D8();
  D8():
    deopt 37 [r14];
  L14():
    st str = r14;
    sub1 = ldf sub;
    check L15() else D9();
  D9():
    deopt 40 [];
  L15():
    p6 = prom<V +>{
      str2 = ld str;
      str3 = force? str2;
      checkMissing(str3);
      return str3;
    };
    r16 = dyn sub1[, , , fixed]("\\", "\\\\", p6, TRUE);
    check L16() else D10();
  D10():
    deopt 46 [r16];
  L16():
    st str = r16;
    sprintf = ldf sprintf;
    check L17() else D11();
  D11():
    deopt 49 [];
  L17():
    p7 = prom<V +>{
      out = ld out;
      out1 = force? out;
      checkMissing(out1);
      return out1;
    };
    p10 = prom<V +>{
      substring1 = ldf substring;
      p8 = prom<V +>{
        txt5 = ld txt;
        txt6 = force? txt5;
        checkMissing(txt6);
        return txt6;
      };
      p9 = prom<V +>{
        ipos9 = ld ipos;
        ipos10 = force? ipos9;
        checkMissing(ipos10);
        r19 = `-`(ipos10, 1);
        return r19;
      };
      r21 = dyn substring1(p8, 1, p9);
      return r21;
    };
    p11 = prom<V +>{
      str4 = ld str;
      str5 = force? str4;
      checkMissing(str5);
      return str5;
    };
    r24 = dyn sprintf("%s%s\"%s\"", p7, p10, p11);
    check L18() else D12();
  D12():
    deopt 54 [r24];
  L18():
    st out = r24;
    substring2 = ldf substring;
    check L19() else D13();
  D13():
    deopt 57 [];
  L19():
    p12 = prom<V +>{
      txt7 = ld txt;
      txt8 = force? txt7;
      checkMissing(txt8);
      return txt8;
    };
    p13 = prom<V +>{
      epos2 = ld epos;
      epos3 = force? epos2;
      checkMissing(epos3);
      r26 = `+`(epos3, 1);
      return r26;
    };
    r28 = dyn substring2(p12, p13);
    check L20() else D14();
  D14():
    deopt 60 [r28];
  L20():
    st txt = r28;
    goto L2();
  }
}