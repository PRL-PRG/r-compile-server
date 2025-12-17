fun main() {
  () -+> V { reg r:cls, reg compareVersion:cls, reg r1:V, reg compareVersion1:cls, reg r2:V |
    mkenv;
    r = clos inner3950065357;
    st compareVersion = r;
    compareVersion = ldf compareVersion;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn compareVersion("1.0", "1.0-1");
    check L1() else D1();
  D1():
    deopt 7 [r1];
  L1():
    compareVersion1 = ldf compareVersion;
    check L2() else D2();
  D2():
    deopt 9 [];
  L2():
    r2 = dyn compareVersion1("7.2-0", "7.1-12");
    check L3() else D3();
  D3():
    deopt 12 [r2];
  L3():
    popenv;
    return r2;
  }
}
fun inner3950065357(a, b) {
  (reg a:*, reg b:*) -+> V { var a:*, var b:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg a1:*, reg a2:V, reg is_na:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg b1:*, reg b2:V, reg is_na1:cls, reg r7:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg strsplit:cls, reg a3:*, reg a4:V, reg p:p(V +), reg r13:V, reg c2:L, reg r15:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r16:V, reg as_integer:cls, reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg strsplit1:cls, reg b3:*, reg b4:V, reg p1:p(V +), reg r21:V, reg c3:L, reg r23:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r24:V, reg as_integer1:cls, reg r25:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg a5:*, reg a6:V, reg r28:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c4:L, reg x:V, reg k:*, reg k1:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r29:V, reg i7:I, reg k4:V, reg r30:V, reg b5:*, reg b6:V, reg length:cls, reg r31:V, reg r32:V, reg c5:L, reg a7:*, reg a8:V, reg c6:L, reg i11:I, reg a10:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i13:I, reg dx5:V, reg k5:*, reg k6:V, reg __2:cls, reg r33:V, reg b7:*, reg b8:V, reg c7:L, reg i15:I, reg dx7:V, reg b10:V, reg dr6:V, reg dc3:L, reg dx9:V, reg i17:I, reg dx10:V, reg dx11:V, reg k7:*, reg k8:V, reg __3:cls, reg r34:V, reg r35:V, reg c8:L, reg a11:*, reg a12:V, reg c9:L, reg i23:I, reg a14:V, reg dr8:V, reg dc4:L, reg dx12:V, reg i25:I, reg dx13:V, reg k9:*, reg k10:V, reg __4:cls, reg r38:V, reg b11:*, reg b12:V, reg c10:L, reg i27:I, reg dx15:V, reg b14:V, reg dr10:V, reg dc5:L, reg dx17:V, reg i29:I, reg dx18:V, reg dx19:V, reg k11:*, reg k12:V, reg __5:cls, reg r39:V, reg r40:V, reg c11:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r43:V, reg r44:V, reg b15:*, reg b16:V, reg length1:cls, reg r45:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r48:V, reg r49:V, reg r50:V, reg a15:*, reg a16:V, reg length2:cls, reg r51:V, reg r52:V, reg c12:L |
    mkenv;
    st a = a;
    st b = b;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L26() else L27();
  L0(r1):
    c = `as.logical`(r1);
    if c then L30() else L1();
  L26():
    a1 = ld a;
    check L28() else D0();
  L27():
    r = dyn base(<sym a>);
    goto L0(r);
  D0():
    deopt 2 [a1];
  L1():
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L33() else L34();
  L28():
    a2 = force? a1;
    checkMissing(a2);
    is_na = ldf `is.na` in base;
    r2 = dyn is_na(a2);
    check L29() else D1();
  L30():
    popenv;
    return -1;
  D1():
    deopt 5 [r2];
  L3(r6):
    c1 = `as.logical`(r6);
    if c1 then L37() else L4();
  L29():
    goto L0(r2);
  L33():
    b1 = ld b;
    check L35() else D2();
  L34():
    r5 = dyn base1(<sym b>);
    goto L3(r5);
  D2():
    deopt 13 [b1];
  L4():
    sym2 = ldf `as.integer`;
    base2 = ldf `as.integer` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L40() else L41();
  L35():
    b2 = force? b1;
    checkMissing(b2);
    is_na1 = ldf `is.na` in base;
    r7 = dyn is_na1(b2);
    check L36() else D3();
  L37():
    popenv;
    return 1;
  D3():
    deopt 16 [r7];
  L6(r11):
    st a = r11;
    sym3 = ldf `as.integer`;
    base3 = ldf `as.integer` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L48() else L49();
  L36():
    goto L3(r7);
  L40():
    strsplit = ldf strsplit;
    check L42() else D4();
  L41():
    r10 = dyn base2(<lang `[[`(strsplit(a, "[.-]"), 1)>);
    goto L6(r10);
  D4():
    deopt 25 [];
  L8(r19):
    st b = r19;
    sym4 = ldf seq_along;
    base4 = ldf seq_along in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L56() else L57();
  L42():
    p = prom<V +>{
      a3 = ld a;
      a4 = force? a3;
      checkMissing(a4);
      return a4;
    };
    r13 = dyn strsplit(p, "[.-]");
    check L43() else D5();
  L48():
    strsplit1 = ldf strsplit;
    check L50() else D7();
  L49():
    r18 = dyn base3(<lang `[[`(strsplit(b, "[.-]"), 1)>);
    goto L8(r18);
  D5():
    deopt 28 [r13];
  D7():
    deopt 38 [];
  L10(r27):
    s = toForSeq(r27);
    l = length(s);
    i = 0;
    goto L11(i);
  L43():
    c2 = `is.object`(r13);
    if c2 then L44() else L45(r13);
  L50():
    p1 = prom<V +>{
      b3 = ld b;
      b4 = force? b3;
      checkMissing(b4);
      return b4;
    };
    r21 = dyn strsplit1(p1, "[.-]");
    check L51() else D8();
  L56():
    a5 = ld a;
    check L58() else D10();
  L57():
    r26 = dyn base4(<sym a>);
    goto L10(r26);
  D8():
    deopt 41 [r21];
  D10():
    deopt 49 [a5];
  L7(dx1):
    as_integer = ldf `as.integer` in base;
    r17 = dyn as_integer(dx1);
    check L47() else D6();
  L11(i1):
    i2 = `+`.1(i1, 1);
    c4 = `<`.1(l, i2);
    if c4 then L59() else L22();
  L44():
    dr = tryDispatchBuiltin.1("[[", r13);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L46() else L45(dr);
  L45(r15):
    __ = ldf `[[` in base;
    r16 = dyn __(r15, 1);
    goto L7(r16);
  L51():
    c3 = `is.object`(r21);
    if c3 then L52() else L53(r21);
  L58():
    a6 = force? a5;
    checkMissing(a6);
    r28 = seq_along(a6);
    goto L10(r28);
  D6():
    deopt 33 [r17];
  L9(dx3):
    as_integer1 = ldf `as.integer` in base;
    r25 = dyn as_integer1(dx3);
    check L55() else D9();
  L22():
    x = `[[`(s, i2, NULL, TRUE);
    st k = x;
    k = ld k;
    check L60() else D11();
  L46():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L47():
    goto L6(r17);
  L52():
    dr2 = tryDispatchBuiltin.1("[[", r21);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L54() else L53(dr2);
  L53(r23):
    __1 = ldf `[[` in base;
    r24 = dyn __1(r23, 1);
    goto L9(r24);
  L59():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L94() else L95();
  D9():
    deopt 46 [r25];
  D11():
    deopt 52 [i2, k];
  L23(r44):
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L98() else L99();
  L54():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(dx2);
  L55():
    goto L8(r25);
  L60():
    k1 = force? k;
    checkMissing(k1);
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L61() else L62();
  L94():
    b15 = ld b;
    check L96() else D22();
  L95():
    r43 = dyn base6(<sym b>);
    goto L23(r43);
  D22():
    deopt 96 [b15];
  L12(i7, k4, r30):
    r32 = `<=`(k4, r30);
    c5 = `as.logical`(r32);
    if c5 then L65() else L13();
  L24(r49, r50):
    r52 = `>`(r49, r50);
    c12 = `as.logical`(r52);
    if c12 then L102() else L25();
  L61():
    b5 = ld b;
    check L63() else D12();
  L62():
    r29 = dyn base5(<sym b>);
    goto L12(i2, k1, r29);
  L96():
    b16 = force? b15;
    checkMissing(b16);
    length1 = ldf length in base;
    r45 = dyn length1(b16);
    check L97() else D23();
  L98():
    a15 = ld a;
    check L100() else D24();
  L99():
    r48 = dyn base7(<sym a>);
    goto L24(r44, r48);
  D12():
    deopt 55 [i2, k1, b5];
  D23():
    deopt 99 [r45];
  D24():
    deopt 101 [r44, a15];
  L13():
    popenv;
    return 1;
  L25():
    popenv;
    return 0;
  L63():
    b6 = force? b5;
    checkMissing(b6);
    length = ldf length in base;
    r31 = dyn length(b6);
    check L64() else D13();
  L65():
    a7 = ld a;
    check L66() else D14();
  L97():
    goto L23(r45);
  L100():
    a16 = force? a15;
    checkMissing(a16);
    length2 = ldf length in base;
    r51 = dyn length2(a16);
    check L101() else D25();
  L102():
    popenv;
    return -1;
  D13():
    deopt 58 [i2, k1, r31];
  D14():
    deopt 60 [i7, a7];
  D25():
    deopt 104 [r44, r51];
  L64():
    goto L12(i2, k1, r31);
  L66():
    a8 = force? a7;
    checkMissing(a8);
    c6 = `is.object`(a8);
    if c6 then L67() else L68(i7, a8);
  L101():
    goto L24(r44, r51);
  L14(i13, dx5):
    b7 = ld b;
    check L71() else D16();
  L67():
    dr4 = tryDispatchBuiltin.1("[", a8);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L69() else L68(i7, dr4);
  L68(i11, a10):
    k5 = ld k;
    check L70() else D15();
  D15():
    deopt 62 [i11, a10, k5];
  D16():
    deopt 64 [i13, dx5, b7];
  L69():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L14(i7, dx4);
  L70():
    k6 = force? k5;
    __2 = ldf `[` in base;
    r33 = dyn __2(a10, k6);
    goto L14(i11, r33);
  L71():
    b8 = force? b7;
    checkMissing(b8);
    c7 = `is.object`(b8);
    if c7 then L72() else L73(i13, dx5, b8);
  L15(i17, dx10, dx11):
    r35 = `>`(dx10, dx11);
    c8 = `as.logical`(r35);
    if c8 then L76() else L16();
  L72():
    dr6 = tryDispatchBuiltin.1("[", b8);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L74() else L73(i13, dx5, dr6);
  L73(i15, dx7, b10):
    k7 = ld k;
    check L75() else D17();
  D17():
    deopt 66 [i15, dx7, b10, k7];
  L16():
    a11 = ld a;
    check L79() else D18();
  L74():
    dx9 = getTryDispatchBuiltinValue(dr6);
    goto L15(i13, dx5, dx9);
  L75():
    k8 = force? k7;
    __3 = ldf `[` in base;
    r34 = dyn __3(b10, k8);
    goto L15(i15, dx7, r34);
  L76():
    popenv;
    return 1.0;
  D18():
    deopt 73 [i17, a11];
  L79():
    a12 = force? a11;
    checkMissing(a12);
    c9 = `is.object`(a12);
    if c9 then L80() else L81(i17, a12);
  L18(i25, dx13):
    b11 = ld b;
    check L84() else D20();
  L80():
    dr8 = tryDispatchBuiltin.1("[", a12);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L82() else L81(i17, dr8);
  L81(i23, a14):
    k9 = ld k;
    check L83() else D19();
  D19():
    deopt 75 [i23, a14, k9];
  D20():
    deopt 77 [i25, dx13, b11];
  L82():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L18(i17, dx12);
  L83():
    k10 = force? k9;
    __4 = ldf `[` in base;
    r38 = dyn __4(a14, k10);
    goto L18(i23, r38);
  L84():
    b12 = force? b11;
    checkMissing(b12);
    c10 = `is.object`(b12);
    if c10 then L85() else L86(i25, dx13, b12);
  L19(i29, dx18, dx19):
    r40 = `<`(dx18, dx19);
    c11 = `as.logical`(r40);
    if c11 then L89() else L20();
  L85():
    dr10 = tryDispatchBuiltin.1("[", b12);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L87() else L86(i25, dx13, dr10);
  L86(i27, dx15, b14):
    k11 = ld k;
    check L88() else D21();
  D21():
    deopt 79 [i27, dx15, b14, k11];
  L20():
    goto L11(i29);
  L87():
    dx17 = getTryDispatchBuiltinValue(dr10);
    goto L19(i25, dx13, dx17);
  L88():
    k12 = force? k11;
    __5 = ldf `[` in base;
    r39 = dyn __5(b14, k12);
    goto L19(i27, dx15, r39);
  L89():
    popenv;
    return -1;
  }
}