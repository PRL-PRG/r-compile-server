fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2854634098;
    st `.get_urls_from_DESCRIPTION_URL_field` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2854634098(v) {
  (reg v:*) -+> V { var v:*, reg character:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg v1:*, reg v2:V, reg is_na:cls, reg r3:V, reg c:L, reg urls:*, reg urls1:V, reg gregexpr:cls, reg pattern:*, reg pattern1:V, reg p:p(V +), reg v3:*, reg v4:V, reg p1:p(V +), reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg urls2:*, reg urls3:V, reg _gregexec_at_pos:cls, reg pattern2:*, reg pattern3:V, reg p2:p(V +), reg v5:*, reg v6:V, reg p3:p(V +), reg m:*, reg m1:V, reg p4:p(V +), reg r14:V, reg c1:cls, reg r15:V, reg l:*, reg regmatches__:cls, reg m2:*, reg m3:V, reg p5:p(V +), reg r17:V, reg gregexpr1:cls, reg pattern4:*, reg pattern5:V, reg p6:p(V +), reg v7:*, reg v8:V, reg p7:p(V +), reg r20:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg r22:V, reg urls4:*, reg urls5:V, reg _gregexec_at_pos1:cls, reg pattern6:*, reg pattern7:V, reg p8:p(V +), reg v9:*, reg v10:V, reg p9:p(V +), reg m4:*, reg m5:V, reg p10:p(V +), reg r26:V, reg c2:cls, reg r27:V, reg urls6:*, reg urls7:V |
    mkenv;
    st v = v;
    character = ldf character;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    r = dyn character();
    check L6() else D1();
  D1():
    deopt 2 [r];
  L6():
    st urls = r;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r2):
    c = `as.logical`(r2);
    if c then L11() else L1();
  L7():
    v1 = ld v;
    check L9() else D2();
  L8():
    r1 = dyn base(<sym v>);
    goto L0(r1);
  D2():
    deopt 6 [v1];
  L1():
    st pattern = "<(URL: *)?((https?|ftp)://[^[:space:],]*)[[:space:]]*>";
    gregexpr = ldf gregexpr;
    check L15() else D5();
  L9():
    v2 = force? v1;
    checkMissing(v2);
    is_na = ldf `is.na` in base;
    r3 = dyn is_na(v2);
    check L10() else D3();
  L11():
    urls = ld urls;
    check L12() else D4();
  D3():
    deopt 9 [r3];
  D4():
    deopt 10 [urls];
  D5():
    deopt 19 [];
  L10():
    goto L0(r3);
  L12():
    urls1 = force? urls;
    checkMissing(urls1);
    popenv;
    return urls1;
  L15():
    p = prom<V +>{
      pattern = ld pattern;
      pattern1 = force? pattern;
      checkMissing(pattern1);
      return pattern1;
    };
    p1 = prom<V +>{
      v3 = ld v;
      v4 = force? v3;
      checkMissing(v4);
      return v4;
    };
    r8 = dyn gregexpr(p, p1);
    check L16() else D6();
  D6():
    deopt 22 [r8];
  L16():
    st m = r8;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L3(r10):
    st urls = r10;
    l = ld v;
    regmatches__ = ldf `regmatches<-`;
    check L23() else D11();
  L17():
    urls2 = ld urls;
    check L19() else D7();
  L18():
    r9 = dyn base1(<sym urls>, <lang .gregexec_at_pos(pattern, v, m, 3)>);
    goto L3(r9);
  D7():
    deopt 26 [urls2];
  D11():
    deopt 41 ["", l, ""];
  L19():
    urls3 = force? urls2;
    checkMissing(urls3);
    _gregexec_at_pos = ldf `.gregexec_at_pos`;
    check L20() else D8();
  L23():
    p5 = prom<V +>{
      m2 = ld m;
      m3 = force? m2;
      checkMissing(m3);
      return m3;
    };
    r17 = dyn regmatches__(l, NULL, p5, "");
    check L24() else D12();
  D8():
    deopt 29 [];
  D12():
    deopt 44 ["", r17];
  L20():
    p2 = prom<V +>{
      pattern2 = ld pattern;
      pattern3 = force? pattern2;
      checkMissing(pattern3);
      return pattern3;
    };
    p3 = prom<V +>{
      v5 = ld v;
      v6 = force? v5;
      checkMissing(v6);
      return v6;
    };
    p4 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      return m1;
    };
    r14 = dyn _gregexec_at_pos(p2, p3, p4, 3);
    check L21() else D9();
  L24():
    st v = r17;
    st pattern = "(^|[^>\"?])((https?|ftp)://[^[:space:],]*)";
    gregexpr1 = ldf gregexpr;
    check L25() else D13();
  D9():
    deopt 34 [r14];
  D13():
    deopt 50 [];
  L21():
    c1 = ldf c in base;
    r15 = dyn c1(urls3, r14);
    check L22() else D10();
  L25():
    p6 = prom<V +>{
      pattern4 = ld pattern;
      pattern5 = force? pattern4;
      checkMissing(pattern5);
      return pattern5;
    };
    p7 = prom<V +>{
      v7 = ld v;
      v8 = force? v7;
      checkMissing(v8);
      return v8;
    };
    r20 = dyn gregexpr1(p6, p7);
    check L26() else D14();
  D10():
    deopt 36 [r15];
  D14():
    deopt 53 [r20];
  L22():
    goto L3(r15);
  L26():
    st m = r20;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L27() else L28();
  L4(r22):
    st urls = r22;
    urls6 = ld urls;
    check L33() else D19();
  L27():
    urls4 = ld urls;
    check L29() else D15();
  L28():
    r21 = dyn base2(<sym urls>, <lang .gregexec_at_pos(pattern, v, m, 3)>);
    goto L4(r21);
  D15():
    deopt 57 [urls4];
  D19():
    deopt 69 [urls6];
  L29():
    urls5 = force? urls4;
    checkMissing(urls5);
    _gregexec_at_pos1 = ldf `.gregexec_at_pos`;
    check L30() else D16();
  L33():
    urls7 = force? urls6;
    checkMissing(urls7);
    popenv;
    return urls7;
  D16():
    deopt 60 [];
  L30():
    p8 = prom<V +>{
      pattern6 = ld pattern;
      pattern7 = force? pattern6;
      checkMissing(pattern7);
      return pattern7;
    };
    p9 = prom<V +>{
      v9 = ld v;
      v10 = force? v9;
      checkMissing(v10);
      return v10;
    };
    p10 = prom<V +>{
      m4 = ld m;
      m5 = force? m4;
      checkMissing(m5);
      return m5;
    };
    r26 = dyn _gregexec_at_pos1(p8, p9, p10, 3);
    check L31() else D17();
  D17():
    deopt 65 [r26];
  L31():
    c2 = ldf c in base;
    r27 = dyn c2(urls5, r26);
    check L32() else D18();
  D18():
    deopt 67 [r27];
  L32():
    goto L4(r27);
  }
}