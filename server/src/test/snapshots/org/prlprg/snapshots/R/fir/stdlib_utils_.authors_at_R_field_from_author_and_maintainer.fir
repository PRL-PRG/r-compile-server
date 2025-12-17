fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4155562904;
    st `.authors_at_R_field_from_author_and_maintainer` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4155562904(a, m) {
  (reg a:*, reg m:*) -+> V { var a:*, var m:*, reg as_person:cls, reg a1:*, reg a2:V, reg p:p(V +), reg r1:V, reg p1:*, reg p2:V, reg c:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r2:V, reg p5:*, reg p6:V, reg c1:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r3:V, reg lengths:cls, reg lapply:cls, reg r4:*, reg r5:V, reg p9:p(V +), reg intersect:*, reg intersect1:V, reg p10:p(V +), reg r8:V, reg p11:p(V +), reg r10:V, reg r11:V, reg sym:cls, reg base:cls, reg guard:L, reg r12:V, reg r13:V, reg i:*, reg i1:V, reg any:cls, reg r14:V, reg r15:V, reg c2:L, reg lapply1:cls, reg r16:*, reg r17:V, reg p12:p(V +), reg union:*, reg union1:V, reg p13:p(V +), reg r20:V, reg l:*, reg c3:L, reg r22:V, reg dr4:V, reg dc2:L, reg dx4:V, reg r24:V, reg dx5:V, reg ___:cls, reg r25:V, reg lengths1:cls, reg lapply2:cls, reg r27:*, reg r28:V, reg p14:p(V +), reg intersect2:*, reg intersect3:V, reg p15:p(V +), reg r31:V, reg p16:p(V +), reg r33:V, reg r34:V, reg lengths2:cls, reg e:*, reg e1:V, reg p17:p(V +), reg r36:V, reg r37:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r38:V, reg r39:V, reg i2:*, reg i3:V, reg j:*, reg j1:V, reg r40:V, reg any1:cls, reg r41:V, reg c4:L, reg structure:cls, reg p18:*, reg p19:V, reg p20:p(V +), reg r43:V, reg format:cls, reg p21:*, reg p22:V, reg p23:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r47:V, reg r48:V, reg c5:cls, reg r49:V, reg p24:p(V +), reg r51:V, reg which:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r52:V, reg r53:V, reg s:*, reg s1:V, reg nzchar:cls, reg r54:V, reg startsWith:cls, reg tolower:cls, reg m1:*, reg m2:V, reg p25:p(V +), reg r56:V, reg p26:p(V +), reg tolower1:cls, reg s2:*, reg s3:V, reg p27:p(V +), reg r59:V, reg p28:p(V +), reg r61:V, reg r62:V, reg p29:p(V +), reg r64:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r65:V, reg r66:V, reg k:*, reg k1:V, reg length:cls, reg r67:V, reg c6:L, reg k2:*, reg k3:V, reg c7:L, reg k5:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __2:cls, reg r68:V, reg i4:*, reg i5:V, reg c8:L, reg i7:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg k6:*, reg k7:V, reg __3:cls, reg r69:V, reg r70:V, reg c9:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r71:V, reg r72:V, reg r73:*, reg r74:V, reg c10:L, reg r76:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg k8:*, reg k9:V, reg __4:cls, reg r77:V, reg c11:cls, reg r78:V, reg l3:*, reg c12:L, reg r80:V, reg l5:*, reg dr12:V, reg dc6:L, reg dx12:V, reg r82:V, reg dx13:V, reg k10:*, reg k11:V, reg ____:cls, reg r83:V, reg j2:*, reg j3:V, reg c13:L, reg j5:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg k12:*, reg k13:V, reg __5:cls, reg r85:V, reg r86:V, reg c14:L, reg tolower2:cls, reg sub:cls, reg m3:*, reg m4:V, reg p30:p(V +), reg r88:V, reg p31:p(V +), reg r90:V, reg l6:*, reg c15:L, reg r92:V, reg l8:*, reg dr16:V, reg dc8:L, reg dx16:V, reg r94:V, reg dx17:V, reg k14:*, reg k15:V, reg ____1:cls, reg r95:V, reg structure1:cls, reg p32:*, reg p33:V, reg p34:p(V +), reg r98:V, reg as_person1:cls, reg m5:*, reg m6:V, reg p35:p(V +), reg r102:V, reg l9:*, reg c16:L, reg r104:S, reg l11:*, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg r107:V, reg structure2:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r108:V, reg r109:V, reg p36:*, reg p37:V, reg m7:*, reg m8:V, reg c17:cls, reg r110:V, reg p38:p(V +), reg r112:V |
    mkenv;
    st a = a;
    st m = m;
    as_person = ldf `as.person`;
    check L23() else D0();
  D0():
    deopt 1 [];
  L23():
    p = prom<V +>{
      a1 = ld a;
      a2 = force? a1;
      checkMissing(a2);
      return a2;
    };
    r1 = dyn as_person(p);
    check L24() else D1();
  D1():
    deopt 3 [r1];
  L24():
    st p = r1;
    p1 = ld p;
    check L25() else D2();
  D2():
    deopt 5 [p1];
  L25():
    p2 = force? p1;
    checkMissing(p2);
    c = `is.object`(p2);
    if c then L26() else L27();
  L0(dx1):
    st r = dx1;
    p5 = ld p;
    check L29() else D3();
  L26():
    dr = tryDispatchBuiltin.1("[", p2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L28() else L27();
  L27():
    __ = ldf `[` in base;
    r2 = dyn __(p2, <missing>, "role");
    goto L0(r2);
  D3():
    deopt 12 [p5];
  L28():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L29():
    p6 = force? p5;
    checkMissing(p6);
    c1 = `is.object`(p6);
    if c1 then L30() else L31();
  L1(dx3):
    st e = dx3;
    lengths = ldf lengths;
    check L33() else D4();
  L30():
    dr2 = tryDispatchBuiltin.1("[", p6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L32() else L31();
  L31():
    __1 = ldf `[` in base;
    r3 = dyn __1(p6, <missing>, "email");
    goto L1(r3);
  D4():
    deopt 20 [];
  L32():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L1(dx2);
  L33():
    p11 = prom<V +>{
      lapply = ldf lapply;
      p9 = prom<V +>{
        r4 = ld r;
        r5 = force? r4;
        checkMissing(r5);
        return r5;
      };
      p10 = prom<V +>{
        intersect = ld intersect;
        intersect1 = force? intersect;
        checkMissing(intersect1);
        return intersect1;
      };
      r8 = dyn lapply(p9, p10, "aut");
      return r8;
    };
    r10 = dyn lengths(p11);
    check L34() else D5();
  D5():
    deopt 22 [r10];
  L34():
    r11 = `>`(r10, 0);
    st i = r11;
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L35() else L36();
  L2(r13):
    r15 = `!`(r13);
    c2 = `as.logical`(r15);
    if c2 then L39() else L3();
  L35():
    i = ld i;
    check L37() else D6();
  L36():
    r12 = dyn base(<sym i>);
    goto L2(r12);
  D6():
    deopt 28 [i];
  L3():
    goto L5();
  L5():
    lengths1 = ldf lengths;
    check L46() else D10();
  L37():
    i1 = force? i;
    checkMissing(i1);
    any = ldf any in base;
    r14 = dyn any(i1);
    check L38() else D7();
  L39():
    lapply1 = ldf lapply;
    check L40() else D8();
  D7():
    deopt 31 [r14];
  D8():
    deopt 34 [];
  D10():
    deopt 49 [];
  L38():
    goto L2(r14);
  L40():
    p12 = prom<V +>{
      r16 = ld r;
      r17 = force? r16;
      checkMissing(r17);
      return r17;
    };
    p13 = prom<V +>{
      union = ld union;
      union1 = force? union;
      checkMissing(union1);
      return union1;
    };
    r20 = dyn lapply1(p12, p13, "aut");
    check L41() else D9();
  L46():
    p16 = prom<V +>{
      lapply2 = ldf lapply;
      p14 = prom<V +>{
        r27 = ld r;
        r28 = force? r27;
        checkMissing(r28);
        return r28;
      };
      p15 = prom<V +>{
        intersect2 = ld intersect;
        intersect3 = force? intersect2;
        checkMissing(intersect3);
        return intersect3;
      };
      r31 = dyn lapply2(p14, p15, "cre");
      return r31;
    };
    r33 = dyn lengths1(p16);
    check L47() else D11();
  D9():
    deopt 38 [r20];
  D11():
    deopt 51 [r33];
  L41():
    st r = r20;
    l = ld p;
    c3 = `is.object`(l);
    if c3 then L42() else L43(r20);
  L47():
    r34 = `>`(r33, 0);
    st i = r34;
    lengths2 = ldf lengths;
    check L48() else D12();
  D12():
    deopt 56 [];
  L4(r24, dx5):
    st p = dx5;
    goto L5();
  L42():
    dr4 = tryDispatchBuiltin.0("[<-", l, r20);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L44() else L43(r20);
  L43(r22):
    ___ = ldf `[<-` in base;
    r25 = dyn ___(l, <missing>, "role", r20);
    goto L4(r22, r25);
  L48():
    p17 = prom<V +>{
      e = ld e;
      e1 = force? e;
      checkMissing(e1);
      return e1;
    };
    r36 = dyn lengths2(p17);
    check L49() else D13();
  D13():
    deopt 58 [r36];
  L44():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L4(r20, dx4);
  L49():
    r37 = `>`(r36, 0);
    st j = r37;
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L50() else L51();
  L6(r39):
    c4 = `as.logical`(r39);
    if c4 then L55() else L7();
  L50():
    i2 = ld i;
    check L52() else D14();
  L51():
    r38 = dyn base1(<lang `&`(i, j)>);
    goto L6(r38);
  D14():
    deopt 64 [i2];
  L7():
    format = ldf format;
    check L60() else D19();
  L52():
    i3 = force? i2;
    checkMissing(i3);
    j = ld j;
    check L53() else D15();
  L55():
    structure = ldf structure;
    check L56() else D17();
  D15():
    deopt 65 [i3, j];
  D17():
    deopt 71 [];
  D19():
    deopt 80 [];
  L53():
    j1 = force? j;
    checkMissing(j1);
    r40 = `&&`(i3, j1);
    any1 = ldf any in base;
    r41 = dyn any1(r40);
    check L54() else D16();
  L56():
    p20 = prom<V +>{
      p18 = ld p;
      p19 = force? p18;
      checkMissing(p19);
      return p19;
    };
    r43 = dyn structure[, case](p20, 1.0);
    check L57() else D18();
  L60():
    p23 = prom<V +>{
      p21 = ld p;
      p22 = force? p21;
      checkMissing(p22);
      return p22;
    };
    p24 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r48):
      return r48;
    L1():
      c5 = ldf c in base;
      r49 = dyn c5("given", "family");
      goto L0(r49);
    L2():
      r47 = dyn base2("given", "family");
      goto L0(r47);
    };
    r51 = dyn format[, include](p23, p24);
    check L61() else D20();
  D16():
    deopt 69 [r41];
  D18():
    deopt 75 [r43];
  D20():
    deopt 84 [r51];
  L54():
    goto L6(r41);
  L57():
    popenv;
    return r43;
  L61():
    st s = r51;
    which = ldf which;
    check L62() else D21();
  D21():
    deopt 87 [];
  L62():
    p29 = prom<V +>{
      sym3 = ldf nzchar;
      base3 = ldf nzchar in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r53):
      startsWith = ldf startsWith;
      p26 = prom<V +>{
        tolower = ldf tolower;
        p25 = prom<V +>{
          m1 = ld m;
          m2 = force? m1;
          checkMissing(m2);
          return m2;
        };
        r56 = dyn tolower(p25);
        return r56;
      };
      p28 = prom<V +>{
        tolower1 = ldf tolower;
        p27 = prom<V +>{
          s2 = ld s;
          s3 = force? s2;
          checkMissing(s3);
          return s3;
        };
        r59 = dyn tolower1(p27);
        return r59;
      };
      r61 = dyn startsWith(p26, p28);
      r62 = `&&`(r53, r61);
      return r62;
    L1():
      s = ld s;
      s1 = force? s;
      checkMissing(s1);
      nzchar = ldf nzchar in base;
      r54 = dyn nzchar(s1);
      goto L0(r54);
    L2():
      r52 = dyn base3(<sym s>);
      goto L0(r52);
    };
    r64 = dyn which(p29);
    check L63() else D22();
  D22():
    deopt 89 [r64];
  L63():
    st k = r64;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L64() else L65();
  L9(r66):
    c6 = `as.logical`(r66);
    if c6 then L68() else L10();
  L64():
    k = ld k;
    check L66() else D23();
  L65():
    r65 = dyn base4(<sym k>);
    goto L9(r65);
  D23():
    deopt 93 [k];
  L10():
    as_person1 = ldf `as.person`;
    check L109() else D39();
  L66():
    k1 = force? k;
    checkMissing(k1);
    length = ldf length in base;
    r67 = dyn length(k1);
    check L67() else D24();
  L68():
    k2 = ld k;
    check L69() else D25();
  D24():
    deopt 96 [r67];
  D25():
    deopt 97 [k2];
  D39():
    deopt 155 [];
  L67():
    goto L9(r67);
  L69():
    k3 = force? k2;
    checkMissing(k3);
    c7 = `is.object`(k3);
    if c7 then L70() else L71(k3);
  L109():
    p35 = prom<V +>{
      m5 = ld m;
      m6 = force? m5;
      checkMissing(m6);
      return m6;
    };
    r102 = dyn as_person1(p35);
    check L110() else D40();
  D40():
    deopt 157 [r102];
  L11(dx7):
    st k = dx7;
    i4 = ld i;
    check L73() else D26();
  L70():
    dr6 = tryDispatchBuiltin.1("[", k3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L72() else L71(dr6);
  L71(k5):
    __2 = ldf `[` in base;
    r68 = dyn __2(k5, 1);
    goto L11(r68);
  L110():
    st m = r102;
    l9 = ld m;
    c16 = `is.object`(l9);
    if c16 then L112() else L113("cre", l9);
  D26():
    deopt 103 [i4];
  L72():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L11(dx6);
  L73():
    i5 = force? i4;
    checkMissing(i5);
    c8 = `is.object`(i5);
    if c8 then L74() else L75(i5);
  L111(dx19):
    st m = dx19;
    structure2 = ldf structure;
    check L115() else D41();
  L112():
    dr18 = tryDispatchBuiltin.0("$<-", l9, "cre");
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L114() else L113("cre", dr18);
  L113(r104, l11):
    r107 = `$<-`(l11, <sym role>, "cre");
    goto L111(r107);
  D41():
    deopt 165 [];
  L12(dx9):
    r70 = `!`(dx9);
    c9 = `as.logical`(r70);
    if c9 then L78() else L13();
  L74():
    dr8 = tryDispatchBuiltin.1("[", i5);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L76() else L75(dr8);
  L75(i7):
    k6 = ld k;
    check L77() else D27();
  L114():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L111(dx18);
  L115():
    p38 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r109):
      return r109;
    L1():
      p36 = ld p;
      p37 = force? p36;
      checkMissing(p37);
      m7 = ld m;
      m8 = force? m7;
      checkMissing(m8);
      c17 = ldf c in base;
      r110 = dyn c17(p37, m8);
      goto L0(r110);
    L2():
      r108 = dyn base6(<sym p>, <sym m>);
      goto L0(r108);
    };
    r112 = dyn structure2[, case](p38, 3.0);
    check L116() else D42();
  D27():
    deopt 105 [i7, k6];
  D42():
    deopt 169 [r112];
  L13():
    goto L17();
  L17():
    j2 = ld j;
    check L92() else D32();
  L76():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L12(dx8);
  L77():
    k7 = force? k6;
    __3 = ldf `[` in base;
    r69 = dyn __3(i7, k7);
    goto L12(r69);
  L78():
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L79() else L80();
  L116():
    popenv;
    return r112;
  D32():
    deopt 127 [j2];
  L14(r72):
    l3 = ld p;
    c12 = `is.object`(l3);
    if c12 then L87() else L88(r72, l3);
  L79():
    r73 = ld r;
    check L81() else D28();
  L80():
    r71 = dyn base5(<lang `[[`(r, k)>, "cre");
    goto L14(r71);
  L92():
    j3 = force? j2;
    checkMissing(j3);
    c13 = `is.object`(j3);
    if c13 then L93() else L94(j3);
  D28():
    deopt 111 [r73];
  L16(r82, dx13):
    st p = dx13;
    goto L17();
  L18(dx15):
    r86 = `!`(dx15);
    c14 = `as.logical`(r86);
    if c14 then L97() else L19();
  L81():
    r74 = force? r73;
    checkMissing(r74);
    c10 = `is.object`(r74);
    if c10 then L82() else L83(r74);
  L87():
    dr12 = tryDispatchBuiltin.0("[[<-", l3, r72);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L89() else L88(r72, dr12);
  L88(r80, l5):
    k10 = ld k;
    check L90() else D31();
  L93():
    dr14 = tryDispatchBuiltin.1("[", j3);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L95() else L94(dr14);
  L94(j5):
    k12 = ld k;
    check L96() else D33();
  D31():
    deopt 120 [r80, l5, r72, k10];
  D33():
    deopt 129 [j5, k12];
  L15(dx11):
    c11 = ldf c in base;
    r78 = dyn c11(dx11, "cre");
    check L86() else D30();
  L19():
    goto L21();
  L21():
    structure1 = ldf structure;
    check L105() else D37();
  L82():
    dr10 = tryDispatchBuiltin.1("[[", r74);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L84() else L83(dr10);
  L83(r76):
    k8 = ld k;
    check L85() else D29();
  L89():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L16(r72, dx12);
  L90():
    k11 = force? k10;
    ____ = ldf `[[<-` in base;
    r83 = dyn ____(l5, r72, k11, "role");
    goto L16(r80, r83);
  L95():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L18(dx14);
  L96():
    k13 = force? k12;
    __5 = ldf `[` in base;
    r85 = dyn __5(j5, k13);
    goto L18(r85);
  L97():
    tolower2 = ldf tolower;
    check L98() else D34();
  D29():
    deopt 113 [r76, k8];
  D30():
    deopt 118 [r78];
  D34():
    deopt 134 [];
  D37():
    deopt 146 [];
  L84():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L15(dx10);
  L85():
    k9 = force? k8;
    __4 = ldf `[[` in base;
    r77 = dyn __4(r76, k9);
    goto L15(r77);
  L86():
    goto L14(r78);
  L98():
    p31 = prom<V +>{
      sub = ldf sub;
      p30 = prom<V +>{
        m3 = ld m;
        m4 = force? m3;
        checkMissing(m4);
        return m4;
      };
      r88 = dyn sub(".*<(.*)>.*", "\\1", p30);
      return r88;
    };
    r90 = dyn tolower2(p31);
    check L99() else D35();
  L105():
    p34 = prom<V +>{
      p32 = ld p;
      p33 = force? p32;
      checkMissing(p33);
      return p33;
    };
    r98 = dyn structure1[, case](p34, 2.0);
    check L106() else D38();
  D35():
    deopt 136 [r90];
  D38():
    deopt 150 [r98];
  L99():
    l6 = ld p;
    c15 = `is.object`(l6);
    if c15 then L100() else L101(r90, l6);
  L106():
    popenv;
    return r98;
  L20(r94, dx17):
    st p = dx17;
    goto L21();
  L100():
    dr16 = tryDispatchBuiltin.0("[[<-", l6, r90);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L102() else L101(r90, dr16);
  L101(r92, l8):
    k14 = ld k;
    check L103() else D36();
  D36():
    deopt 138 [r92, l8, r90, k14];
  L102():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L20(r90, dx16);
  L103():
    k15 = force? k14;
    ____1 = ldf `[[<-` in base;
    r95 = dyn ____1(l8, r90, k15, "email");
    goto L20(r92, r95);
  }
}