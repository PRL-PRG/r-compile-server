fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1301552337;
    st `.TAOCP1997init` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner1301552337(seed) {
  (reg seed:*) -+> V { var seed:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg as_integer:cls, reg r2:V, reg KK:*, reg KK1:V, reg KK2:*, reg KK3:V, reg r3:V, reg r4:V, reg KK4:*, reg KK5:V, reg LL:*, reg LL1:V, reg r5:V, reg seed1:*, reg seed2:V, reg seed3:*, reg seed4:V, reg __:cls, reg r6:V, reg r7:V, reg r8:V, reg integer:cls, reg KKK:*, reg KKK1:V, reg p:p(V +), reg r10:V, reg KK6:*, reg KK7:V, reg r11:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg ss:*, reg ss1:V, reg l1:*, reg c1:L, reg i6:I, reg ss3:V, reg l3:*, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg j:*, reg j1:V, reg ___:cls, reg r12:V, reg ss6:*, reg ss7:V, reg ss8:*, reg ss9:V, reg r13:V, reg ss10:*, reg ss11:V, reg MM:*, reg MM1:V, reg r14:V, reg c2:L, reg ss12:*, reg ss13:V, reg MM2:*, reg MM3:V, reg r15:V, reg r16:V, reg i11:I, reg X:*, reg X1:V, reg c3:L, reg X3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r18:V, reg r19:V, reg l4:*, reg c4:L, reg r21:V, reg l6:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ___1:cls, reg r24:V, reg seed5:*, reg seed6:V, reg T:*, reg T1:V, reg r25:V, reg c5:L, reg KK8:*, reg KK9:V, reg r26:V, reg s1:V, reg l7:I, reg i12:I, reg i13:I, reg i14:I, reg c6:L, reg x1:V, reg X4:*, reg X5:V, reg c7:L, reg i18:I, reg X7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg i20:I, reg dx7:V, reg j2:*, reg j3:V, reg __2:cls, reg r27:V, reg l8:*, reg c8:L, reg i22:I, reg dx9:V, reg l10:*, reg dr8:V, reg dc4:L, reg dx11:V, reg i24:I, reg dx13:V, reg j4:*, reg j5:V, reg j6:*, reg j7:V, reg r28:V, reg r29:V, reg ___2:cls, reg r30:V, reg seq:cls, reg KKK2:*, reg KKK3:V, reg p1:p(V +), reg KKL:*, reg KKL1:V, reg r32:V, reg p2:p(V +), reg p3:p(V +), reg r35:V, reg s2:V, reg l11:I, reg i25:I, reg i26:I, reg i27:I, reg c9:L, reg x2:V, reg X8:*, reg X9:V, reg c10:L, reg i31:I, reg X11:V, reg dr10:V, reg dc5:L, reg dx14:V, reg i33:I, reg dx15:V, reg j8:*, reg j9:V, reg __3:cls, reg r36:V, reg X12:*, reg X13:V, reg c11:L, reg i35:I, reg dx17:V, reg X15:V, reg dr12:V, reg dc6:L, reg dx19:V, reg i37:I, reg dx20:V, reg dx21:V, reg j10:*, reg j11:V, reg __4:cls, reg r37:V, reg __5:cls, reg r38:V, reg r39:V, reg l12:*, reg c12:L, reg i39:I, reg r41:V, reg l14:*, reg dr14:V, reg dc7:L, reg dx22:V, reg i41:I, reg dx23:V, reg KKK4:*, reg KKK5:V, reg j12:*, reg j13:V, reg r44:V, reg r45:V, reg ___3:cls, reg r46:V, reg KKK6:*, reg KKK7:V, reg KK10:*, reg KK11:V, reg r47:V, reg r48:V, reg s3:V, reg l15:I, reg i42:I, reg i43:I, reg i44:I, reg c13:L, reg x3:V, reg X16:*, reg X17:V, reg c14:L, reg i48:I, reg X19:V, reg dr16:V, reg dc8:L, reg dx24:V, reg i50:I, reg dx25:V, reg j14:*, reg j15:V, reg __6:cls, reg r49:V, reg __7:cls, reg r50:V, reg r51:V, reg c15:L, reg X20:*, reg X21:V, reg c16:L, reg i54:I, reg X23:V, reg dr18:V, reg dc9:L, reg dx26:V, reg i56:I, reg dx27:V, reg j16:*, reg j17:V, reg KKL2:*, reg KKL3:V, reg r52:V, reg __8:cls, reg r53:V, reg X24:*, reg X25:V, reg c17:L, reg i58:I, reg dx29:V, reg X27:V, reg dr20:V, reg dc10:L, reg dx31:V, reg i60:I, reg dx32:V, reg dx33:V, reg j18:*, reg j19:V, reg __9:cls, reg r54:V, reg r55:V, reg MM4:*, reg MM5:V, reg __10:cls, reg r56:V, reg l16:*, reg c18:L, reg i62:I, reg r58:V, reg l18:*, reg dr22:V, reg dc11:L, reg dx34:V, reg i64:I, reg dx35:V, reg j20:*, reg j21:V, reg KKL4:*, reg KKL5:V, reg r61:V, reg ___4:cls, reg r62:V, reg X28:*, reg X29:V, reg c19:L, reg i66:I, reg X31:V, reg dr24:V, reg dc12:L, reg dx36:V, reg i68:I, reg dx37:V, reg j22:*, reg j23:V, reg KK12:*, reg KK13:V, reg r63:V, reg __11:cls, reg r64:V, reg X32:*, reg X33:V, reg c20:L, reg i70:I, reg dx39:V, reg X35:V, reg dr26:V, reg dc13:L, reg dx41:V, reg i72:I, reg dx42:V, reg dx43:V, reg j24:*, reg j25:V, reg __12:cls, reg r65:V, reg r66:V, reg MM6:*, reg MM7:V, reg __13:cls, reg r67:V, reg l19:*, reg c21:L, reg i74:I, reg r69:V, reg l21:*, reg dr28:V, reg dc14:L, reg dx44:V, reg i76:I, reg r71:V, reg dx45:V, reg j26:*, reg j27:V, reg KK14:*, reg KK15:V, reg r72:V, reg ___5:cls, reg r73:V, reg i77:I, reg ss14:*, reg ss15:V, reg __14:cls, reg r75:V, reg r76:V, reg c22:L, reg KK16:*, reg KK17:V, reg r77:V, reg s4:V, reg l22:I, reg i78:I, reg i79:I, reg i80:I, reg c23:L, reg x4:V, reg X36:*, reg X37:V, reg c24:L, reg i84:I, reg X39:V, reg dr30:V, reg dc15:L, reg dx46:V, reg i86:I, reg dx47:V, reg j28:*, reg j29:V, reg __15:cls, reg r78:V, reg l23:*, reg c25:L, reg i88:I, reg dx49:V, reg l25:*, reg dr32:V, reg dc16:L, reg dx51:V, reg i90:I, reg dx53:V, reg j30:*, reg j31:V, reg r79:V, reg ___6:cls, reg r80:V, reg X40:*, reg X41:V, reg c26:L, reg X43:V, reg dr34:V, reg dc17:L, reg dx54:V, reg dx55:V, reg KK18:*, reg KK19:V, reg r81:V, reg __16:cls, reg r82:V, reg l26:*, reg c27:L, reg dx57:V, reg l28:*, reg dr36:V, reg dc18:L, reg dx59:V, reg dx61:V, reg ___7:cls, reg r83:V, reg X44:*, reg X45:V, reg c28:L, reg X47:V, reg dr38:V, reg dc19:L, reg dx62:V, reg dx63:V, reg KK20:*, reg KK21:V, reg r84:V, reg __17:cls, reg r85:V, reg __18:cls, reg r86:V, reg r87:V, reg c29:L, reg X48:*, reg X49:V, reg c30:L, reg X51:V, reg dr40:V, reg dc20:L, reg dx64:V, reg dx65:V, reg LL2:*, reg LL3:V, reg r88:V, reg __19:cls, reg r89:V, reg X52:*, reg X53:V, reg c31:L, reg dx67:V, reg X55:V, reg dr42:V, reg dc21:L, reg dx69:V, reg dx70:V, reg dx71:V, reg KK22:*, reg KK23:V, reg r90:V, reg __20:cls, reg r91:V, reg r92:V, reg MM8:*, reg MM9:V, reg __21:cls, reg r93:V, reg l29:*, reg c32:L, reg r95:V, reg l31:*, reg dr44:V, reg dc22:L, reg dx72:V, reg r97:V, reg dx73:V, reg LL4:*, reg LL5:V, reg r98:V, reg ___8:cls, reg r99:V, reg r100:V, reg ss16:*, reg ss17:V, reg c33:L, reg ss18:*, reg ss19:V, reg ___9:cls, reg r102:V, reg T2:*, reg T3:V, reg r104:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r105:V, reg r106:V, reg X56:*, reg X57:V, reg c34:L, reg X59:V, reg dr46:V, reg dc23:L, reg dx74:V, reg dx75:V, reg LL6:*, reg LL7:V, reg r107:V, reg KK24:*, reg KK25:V, reg r108:V, reg __22:cls, reg r109:V, reg X60:*, reg X61:V, reg c35:L, reg X63:V, reg dr48:V, reg dc24:L, reg dx76:V, reg dx77:V, reg LL8:*, reg LL9:V, reg r110:V, reg __23:cls, reg r111:V, reg c36:cls, reg r112:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r113:V, reg r114:V, reg rs:*, reg rs1:V, reg invisible:cls, reg r115:V |
    mkenv;
    st seed = seed;
    st KK = 100;
    st LL = 37;
    sym = ldf `as.integer`;
    base = ldf `as.integer` in base;
    guard = `==`.4(sym, base);
    if guard then L50() else L51();
  L0(r1):
    st MM = r1;
    KK = ld KK;
    check L53() else D1();
  L50():
    as_integer = ldf `as.integer` in base;
    r2 = dyn as_integer(1.073741824E9);
    check L52() else D0();
  L51():
    r = dyn base(<lang `^`(2.0, 30.0)>);
    goto L0(r);
  D0():
    deopt 11 [r2];
  D1():
    deopt 13 [KK];
  L52():
    goto L0(r2);
  L53():
    KK1 = force? KK;
    checkMissing(KK1);
    KK2 = ld KK;
    check L54() else D2();
  D2():
    deopt 14 [KK1, KK2];
  L54():
    KK3 = force? KK2;
    checkMissing(KK3);
    r3 = `+`(KK1, KK3);
    r4 = `-`(r3, 1);
    st KKK = r4;
    KK4 = ld KK;
    check L55() else D3();
  D3():
    deopt 20 [KK4];
  L55():
    KK5 = force? KK4;
    checkMissing(KK5);
    LL = ld LL;
    check L56() else D4();
  D4():
    deopt 21 [KK5, LL];
  L56():
    LL1 = force? LL;
    checkMissing(LL1);
    r5 = `-`(KK5, LL1);
    st KKL = r5;
    seed1 = ld seed;
    check L57() else D5();
  D5():
    deopt 25 [seed1];
  L57():
    seed2 = force? seed1;
    checkMissing(seed2);
    seed3 = ld seed;
    check L58() else D6();
  D6():
    deopt 27 [seed2, seed3];
  L58():
    seed4 = force? seed3;
    checkMissing(seed4);
    __ = ldf `%%` in base;
    r6 = dyn __(seed4, 2);
    check L59() else D7();
  D7():
    deopt 31 [seed2, r6];
  L59():
    r7 = `-`(seed2, r6);
    r8 = `+`(r7, 2);
    st ss = r8;
    integer = ldf integer;
    check L60() else D8();
  D8():
    deopt 37 [];
  L60():
    p = prom<V +>{
      KKK = ld KKK;
      KKK1 = force? KKK;
      checkMissing(KKK1);
      return KKK1;
    };
    r10 = dyn integer(p);
    check L61() else D9();
  D9():
    deopt 39 [r10];
  L61():
    st X = r10;
    KK6 = ld KK;
    check L62() else D10();
  D10():
    deopt 42 [1, KK6];
  L62():
    KK7 = force? KK6;
    checkMissing(KK7);
    r11 = `:`(1, KK7);
    s = toForSeq(r11);
    l = length(s);
    i = 0;
    goto L1(i);
  L1(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L63() else L5();
  L5():
    x = `[[`(s, i2, NULL, TRUE);
    st j = x;
    ss = ld ss;
    check L64() else D11();
  L63():
    X = ld X;
    check L77() else D19();
  D11():
    deopt 45 [i2, ss];
  D19():
    deopt 73 [X];
  L64():
    ss1 = force? ss;
    checkMissing(ss1);
    l1 = ld X;
    c1 = `is.object`(l1);
    if c1 then L65() else L66(i2, ss1, l1);
  L77():
    X1 = force? X;
    checkMissing(X1);
    c3 = `is.object`(X1);
    if c3 then L78() else L79(X1);
  L2(i8, dx1):
    st X = dx1;
    ss6 = ld ss;
    check L69() else D13();
  L6(dx3):
    r19 = `+`(dx3, 1);
    l4 = ld X;
    c4 = `is.object`(l4);
    if c4 then L81() else L82(r19, l4);
  L65():
    dr = tryDispatchBuiltin.0("[<-", l1, ss1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L67() else L66(i2, ss1, dr);
  L66(i6, ss3, l3):
    j = ld j;
    check L68() else D12();
  L78():
    dr2 = tryDispatchBuiltin.1("[", X1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L80() else L79(dr2);
  L79(X3):
    __1 = ldf `[` in base;
    r18 = dyn __1(X3, 2);
    goto L6(r18);
  D12():
    deopt 48 [i6, ss3, l3, ss1, j];
  D13():
    deopt 52 [i8, ss6];
  L7(dx5):
    st X = dx5;
    seed5 = ld seed;
    check L84() else D20();
  L67():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(i2, dx);
  L68():
    j1 = force? j;
    ___ = ldf `[<-` in base;
    r12 = dyn ___(l3, ss1, j1);
    goto L2(i6, r12);
  L69():
    ss7 = force? ss6;
    checkMissing(ss7);
    ss8 = ld ss;
    check L70() else D14();
  L80():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L6(dx2);
  L81():
    dr4 = tryDispatchBuiltin.0("[<-", l4, r19);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L83() else L82(r19, dr4);
  L82(r21, l6):
    ___1 = ldf `[<-` in base;
    r24 = dyn ___1(l6, r19, 2);
    goto L7(r24);
  D14():
    deopt 53 [i8, ss7, ss8];
  D20():
    deopt 85 [seed5];
  L70():
    ss9 = force? ss8;
    checkMissing(ss9);
    r13 = `+`(ss7, ss9);
    st ss = r13;
    ss10 = ld ss;
    check L71() else D15();
  L83():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L7(dx4);
  L84():
    seed6 = force? seed5;
    checkMissing(seed6);
    st ss = seed6;
    st T = 69;
    goto L45();
  D15():
    deopt 57 [i8, ss10];
  L45():
    T = ld T;
    check L85() else D21();
  L71():
    ss11 = force? ss10;
    checkMissing(ss11);
    MM = ld MM;
    check L72() else D16();
  D16():
    deopt 58 [i8, ss11, MM];
  D21():
    deopt 91 [T];
  L72():
    MM1 = force? MM;
    checkMissing(MM1);
    r14 = `>=`(ss11, MM1);
    c2 = `as.logical`(r14);
    if c2 then L73() else L3();
  L85():
    T1 = force? T;
    checkMissing(T1);
    r25 = `>`(T1, 0.0);
    c5 = `as.logical`(r25);
    if c5 then L86() else L8();
  L3():
    goto L4(i8);
  L4(i11):
    goto L1(i11);
  L8():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L219() else L220();
  L73():
    ss12 = ld ss;
    check L74() else D17();
  L86():
    KK8 = ld KK;
    check L87() else D22();
  D17():
    deopt 61 [i8, ss12];
  D22():
    deopt 95 [KK8];
  L46(r106):
    st rs = r106;
    sym2 = ldf invisible;
    base2 = ldf invisible in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L233() else L234();
  L74():
    ss13 = force? ss12;
    checkMissing(ss13);
    MM2 = ld MM;
    check L75() else D18();
  L87():
    KK9 = force? KK8;
    checkMissing(KK9);
    r26 = `:`(KK9, 2);
    s1 = toForSeq(r26);
    l7 = length(s1);
    i12 = 0;
    goto L9(i12);
  L219():
    X56 = ld X;
    check L221() else D81();
  L220():
    r105 = dyn base1(<lang `[`(X, `:`(`(`(`+`(LL, 1)), KK))>, <lang `[`(X, `:`(1, LL))>);
    goto L46(r105);
  D18():
    deopt 62 [i8, ss13, MM2];
  D81():
    deopt 319 [X56];
  L9(i13):
    i14 = `+`.1(i13, 1);
    c6 = `<`.1(l7, i14);
    if c6 then L88() else L12();
  L49(r114):
    popenv;
    return r114;
  L75():
    MM3 = force? MM2;
    checkMissing(MM3);
    r15 = `-`(ss13, MM3);
    r16 = `+`(r15, 2);
    st ss = r16;
    goto L4(i8);
  L221():
    X57 = force? X56;
    checkMissing(X57);
    c34 = `is.object`(X57);
    if c34 then L222() else L223(X57);
  L233():
    rs = ld rs;
    check L235() else D87();
  L234():
    r113 = dyn base2(<sym rs>);
    goto L49(r113);
  D87():
    deopt 340 [rs];
  L12():
    x1 = `[[`(s1, i14, NULL, TRUE);
    st j = x1;
    X4 = ld X;
    check L89() else D23();
  L47(dx75):
    X60 = ld X;
    check L227() else D84();
  L88():
    seq = ldf seq;
    check L99() else D27();
  L222():
    dr46 = tryDispatchBuiltin.1("[", X57);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L224() else L223(dr46);
  L223(X59):
    LL6 = ld LL;
    check L225() else D82();
  L235():
    rs1 = force? rs;
    checkMissing(rs1);
    invisible = ldf invisible in base;
    r115 = dyn invisible(rs1);
    check L236() else D88();
  D23():
    deopt 99 [i14, X4];
  D27():
    deopt 117 [];
  D82():
    deopt 321 [X59, LL6];
  D84():
    deopt 328 [X60];
  D88():
    deopt 343 [r115];
  L89():
    X5 = force? X4;
    checkMissing(X5);
    c7 = `is.object`(X5);
    if c7 then L90() else L91(i14, X5);
  L99():
    p1 = prom<V +>{
      KKK2 = ld KKK;
      KKK3 = force? KKK2;
      checkMissing(KKK3);
      return KKK3;
    };
    p2 = prom<V +>{
      KKL = ld KKL;
      KKL1 = force? KKL;
      checkMissing(KKL1);
      r32 = `+`(KKL1, 1);
      return r32;
    };
    p3 = prom<V +>{
      return -2;
    };
    r35 = dyn seq(p1, p2, p3);
    check L100() else D28();
  L224():
    dx74 = getTryDispatchBuiltinValue(dr46);
    goto L47(dx74);
  L225():
    LL7 = force? LL6;
    checkMissing(LL7);
    r107 = `+`(LL7, 1);
    KK24 = ld KK;
    check L226() else D83();
  L227():
    X61 = force? X60;
    checkMissing(X61);
    c35 = `is.object`(X61);
    if c35 then L228() else L229(X61);
  L236():
    goto L49(r115);
  D28():
    deopt 121 [r35];
  D83():
    deopt 324 [X59, r107, KK24];
  L10(i20, dx7):
    l8 = ld X;
    c8 = `is.object`(l8);
    if c8 then L94() else L95(i20, dx7, l8);
  L48(dx77):
    c36 = ldf c in base;
    r112 = dyn c36(dx75, dx77);
    check L232() else D86();
  L90():
    dr6 = tryDispatchBuiltin.1("[", X5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L92() else L91(i14, dr6);
  L91(i18, X7):
    j2 = ld j;
    check L93() else D24();
  L100():
    s2 = toForSeq(r35);
    l11 = length(s2);
    i25 = 0;
    goto L13(i25);
  L226():
    KK25 = force? KK24;
    checkMissing(KK25);
    r108 = `:`(r107, KK25);
    __22 = ldf `[` in base;
    r109 = dyn __22(X59, r108);
    goto L47(r109);
  L228():
    dr48 = tryDispatchBuiltin.1("[", X61);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L230() else L229(dr48);
  L229(X63):
    LL8 = ld LL;
    check L231() else D85();
  D24():
    deopt 101 [i18, X7, j2];
  D85():
    deopt 331 [X63, 1, LL8];
  D86():
    deopt 336 [r112];
  L11(i24, dx13):
    st X = dx13;
    goto L9(i24);
  L13(i26):
    i27 = `+`.1(i26, 1);
    c9 = `<`.1(l11, i27);
    if c9 then L101() else L17();
  L92():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L10(i14, dx6);
  L93():
    j3 = force? j2;
    __2 = ldf `[` in base;
    r27 = dyn __2(X7, j3);
    goto L10(i18, r27);
  L94():
    dr8 = tryDispatchBuiltin.0("[<-", l8, dx7);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L96() else L95(i20, dx7, dr8);
  L95(i22, dx9, l10):
    j4 = ld j;
    check L97() else D25();
  L230():
    dx76 = getTryDispatchBuiltinValue(dr48);
    goto L48(dx76);
  L231():
    LL9 = force? LL8;
    checkMissing(LL9);
    r110 = `:`(1, LL9);
    __23 = ldf `[` in base;
    r111 = dyn __23(X63, r110);
    goto L48(r111);
  L232():
    goto L46(r112);
  D25():
    deopt 105 [i22, dx9, l10, dx7, j4];
  L17():
    x2 = `[[`(s2, i27, NULL, TRUE);
    st j = x2;
    X8 = ld X;
    check L102() else D29();
  L96():
    dx11 = getTryDispatchBuiltinValue(dr8);
    goto L11(i20, dx11);
  L97():
    j5 = force? j4;
    checkMissing(j5);
    j6 = ld j;
    check L98() else D26();
  L101():
    KKK6 = ld KKK;
    check L118() else D36();
  D26():
    deopt 106 [i22, dx9, l10, dx7, j5, j6];
  D29():
    deopt 122 [i27, X8];
  D36():
    deopt 148 [KKK6];
  L98():
    j7 = force? j6;
    checkMissing(j7);
    r28 = `+`(j5, j7);
    r29 = `-`(r28, 1);
    ___2 = ldf `[<-` in base;
    r30 = dyn ___2(l10, dx7, r29);
    goto L11(i22, r30);
  L102():
    X9 = force? X8;
    checkMissing(X9);
    c10 = `is.object`(X9);
    if c10 then L103() else L104(i27, X9);
  L118():
    KKK7 = force? KKK6;
    checkMissing(KKK7);
    KK10 = ld KK;
    check L119() else D37();
  D37():
    deopt 149 [KKK7, KK10];
  L14(i33, dx15):
    X12 = ld X;
    check L107() else D31();
  L103():
    dr10 = tryDispatchBuiltin.1("[", X9);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L105() else L104(i27, dr10);
  L104(i31, X11):
    j8 = ld j;
    check L106() else D30();
  L119():
    KK11 = force? KK10;
    checkMissing(KK11);
    r47 = `+`(KK11, 1);
    r48 = `:`(KKK7, r47);
    s3 = toForSeq(r48);
    l15 = length(s3);
    i42 = 0;
    goto L18(i42);
  D30():
    deopt 124 [i31, X11, j8];
  D31():
    deopt 127 [i33, dx15, X12];
  L18(i43):
    i44 = `+`.1(i43, 1);
    c13 = `<`.1(l15, i44);
    if c13 then L120() else L28();
  L105():
    dx14 = getTryDispatchBuiltinValue(dr10);
    goto L14(i27, dx14);
  L106():
    j9 = force? j8;
    __3 = ldf `[` in base;
    r36 = dyn __3(X11, j9);
    goto L14(i31, r36);
  L107():
    X13 = force? X12;
    checkMissing(X13);
    c11 = `is.object`(X13);
    if c11 then L108() else L109(i33, dx15, X13);
  L15(i37, dx20, dx21):
    __5 = ldf `%%` in base;
    r38 = dyn __5(dx21, 2);
    check L112() else D33();
  L28():
    x3 = `[[`(s3, i44, NULL, TRUE);
    st j = x3;
    X16 = ld X;
    check L121() else D38();
  L108():
    dr12 = tryDispatchBuiltin.1("[", X13);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L110() else L109(i33, dx15, dr12);
  L109(i35, dx17, X15):
    j10 = ld j;
    check L111() else D32();
  L120():
    ss14 = ld ss;
    check L165() else D59();
  D32():
    deopt 129 [i35, dx17, X15, j10];
  D33():
    deopt 134 [i37, dx20, r38];
  D38():
    deopt 155 [i44, X16];
  D59():
    deopt 219 [ss14];
  L110():
    dx19 = getTryDispatchBuiltinValue(dr12);
    goto L15(i33, dx15, dx19);
  L111():
    j11 = force? j10;
    __4 = ldf `[` in base;
    r37 = dyn __4(X15, j11);
    goto L15(i35, dx17, r37);
  L112():
    r39 = `-`(dx20, r38);
    l12 = ld X;
    c12 = `is.object`(l12);
    if c12 then L113() else L114(i37, r39, l12);
  L121():
    X17 = force? X16;
    checkMissing(X17);
    c14 = `is.object`(X17);
    if c14 then L122() else L123(i44, X17);
  L165():
    ss15 = force? ss14;
    checkMissing(ss15);
    __14 = ldf `%%` in base;
    r75 = dyn __14(ss15, 2);
    check L166() else D60();
  D60():
    deopt 223 [r75];
  L16(i41, dx23):
    st X = dx23;
    goto L13(i41);
  L19(i50, dx25):
    __7 = ldf `%%` in base;
    r50 = dyn __7(dx25, 2);
    check L126() else D40();
  L113():
    dr14 = tryDispatchBuiltin.0("[<-", l12, r39);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L115() else L114(i37, r39, dr14);
  L114(i39, r41, l14):
    KKK4 = ld KKK;
    check L116() else D34();
  L122():
    dr16 = tryDispatchBuiltin.1("[", X17);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L124() else L123(i44, dr16);
  L123(i48, X19):
    j14 = ld j;
    check L125() else D39();
  L166():
    r76 = `==`(r75, 1);
    c22 = `as.logical`(r76);
    if c22 then L167() else L29();
  D34():
    deopt 137 [i39, r41, l14, r39, KKK4];
  D39():
    deopt 157 [i48, X19, j14];
  D40():
    deopt 162 [i50, r50];
  L29():
    goto L42();
  L42():
    ss16 = ld ss;
    check L212() else D77();
  L115():
    dx22 = getTryDispatchBuiltinValue(dr14);
    goto L16(i37, dx22);
  L116():
    KKK5 = force? KKK4;
    checkMissing(KKK5);
    j12 = ld j;
    check L117() else D35();
  L124():
    dx24 = getTryDispatchBuiltinValue(dr16);
    goto L19(i44, dx24);
  L125():
    j15 = force? j14;
    __6 = ldf `[` in base;
    r49 = dyn __6(X19, j15);
    goto L19(i48, r49);
  L126():
    r51 = `==`(r50, 1);
    c15 = `as.logical`(r51);
    if c15 then L127() else L20();
  L167():
    KK16 = ld KK;
    check L168() else D61();
  D35():
    deopt 138 [i39, r41, l14, r39, KKK5, j12];
  D61():
    deopt 226 [KK16];
  D77():
    deopt 300 [ss16];
  L20():
    goto L27(i50);
  L27(i77):
    goto L18(i77);
  L117():
    j13 = force? j12;
    checkMissing(j13);
    r44 = `-`(KKK5, j13);
    r45 = `+`(r44, 2);
    ___3 = ldf `[<-` in base;
    r46 = dyn ___3(l14, r39, r45);
    goto L16(i39, r46);
  L127():
    X20 = ld X;
    check L128() else D41();
  L168():
    KK17 = force? KK16;
    checkMissing(KK17);
    r77 = `:`(KK17, 1);
    s4 = toForSeq(r77);
    l22 = length(s4);
    i78 = 0;
    goto L30(i78);
  L212():
    ss17 = force? ss16;
    checkMissing(ss17);
    c33 = `as.logical`(ss17);
    if c33 then L213() else L43();
  D41():
    deopt 166 [i50, X20];
  L30(i79):
    i80 = `+`.1(i79, 1);
    c23 = `<`.1(l22, i80);
    if c23 then L169() else L33();
  L43():
    T2 = ld T;
    check L217() else D80();
  L44():
    goto L45();
  L128():
    X21 = force? X20;
    checkMissing(X21);
    c16 = `is.object`(X21);
    if c16 then L129() else L130(i50, X21);
  L213():
    ss18 = ld ss;
    check L214() else D78();
  D78():
    deopt 303 [ss18];
  D80():
    deopt 309 [T2];
  L21(i56, dx27):
    X24 = ld X;
    check L134() else D44();
  L33():
    x4 = `[[`(s4, i80, NULL, TRUE);
    st j = x4;
    X36 = ld X;
    check L170() else D62();
  L129():
    dr18 = tryDispatchBuiltin.1("[", X21);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L131() else L130(i50, dr18);
  L130(i54, X23):
    j16 = ld j;
    check L132() else D42();
  L169():
    X40 = ld X;
    check L179() else D65();
  L214():
    ss19 = force? ss18;
    checkMissing(ss19);
    ___9 = ldf `%/%` in base;
    r102 = dyn ___9(ss19, 2);
    check L215() else D79();
  L217():
    T3 = force? T2;
    checkMissing(T3);
    r104 = `-`(T3, 1);
    st T = r104;
    goto L44();
  D42():
    deopt 168 [i54, X23, j16];
  D44():
    deopt 172 [i56, dx27, X24];
  D62():
    deopt 230 [i80, X36];
  D65():
    deopt 245 [X40];
  D79():
    deopt 307 [r102];
  L131():
    dx26 = getTryDispatchBuiltinValue(dr18);
    goto L21(i50, dx26);
  L132():
    j17 = force? j16;
    checkMissing(j17);
    KKL2 = ld KKL;
    check L133() else D43();
  L134():
    X25 = force? X24;
    checkMissing(X25);
    c17 = `is.object`(X25);
    if c17 then L135() else L136(i56, dx27, X25);
  L170():
    X37 = force? X36;
    checkMissing(X37);
    c24 = `is.object`(X37);
    if c24 then L171() else L172(i80, X37);
  L179():
    X41 = force? X40;
    checkMissing(X41);
    c26 = `is.object`(X41);
    if c26 then L180() else L181(X41);
  L215():
    st ss = r102;
    goto L44();
  D43():
    deopt 169 [i54, X23, j17, KKL2];
  L22(i60, dx32, dx33):
    r55 = `-`(dx32, dx33);
    MM4 = ld MM;
    check L139() else D46();
  L31(i86, dx47):
    l23 = ld X;
    c25 = `is.object`(l23);
    if c25 then L175() else L176(i86, dx47, l23);
  L34(dx55):
    l26 = ld X;
    c27 = `is.object`(l26);
    if c27 then L184() else L185(dx55, l26);
  L133():
    KKL3 = force? KKL2;
    checkMissing(KKL3);
    r52 = `-`(j17, KKL3);
    __8 = ldf `[` in base;
    r53 = dyn __8(X23, r52);
    goto L21(i54, r53);
  L135():
    dr20 = tryDispatchBuiltin.1("[", X25);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L137() else L136(i56, dx27, dr20);
  L136(i58, dx29, X27):
    j18 = ld j;
    check L138() else D45();
  L171():
    dr30 = tryDispatchBuiltin.1("[", X37);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L173() else L172(i80, dr30);
  L172(i84, X39):
    j28 = ld j;
    check L174() else D63();
  L180():
    dr34 = tryDispatchBuiltin.1("[", X41);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L182() else L181(dr34);
  L181(X43):
    KK18 = ld KK;
    check L183() else D66();
  D45():
    deopt 174 [i58, dx29, X27, j18];
  D46():
    deopt 178 [i60, MM4];
  D63():
    deopt 232 [i84, X39, j28];
  D66():
    deopt 247 [X43, KK18];
  L32(i90, dx53):
    st X = dx53;
    goto L30(i90);
  L35(dx61):
    st X = dx61;
    X44 = ld X;
    check L187() else D67();
  L137():
    dx31 = getTryDispatchBuiltinValue(dr20);
    goto L22(i56, dx27, dx31);
  L138():
    j19 = force? j18;
    __9 = ldf `[` in base;
    r54 = dyn __9(X27, j19);
    goto L22(i58, dx29, r54);
  L139():
    MM5 = force? MM4;
    checkMissing(MM5);
    __10 = ldf `%%` in base;
    r56 = dyn __10(r55, MM5);
    check L140() else D47();
  L173():
    dx46 = getTryDispatchBuiltinValue(dr30);
    goto L31(i80, dx46);
  L174():
    j29 = force? j28;
    __15 = ldf `[` in base;
    r78 = dyn __15(X39, j29);
    goto L31(i84, r78);
  L175():
    dr32 = tryDispatchBuiltin.0("[<-", l23, dx47);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L177() else L176(i86, dx47, dr32);
  L176(i88, dx49, l25):
    j30 = ld j;
    check L178() else D64();
  L182():
    dx54 = getTryDispatchBuiltinValue(dr34);
    goto L34(dx54);
  L183():
    KK19 = force? KK18;
    checkMissing(KK19);
    r81 = `+`(KK19, 1);
    __16 = ldf `[` in base;
    r82 = dyn __16(X43, r81);
    goto L34(r82);
  L184():
    dr36 = tryDispatchBuiltin.0("[<-", l26, dx55);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L186() else L185(dx55, dr36);
  L185(dx57, l28):
    ___7 = ldf `[<-` in base;
    r83 = dyn ___7(l28, dx55, 1);
    goto L35(r83);
  D47():
    deopt 181 [i60, r56];
  D64():
    deopt 236 [i88, dx49, l25, dx47, j30];
  D67():
    deopt 258 [X44];
  L140():
    l16 = ld X;
    c18 = `is.object`(l16);
    if c18 then L141() else L142(i60, r56, l16);
  L177():
    dx51 = getTryDispatchBuiltinValue(dr32);
    goto L32(i86, dx51);
  L178():
    j31 = force? j30;
    checkMissing(j31);
    r79 = `+`(j31, 1);
    ___6 = ldf `[<-` in base;
    r80 = dyn ___6(l25, dx47, r79);
    goto L32(i88, r80);
  L186():
    dx59 = getTryDispatchBuiltinValue(dr36);
    goto L35(dx59);
  L187():
    X45 = force? X44;
    checkMissing(X45);
    c28 = `is.object`(X45);
    if c28 then L188() else L189(X45);
  L23(i64, dx35):
    st X = dx35;
    X28 = ld X;
    check L146() else D50();
  L36(dx63):
    __18 = ldf `%%` in base;
    r86 = dyn __18(dx63, 2);
    check L192() else D69();
  L141():
    dr22 = tryDispatchBuiltin.0("[<-", l16, r56);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L143() else L142(i60, r56, dr22);
  L142(i62, r58, l18):
    j20 = ld j;
    check L144() else D48();
  L188():
    dr38 = tryDispatchBuiltin.1("[", X45);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L190() else L189(dr38);
  L189(X47):
    KK20 = ld KK;
    check L191() else D68();
  D48():
    deopt 183 [i62, r58, l18, r56, j20];
  D50():
    deopt 190 [i64, X28];
  D68():
    deopt 260 [X47, KK20];
  D69():
    deopt 267 [r86];
  L143():
    dx34 = getTryDispatchBuiltinValue(dr22);
    goto L23(i60, dx34);
  L144():
    j21 = force? j20;
    checkMissing(j21);
    KKL4 = ld KKL;
    check L145() else D49();
  L146():
    X29 = force? X28;
    checkMissing(X29);
    c19 = `is.object`(X29);
    if c19 then L147() else L148(i64, X29);
  L190():
    dx62 = getTryDispatchBuiltinValue(dr38);
    goto L36(dx62);
  L191():
    KK21 = force? KK20;
    checkMissing(KK21);
    r84 = `+`(KK21, 1);
    __17 = ldf `[` in base;
    r85 = dyn __17(X47, r84);
    goto L36(r85);
  L192():
    r87 = `==`(r86, 1);
    c29 = `as.logical`(r87);
    if c29 then L193() else L37();
  D49():
    deopt 184 [i62, r58, l18, r56, j21, KKL4];
  L24(i68, dx37):
    X32 = ld X;
    check L152() else D53();
  L37():
    goto L41(NULL);
  L41(r100):
    goto L42();
  L145():
    KKL5 = force? KKL4;
    checkMissing(KKL5);
    r61 = `-`(j21, KKL5);
    ___4 = ldf `[<-` in base;
    r62 = dyn ___4(l18, r56, r61);
    goto L23(i62, r62);
  L147():
    dr24 = tryDispatchBuiltin.1("[", X29);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L149() else L148(i64, dr24);
  L148(i66, X31):
    j22 = ld j;
    check L150() else D51();
  L193():
    X48 = ld X;
    check L194() else D70();
  D51():
    deopt 192 [i66, X31, j22];
  D53():
    deopt 196 [i68, dx37, X32];
  D70():
    deopt 271 [X48];
  L149():
    dx36 = getTryDispatchBuiltinValue(dr24);
    goto L24(i64, dx36);
  L150():
    j23 = force? j22;
    checkMissing(j23);
    KK12 = ld KK;
    check L151() else D52();
  L152():
    X33 = force? X32;
    checkMissing(X33);
    c20 = `is.object`(X33);
    if c20 then L153() else L154(i68, dx37, X33);
  L194():
    X49 = force? X48;
    checkMissing(X49);
    c30 = `is.object`(X49);
    if c30 then L195() else L196(X49);
  D52():
    deopt 193 [i66, X31, j23, KK12];
  L25(i72, dx42, dx43):
    r66 = `-`(dx42, dx43);
    MM6 = ld MM;
    check L157() else D55();
  L38(dx65):
    X52 = ld X;
    check L199() else D72();
  L151():
    KK13 = force? KK12;
    checkMissing(KK13);
    r63 = `-`(j23, KK13);
    __11 = ldf `[` in base;
    r64 = dyn __11(X31, r63);
    goto L24(i66, r64);
  L153():
    dr26 = tryDispatchBuiltin.1("[", X33);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L155() else L154(i68, dx37, dr26);
  L154(i70, dx39, X35):
    j24 = ld j;
    check L156() else D54();
  L195():
    dr40 = tryDispatchBuiltin.1("[", X49);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L197() else L196(dr40);
  L196(X51):
    LL2 = ld LL;
    check L198() else D71();
  D54():
    deopt 198 [i70, dx39, X35, j24];
  D55():
    deopt 202 [i72, MM6];
  D71():
    deopt 273 [X51, LL2];
  D72():
    deopt 277 [dx65, X52];
  L155():
    dx41 = getTryDispatchBuiltinValue(dr26);
    goto L25(i68, dx37, dx41);
  L156():
    j25 = force? j24;
    __12 = ldf `[` in base;
    r65 = dyn __12(X35, j25);
    goto L25(i70, dx39, r65);
  L157():
    MM7 = force? MM6;
    checkMissing(MM7);
    __13 = ldf `%%` in base;
    r67 = dyn __13(r66, MM7);
    check L158() else D56();
  L197():
    dx64 = getTryDispatchBuiltinValue(dr40);
    goto L38(dx64);
  L198():
    LL3 = force? LL2;
    checkMissing(LL3);
    r88 = `+`(LL3, 1);
    __19 = ldf `[` in base;
    r89 = dyn __19(X51, r88);
    goto L38(r89);
  L199():
    X53 = force? X52;
    checkMissing(X53);
    c31 = `is.object`(X53);
    if c31 then L200() else L201(dx65, X53);
  D56():
    deopt 205 [i72, r67];
  L39(dx70, dx71):
    r92 = `-`(dx70, dx71);
    MM8 = ld MM;
    check L204() else D74();
  L158():
    l19 = ld X;
    c21 = `is.object`(l19);
    if c21 then L159() else L160(i72, r67, l19);
  L200():
    dr42 = tryDispatchBuiltin.1("[", X53);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L202() else L201(dx65, dr42);
  L201(dx67, X55):
    KK22 = ld KK;
    check L203() else D73();
  D73():
    deopt 279 [dx67, X55, KK22];
  D74():
    deopt 285 [MM8];
  L26(i76, r71, dx45):
    st X = dx45;
    goto L27(i76);
  L159():
    dr28 = tryDispatchBuiltin.0("[<-", l19, r67);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L161() else L160(i72, r67, dr28);
  L160(i74, r69, l21):
    j26 = ld j;
    check L162() else D57();
  L202():
    dx69 = getTryDispatchBuiltinValue(dr42);
    goto L39(dx65, dx69);
  L203():
    KK23 = force? KK22;
    checkMissing(KK23);
    r90 = `+`(KK23, 1);
    __20 = ldf `[` in base;
    r91 = dyn __20(X55, r90);
    goto L39(dx67, r91);
  L204():
    MM9 = force? MM8;
    checkMissing(MM9);
    __21 = ldf `%%` in base;
    r93 = dyn __21(r92, MM9);
    check L205() else D75();
  D57():
    deopt 207 [i74, r69, l21, r67, j26];
  D75():
    deopt 288 [r93];
  L161():
    dx44 = getTryDispatchBuiltinValue(dr28);
    goto L26(i72, r67, dx44);
  L162():
    j27 = force? j26;
    checkMissing(j27);
    KK14 = ld KK;
    check L163() else D58();
  L205():
    l29 = ld X;
    c32 = `is.object`(l29);
    if c32 then L206() else L207(r93, l29);
  D58():
    deopt 208 [i74, r69, l21, r67, j27, KK14];
  L40(r97, dx73):
    st X = dx73;
    goto L41(r97);
  L163():
    KK15 = force? KK14;
    checkMissing(KK15);
    r72 = `-`(j27, KK15);
    ___5 = ldf `[<-` in base;
    r73 = dyn ___5(l21, r67, r72);
    goto L26(i74, r69, r73);
  L206():
    dr44 = tryDispatchBuiltin.0("[<-", l29, r93);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L208() else L207(r93, dr44);
  L207(r95, l31):
    LL4 = ld LL;
    check L209() else D76();
  D76():
    deopt 290 [r95, l31, r93, LL4];
  L208():
    dx72 = getTryDispatchBuiltinValue(dr44);
    goto L40(r93, dx72);
  L209():
    LL5 = force? LL4;
    checkMissing(LL5);
    r98 = `+`(LL5, 1);
    ___8 = ldf `[<-` in base;
    r99 = dyn ___8(l31, r93, r98);
    goto L40(r95, r99);
  }
}