fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2854634098;
    st `.get_urls_from_DESCRIPTION_Description_field` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2854634098(v) {
  (reg v:*) -+> V { var v:*, reg character:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg v1:*, reg v2:V, reg is_na:cls, reg r3:V, reg c:L, reg urls:*, reg urls1:V, reg gregexpr:cls, reg pattern:*, reg pattern1:V, reg p:p(V +), reg v3:*, reg v4:V, reg p1:p(V +), reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg urls2:*, reg urls3:V, reg _gregexec_at_pos:cls, reg pattern2:*, reg pattern3:V, reg p2:p(V +), reg v5:*, reg v6:V, reg p3:p(V +), reg m:*, reg m1:V, reg p4:p(V +), reg r14:V, reg c1:cls, reg r15:V, reg l:*, reg regmatches__:cls, reg m2:*, reg m3:V, reg p5:p(V +), reg r17:V, reg gregexpr1:cls, reg pattern4:*, reg pattern5:V, reg p6:p(V +), reg v7:*, reg v8:V, reg p7:p(V +), reg r20:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg r22:V, reg urls4:*, reg urls5:V, reg _gregexec_at_pos1:cls, reg pattern6:*, reg pattern7:V, reg p8:p(V +), reg v9:*, reg v10:V, reg p9:p(V +), reg m4:*, reg m5:V, reg p10:p(V +), reg r26:V, reg c2:cls, reg r27:V, reg l1:*, reg regmatches__1:cls, reg m6:*, reg m7:V, reg p11:p(V +), reg r29:V, reg gregexpr2:cls, reg pattern8:*, reg pattern9:V, reg p12:p(V +), reg v11:*, reg v12:V, reg p13:p(V +), reg r32:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r33:V, reg r34:V, reg urls6:*, reg urls7:V, reg _gregexec_at_pos2:cls, reg pattern10:*, reg pattern11:V, reg p14:p(V +), reg v13:*, reg v14:V, reg p15:p(V +), reg m8:*, reg m9:V, reg p16:p(V +), reg r38:V, reg c3:cls, reg r39:V, reg urls8:*, reg urls9:V |
    mkenv;
    st v = v;
    character = ldf character;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    r = dyn character();
    check L7() else D1();
  D1():
    deopt 2 [r];
  L7():
    st urls = r;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L0(r2):
    c = `as.logical`(r2);
    if c then L12() else L1();
  L8():
    v1 = ld v;
    check L10() else D2();
  L9():
    r1 = dyn base(<sym v>);
    goto L0(r1);
  D2():
    deopt 6 [v1];
  L1():
    st pattern = "<(URL: *)?((https?|ftp)://[^[:space:]]+)[[:space:]]*>";
    gregexpr = ldf gregexpr;
    check L16() else D5();
  L10():
    v2 = force? v1;
    checkMissing(v2);
    is_na = ldf `is.na` in base;
    r3 = dyn is_na(v2);
    check L11() else D3();
  L12():
    urls = ld urls;
    check L13() else D4();
  D3():
    deopt 9 [r3];
  D4():
    deopt 10 [urls];
  D5():
    deopt 19 [];
  L11():
    goto L0(r3);
  L13():
    urls1 = force? urls;
    checkMissing(urls1);
    popenv;
    return urls1;
  L16():
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
    check L17() else D6();
  D6():
    deopt 22 [r8];
  L17():
    st m = r8;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  L3(r10):
    st urls = r10;
    l = ld v;
    regmatches__ = ldf `regmatches<-`;
    check L24() else D11();
  L18():
    urls2 = ld urls;
    check L20() else D7();
  L19():
    r9 = dyn base1(<sym urls>, <lang .gregexec_at_pos(pattern, v, m, 3)>);
    goto L3(r9);
  D7():
    deopt 26 [urls2];
  D11():
    deopt 41 ["", l, ""];
  L20():
    urls3 = force? urls2;
    checkMissing(urls3);
    _gregexec_at_pos = ldf `.gregexec_at_pos`;
    check L21() else D8();
  L24():
    p5 = prom<V +>{
      m2 = ld m;
      m3 = force? m2;
      checkMissing(m3);
      return m3;
    };
    r17 = dyn regmatches__(l, NULL, p5, "");
    check L25() else D12();
  D8():
    deopt 29 [];
  D12():
    deopt 44 ["", r17];
  L21():
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
    check L22() else D9();
  L25():
    st v = r17;
    st pattern = "([^>\"?])((https?|ftp)://[[:alnum:]/.:@+\\_~%#?=&;,-]+[[:alnum:]/])";
    gregexpr1 = ldf gregexpr;
    check L26() else D13();
  D9():
    deopt 34 [r14];
  D13():
    deopt 50 [];
  L22():
    c1 = ldf c in base;
    r15 = dyn c1(urls3, r14);
    check L23() else D10();
  L26():
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
    check L27() else D14();
  D10():
    deopt 36 [r15];
  D14():
    deopt 53 [r20];
  L23():
    goto L3(r15);
  L27():
    st m = r20;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L28() else L29();
  L4(r22):
    st urls = r22;
    l1 = ld v;
    regmatches__1 = ldf `regmatches<-`;
    check L34() else D19();
  L28():
    urls4 = ld urls;
    check L30() else D15();
  L29():
    r21 = dyn base2(<sym urls>, <lang .gregexec_at_pos(pattern, v, m, 3)>);
    goto L4(r21);
  D15():
    deopt 57 [urls4];
  D19():
    deopt 72 ["", l1, ""];
  L30():
    urls5 = force? urls4;
    checkMissing(urls5);
    _gregexec_at_pos1 = ldf `.gregexec_at_pos`;
    check L31() else D16();
  L34():
    p11 = prom<V +>{
      m6 = ld m;
      m7 = force? m6;
      checkMissing(m7);
      return m7;
    };
    r29 = dyn regmatches__1(l1, NULL, p11, "");
    check L35() else D20();
  D16():
    deopt 60 [];
  D20():
    deopt 75 ["", r29];
  L31():
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
    check L32() else D17();
  L35():
    st v = r29;
    st pattern = "<([A-Za-z][A-Za-z0-9.+-]*:[^>]+)>";
    gregexpr2 = ldf gregexpr;
    check L36() else D21();
  D17():
    deopt 65 [r26];
  D21():
    deopt 81 [];
  L32():
    c2 = ldf c in base;
    r27 = dyn c2(urls5, r26);
    check L33() else D18();
  L36():
    p12 = prom<V +>{
      pattern8 = ld pattern;
      pattern9 = force? pattern8;
      checkMissing(pattern9);
      return pattern9;
    };
    p13 = prom<V +>{
      v11 = ld v;
      v12 = force? v11;
      checkMissing(v12);
      return v12;
    };
    r32 = dyn gregexpr2(p12, p13);
    check L37() else D22();
  D18():
    deopt 67 [r27];
  D22():
    deopt 84 [r32];
  L33():
    goto L4(r27);
  L37():
    st m = r32;
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L38() else L39();
  L5(r34):
    st urls = r34;
    urls8 = ld urls;
    check L44() else D27();
  L38():
    urls6 = ld urls;
    check L40() else D23();
  L39():
    r33 = dyn base3(<sym urls>, <lang .gregexec_at_pos(pattern, v, m, 2)>);
    goto L5(r33);
  D23():
    deopt 88 [urls6];
  D27():
    deopt 100 [urls8];
  L40():
    urls7 = force? urls6;
    checkMissing(urls7);
    _gregexec_at_pos2 = ldf `.gregexec_at_pos`;
    check L41() else D24();
  L44():
    urls9 = force? urls8;
    checkMissing(urls9);
    popenv;
    return urls9;
  D24():
    deopt 91 [];
  L41():
    p14 = prom<V +>{
      pattern10 = ld pattern;
      pattern11 = force? pattern10;
      checkMissing(pattern11);
      return pattern11;
    };
    p15 = prom<V +>{
      v13 = ld v;
      v14 = force? v13;
      checkMissing(v14);
      return v14;
    };
    p16 = prom<V +>{
      m8 = ld m;
      m9 = force? m8;
      checkMissing(m9);
      return m9;
    };
    r38 = dyn _gregexec_at_pos2(p14, p15, p16, 2);
    check L42() else D25();
  D25():
    deopt 96 [r38];
  L42():
    c3 = ldf c in base;
    r39 = dyn c3(urls7, r38);
    check L43() else D26();
  D26():
    deopt 98 [r39];
  L43():
    goto L5(r39);
  }
}