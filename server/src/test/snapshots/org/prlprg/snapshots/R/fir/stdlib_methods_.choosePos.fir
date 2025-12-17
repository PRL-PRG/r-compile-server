fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner888563897;
    st `.choosePos` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner888563897(thisClass, superclasses, subNames, affected) {
  (reg thisClass:*, reg superclasses:*, reg subNames:*, reg affected:*) -+> V { var thisClass:*, var superclasses:*, var subNames:*, var affected:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg thisClass1:*, reg thisClass2:V, reg superclasses1:*, reg superclasses2:V, reg c:cls, reg r5:V, reg unique:cls, reg superclasses3:*, reg superclasses4:V, reg c1:L, reg superclasses6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg affected1:*, reg affected2:V, reg __:cls, reg r6:V, reg p:p(V +), reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg subNames1:*, reg subNames2:V, reg names:cls, reg r11:V, reg dups:*, reg dups1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c2:L, reg x:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg i7:I, reg r13:V, reg allNames:*, reg allNames1:V, reg r14:I, reg c3:L, reg i9:I, reg r16:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i11:I, reg dx3:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg i14:I, reg r20:V, reg r21:V, reg allNames2:*, reg allNames3:V, reg what:*, reg what1:V, reg match:cls, reg r22:V, reg r23:V, reg __1:cls, reg r24:V, reg lapply:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r25:V, reg r26:V, reg where:*, reg where1:V, reg r27:I, reg r28:V, reg p1:p(V +), reg r30:cls, reg p2:p(V +), reg where2:*, reg where3:V, reg p3:p(V +), reg r33:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r34:V, reg i17:I, reg r35:V, reg candidates:*, reg candidates1:V, reg length:cls, reg r36:V, reg r37:V, reg c4:L, reg whatRemove:*, reg whatRemove1:V, reg i20:I, reg outer:cls, reg candidates2:*, reg candidates3:V, reg p4:p(V +), reg whatRemove3:*, reg whatRemove4:V, reg p5:p(V +), reg r40:cls, reg p6:p(V +), reg r42:V, reg r43:cls, reg lapply1:cls, reg candidates4:*, reg candidates5:V, reg p7:p(V +), reg r45:cls, reg p8:p(V +), reg allNames4:*, reg allNames5:V, reg p9:p(V +), reg r48:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r49:V, reg r50:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r51:V, reg r52:V, reg possibles:*, reg possibles1:V, reg length1:cls, reg r53:V, reg vector:cls, reg r54:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r55:V, reg r56:V, reg possibles2:*, reg possibles3:V, reg r57:I, reg s1:V, reg l1:I, reg i21:I, reg i22:I, reg i23:I, reg c5:L, reg x1:V, reg vapply:cls, reg subNames3:*, reg subNames4:V, reg p10:p(V +), reg problems:*, reg problems1:V, reg p11:p(V +), reg possibles4:*, reg possibles5:V, reg c6:L, reg possibles7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg i26:*, reg i27:V, reg __2:cls, reg r60:V, reg p12:p(V +), reg r62:V, reg whichCase:*, reg whichCase1:V, reg c7:L, reg i29:I, reg whichCase3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg i31:I, reg dx7:V, reg score:*, reg score1:V, reg __3:cls, reg r63:V, reg l2:*, reg c8:L, reg i33:I, reg dx9:V, reg l4:*, reg dr8:V, reg dc4:L, reg dx11:V, reg i35:I, reg dx13:V, reg i36:*, reg i37:V, reg ____:cls, reg r64:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r65:V, reg i40:I, reg r66:V, reg score2:*, reg score3:V, reg any:cls, reg r67:V, reg r68:V, reg c9:L, reg candidates6:*, reg candidates7:V, reg c10:L, reg i44:I, reg candidates9:V, reg dr10:V, reg dc5:L, reg dx14:V, reg dx15:V, reg i47:*, reg i48:V, reg __4:cls, reg r69:V, reg r70:V, reg r71:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r74:V, reg r75:V, reg lengths:cls, reg scores:*, reg scores1:V, reg p13:p(V +), reg r77:V, reg which_min:cls, reg r78:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r79:V, reg r80:V, reg candidates10:*, reg candidates11:V, reg c11:L, reg candidates13:V, reg dr12:V, reg dc6:L, reg dx16:V, reg dx17:V, reg i51:*, reg i52:V, reg __5:cls, reg r81:V, reg r82:V, reg r83:V, reg scores2:*, reg scores3:V, reg c12:L, reg scores5:V, reg dr14:V, reg dc7:L, reg dx18:V, reg dx19:V, reg i53:*, reg i54:V, reg __6:cls, reg r84:V, reg list1:cls, reg r85:V |
    mkenv;
    st thisClass = thisClass;
    st superclasses = superclasses;
    st subNames = subNames;
    st affected = affected;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L26() else L27();
  L0(r1):
    st candidates = r1;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L29() else L30();
  L26():
    list = ldf list in base;
    r2 = dyn list();
    check L28() else D0();
  L27():
    r = dyn base();
    goto L0(r);
  D0():
    deopt 3 [r2];
  L1(r4):
    st allNames = r4;
    unique = ldf unique;
    check L34() else D4();
  L28():
    goto L0(r2);
  L29():
    thisClass1 = ld thisClass;
    check L31() else D1();
  L30():
    r3 = dyn base1(<sym thisClass>, <sym superclasses>);
    goto L1(r3);
  D1():
    deopt 7 [thisClass1];
  D4():
    deopt 15 [];
  L31():
    thisClass2 = force? thisClass1;
    checkMissing(thisClass2);
    superclasses1 = ld superclasses;
    check L32() else D2();
  L34():
    p = prom<V +>{
      superclasses3 = ld superclasses;
      superclasses4 = force? superclasses3;
      checkMissing(superclasses4);
      c1 = `is.object`(superclasses4);
      if c1 then L1() else L2(superclasses4);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", superclasses4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(superclasses6):
      affected1 = ld affected;
      affected2 = force? affected1;
      __ = ldf `[` in base;
      r6 = dyn __(superclasses6, affected2);
      goto L0(r6);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r8 = dyn unique(p);
    check L35() else D5();
  D2():
    deopt 9 [superclasses1];
  D5():
    deopt 17 [r8];
  L32():
    superclasses2 = force? superclasses1;
    checkMissing(superclasses2);
    c = ldf c in base;
    r5 = dyn c(thisClass2, superclasses2);
    check L33() else D3();
  L35():
    st dups = r8;
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L36() else L37();
  D3():
    deopt 12 [r5];
  L2(r10):
    st whichCase = r10;
    dups = ld dups;
    check L40() else D8();
  L33():
    goto L1(r5);
  L36():
    subNames1 = ld subNames;
    check L38() else D6();
  L37():
    r9 = dyn base2(<sym subNames>);
    goto L2(r9);
  D6():
    deopt 21 [subNames1];
  D8():
    deopt 26 [dups];
  L38():
    subNames2 = force? subNames1;
    checkMissing(subNames2);
    names = ldf names in base;
    r11 = dyn names(subNames2);
    check L39() else D7();
  L40():
    dups1 = force? dups;
    checkMissing(dups1);
    s = toForSeq(dups1);
    l = length(s);
    i = 0;
    goto L3(i);
  D7():
    deopt 24 [r11];
  L3(i1):
    i2 = `+`.1(i1, 1);
    c2 = `<`.1(l, i2);
    if c2 then L41() else L10();
  L39():
    goto L2(r11);
  L10():
    x = `[[`(s, i2, NULL, TRUE);
    st what = x;
    sym3 = ldf seq_along;
    base3 = ldf seq_along in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L42() else L43();
  L41():
    r43 = clos inner799576941;
    st problems = r43;
    lapply1 = ldf lapply;
    check L64() else D20();
  D20():
    deopt 79 [];
  L4(i7, r13):
    c3 = `is.object`(r13);
    if c3 then L45() else L46(i7, r13);
  L42():
    allNames = ld allNames;
    check L44() else D9();
  L43():
    r12 = dyn base3(<sym allNames>);
    goto L4(i2, r12);
  L64():
    p7 = prom<V +>{
      candidates4 = ld candidates;
      candidates5 = force? candidates4;
      checkMissing(candidates5);
      return candidates5;
    };
    p8 = prom<V +>{
      r45 = clos inner3743016188;
      return r45;
    };
    p9 = prom<V +>{
      allNames4 = ld allNames;
      allNames5 = force? allNames4;
      checkMissing(allNames5);
      return allNames5;
    };
    r48 = dyn lapply1[, , names](p7, p8, p9);
    check L65() else D21();
  D9():
    deopt 29 [i2, allNames];
  D21():
    deopt 84 [r48];
  L5(i11, dx3):
    st where = dx3;
    lapply = ldf lapply;
    check L53() else D13();
  L44():
    allNames1 = force? allNames;
    checkMissing(allNames1);
    r14 = seq_along(allNames1);
    goto L4(i2, r14);
  L45():
    dr2 = tryDispatchBuiltin.1("[", r13);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L47() else L46(i7, dr2);
  L46(i9, r16):
    sym4 = ldf match;
    base4 = ldf match in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L48() else L49();
  L65():
    st possibles = r48;
    sym7 = ldf vector;
    base7 = ldf vector in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L66() else L67();
  D13():
    deopt 47 [i11];
  L6(i14, r20, r21):
    r23 = `>`(r21, 0.0);
    __1 = ldf `[` in base;
    r24 = dyn __1(r20, r23);
    goto L5(i14, r24);
  L11(r50):
    st scores = r50;
    sym9 = ldf seq_along;
    base9 = ldf seq_along in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L73() else L74();
  L47():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L5(i7, dx2);
  L48():
    allNames2 = ld allNames;
    check L50() else D10();
  L49():
    r19 = dyn base4(<sym allNames>, <sym what>, 0.0);
    goto L6(i9, r16, r19);
  L53():
    p1 = prom<V +>{
      sym5 = ldf seq_along;
      base5 = ldf seq_along in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r26):
      r28 = `-`(<missing>, r26);
      return r28;
    L1():
      where = ld where;
      where1 = force? where;
      checkMissing(where1);
      r27 = seq_along(where1);
      goto L0(r27);
    L2():
      r25 = dyn base5(<sym where>);
      goto L0(r25);
    };
    p2 = prom<V +>{
      r30 = clos inner799576941;
      return r30;
    };
    p3 = prom<V +>{
      where2 = ld where;
      where3 = force? where2;
      checkMissing(where3);
      return where3;
    };
    r33 = dyn lapply[, , y](p1, p2, p3);
    check L54() else D14();
  L66():
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L68() else L69();
  L67():
    r49 = dyn base7("list", <lang length(possibles)>);
    goto L11(r49);
  D10():
    deopt 34 [i9, r16, allNames2];
  D14():
    deopt 52 [i11, r33];
  L12(r52):
    vector = ldf vector in base;
    r54 = dyn vector("list", r52);
    check L72() else D24();
  L13(r56):
    s1 = toForSeq(r56);
    l1 = length(s1);
    i21 = 0;
    goto L14(i21);
  L50():
    allNames3 = force? allNames2;
    checkMissing(allNames3);
    what = ld what;
    check L51() else D11();
  L54():
    st whatRemove = r33;
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L55() else L56();
  L68():
    possibles = ld possibles;
    check L70() else D22();
  L69():
    r51 = dyn base8(<sym possibles>);
    goto L12(r51);
  L73():
    possibles2 = ld possibles;
    check L75() else D25();
  L74():
    r55 = dyn base9(<sym possibles>);
    goto L13(r55);
  D11():
    deopt 36 [i9, r16, what];
  D22():
    deopt 91 [possibles];
  D24():
    deopt 96 [r54];
  D25():
    deopt 99 [possibles2];
  L7(i17, r35):
    r37 = `==`(r35, 0.0);
    c4 = `as.logical`(r37);
    if c4 then L59() else L8();
  L14(i22):
    i23 = `+`.1(i22, 1);
    c5 = `<`.1(l1, i23);
    if c5 then L76() else L21();
  L51():
    what1 = force? what;
    checkMissing(what1);
    match = ldf match in base;
    r22 = dyn match(allNames3, what1, 0.0, NULL);
    check L52() else D12();
  L55():
    candidates = ld candidates;
    check L57() else D15();
  L56():
    r34 = dyn base6(<sym candidates>);
    goto L7(i11, r34);
  L70():
    possibles1 = force? possibles;
    checkMissing(possibles1);
    length1 = ldf length in base;
    r53 = dyn length1(possibles1);
    check L71() else D23();
  L72():
    goto L11(r54);
  L75():
    possibles3 = force? possibles2;
    checkMissing(possibles3);
    r57 = seq_along(possibles3);
    goto L13(r57);
  D12():
    deopt 41 [i9, r16, r22];
  D15():
    deopt 56 [i11, candidates];
  D23():
    deopt 94 [r53];
  L8():
    outer = ldf outer;
    check L62() else D18();
  L9(i20):
    goto L3(i20);
  L21():
    x1 = `[[`(s1, i23, NULL, TRUE);
    st i = x1;
    vapply = ldf vapply;
    check L77() else D26();
  L52():
    goto L6(i9, r16, r22);
  L57():
    candidates1 = force? candidates;
    checkMissing(candidates1);
    length = ldf length in base;
    r36 = dyn length(candidates1);
    check L58() else D16();
  L59():
    whatRemove = ld whatRemove;
    check L60() else D17();
  L71():
    goto L12(r53);
  L76():
    sym11 = ldf `which.min`;
    base11 = ldf `which.min` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L100() else L101();
  D16():
    deopt 59 [i11, r36];
  D17():
    deopt 62 [i17, whatRemove];
  D18():
    deopt 66 [i17];
  D26():
    deopt 103 [i23];
  L22(r75):
    st i = r75;
    sym12 = ldf list;
    base12 = ldf list in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L105() else L106();
  L58():
    goto L7(i11, r36);
  L60():
    whatRemove1 = force? whatRemove;
    checkMissing(whatRemove1);
    st candidates = whatRemove1;
    goto L9(i17);
  L62():
    p4 = prom<V +>{
      candidates2 = ld candidates;
      candidates3 = force? candidates2;
      checkMissing(candidates3);
      return candidates3;
    };
    p5 = prom<V +>{
      whatRemove3 = ld whatRemove;
      whatRemove4 = force? whatRemove3;
      checkMissing(whatRemove4);
      return whatRemove4;
    };
    p6 = prom<V +>{
      r40 = clos inner799576941;
      return r40;
    };
    r42 = dyn outer(p4, p5, p6);
    check L63() else D19();
  L77():
    p10 = prom<V +>{
      subNames3 = ld subNames;
      subNames4 = force? subNames3;
      checkMissing(subNames4);
      return subNames4;
    };
    p11 = prom<V +>{
      problems = ld problems;
      problems1 = force? problems;
      checkMissing(problems1);
      return problems1;
    };
    p12 = prom<V +>{
      possibles4 = ld possibles;
      possibles5 = force? possibles4;
      checkMissing(possibles5);
      c6 = `is.object`(possibles5);
      if c6 then L1() else L2(possibles5);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", possibles5);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(possibles7):
      i26 = ld i;
      i27 = force? i26;
      __2 = ldf `[[` in base;
      r60 = dyn __2(possibles7, i27);
      goto L0(r60);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r62 = dyn vapply[, , , x](p10, p11, NA_LGL, p12);
    check L78() else D27();
  L100():
    lengths = ldf lengths;
    check L102() else D35();
  L101():
    r74 = dyn base11(<lang lengths(scores)>);
    goto L22(r74);
  D19():
    deopt 70 [i17, r42];
  D27():
    deopt 109 [i23, r62];
  D35():
    deopt 145 [];
  L23(r80):
    popenv;
    return r80;
  L63():
    st candidates = r42;
    goto L9(i17);
  L78():
    st score = r62;
    whichCase = ld whichCase;
    check L79() else D28();
  L102():
    p13 = prom<V +>{
      scores = ld scores;
      scores1 = force? scores;
      checkMissing(scores1);
      return scores1;
    };
    r77 = dyn lengths(p13);
    check L103() else D36();
  L105():
    candidates10 = ld candidates;
    check L107() else D38();
  L106():
    r79 = dyn base12(<lang `+`(`-`(`[[`(candidates, i)), 1.0)>, <lang `[[`(scores, i)>);
    goto L23(r79);
  D28():
    deopt 111 [i23, whichCase];
  D36():
    deopt 147 [r77];
  D38():
    deopt 153 [candidates10];
  L79():
    whichCase1 = force? whichCase;
    checkMissing(whichCase1);
    c7 = `is.object`(whichCase1);
    if c7 then L80() else L81(i23, whichCase1);
  L103():
    which_min = ldf `which.min` in base;
    r78 = dyn which_min(r77);
    check L104() else D37();
  L107():
    candidates11 = force? candidates10;
    checkMissing(candidates11);
    c11 = `is.object`(candidates11);
    if c11 then L108() else L109(candidates11);
  D37():
    deopt 149 [r78];
  L15(i31, dx7):
    l2 = ld scores;
    c8 = `is.object`(l2);
    if c8 then L84() else L85(i31, dx7, l2);
  L24(dx17):
    r82 = `-`(<missing>, dx17);
    r83 = `+`(r82, 1.0);
    scores2 = ld scores;
    check L112() else D40();
  L80():
    dr6 = tryDispatchBuiltin.1("[", whichCase1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L82() else L81(i23, dr6);
  L81(i29, whichCase3):
    score = ld score;
    check L83() else D29();
  L104():
    goto L22(r78);
  L108():
    dr12 = tryDispatchBuiltin.1("[[", candidates11);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L110() else L109(dr12);
  L109(candidates13):
    i51 = ld i;
    check L111() else D39();
  D29():
    deopt 113 [i29, whichCase3, score];
  D39():
    deopt 155 [candidates13, i51];
  D40():
    deopt 161 [scores2];
  L16(i35, dx13):
    st scores = dx13;
    sym10 = ldf any;
    base10 = ldf any in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L88() else L89();
  L82():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L15(i23, dx6);
  L83():
    score1 = force? score;
    __3 = ldf `[` in base;
    r63 = dyn __3(whichCase3, score1);
    goto L15(i29, r63);
  L84():
    dr8 = tryDispatchBuiltin.0("[[<-", l2, dx7);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L86() else L85(i31, dx7, dr8);
  L85(i33, dx9, l4):
    i36 = ld i;
    check L87() else D30();
  L110():
    dx16 = getTryDispatchBuiltinValue(dr12);
    goto L24(dx16);
  L111():
    i52 = force? i51;
    __5 = ldf `[[` in base;
    r81 = dyn __5(candidates13, i52);
    goto L24(r81);
  L112():
    scores3 = force? scores2;
    checkMissing(scores3);
    c12 = `is.object`(scores3);
    if c12 then L113() else L114(scores3);
  D30():
    deopt 117 [i33, dx9, l4, dx7, i36];
  L17(i40, r66):
    r68 = `!`(r66);
    c9 = `as.logical`(r68);
    if c9 then L92() else L18();
  L25(dx19):
    list1 = ldf list in base;
    r85 = dyn list1(r83, dx19);
    check L117() else D42();
  L86():
    dx11 = getTryDispatchBuiltinValue(dr8);
    goto L16(i31, dx11);
  L87():
    i37 = force? i36;
    ____ = ldf `[[<-` in base;
    r64 = dyn ____(l4, dx7, i37);
    goto L16(i33, r64);
  L88():
    score2 = ld score;
    check L90() else D31();
  L89():
    r65 = dyn base10(<sym score>);
    goto L17(i35, r65);
  L113():
    dr14 = tryDispatchBuiltin.1("[[", scores3);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L115() else L114(dr14);
  L114(scores5):
    i53 = ld i;
    check L116() else D41();
  D31():
    deopt 123 [i35, score2];
  D41():
    deopt 163 [scores5, i53];
  D42():
    deopt 167 [r85];
  L18():
    goto L14(i40);
  L90():
    score3 = force? score2;
    checkMissing(score3);
    any = ldf any in base;
    r67 = dyn any(score3);
    check L91() else D32();
  L92():
    candidates6 = ld candidates;
    check L93() else D33();
  L115():
    dx18 = getTryDispatchBuiltinValue(dr14);
    goto L25(dx18);
  L116():
    i54 = force? i53;
    __6 = ldf `[[` in base;
    r84 = dyn __6(scores5, i54);
    goto L25(r84);
  L117():
    goto L23(r85);
  D32():
    deopt 126 [i35, r67];
  D33():
    deopt 128 [i40, candidates6];
  L91():
    goto L17(i35, r67);
  L93():
    candidates7 = force? candidates6;
    checkMissing(candidates7);
    c10 = `is.object`(candidates7);
    if c10 then L94() else L95(i40, candidates7);
  L19(dx15):
    r70 = `-`(<missing>, dx15);
    r71 = `+`(r70, 1.0);
    popenv;
    return r71;
  L94():
    dr10 = tryDispatchBuiltin.1("[[", candidates7);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L96() else L95(i40, dr10);
  L95(i44, candidates9):
    i47 = ld i;
    check L97() else D34();
  D34():
    deopt 130 [i44, candidates9, i47];
  L96():
    dx14 = getTryDispatchBuiltinValue(dr10);
    goto L19(dx14);
  L97():
    i48 = force? i47;
    __4 = ldf `[[` in base;
    r69 = dyn __4(candidates9, i48);
    goto L19(r69);
  }
}
fun inner799576941(x, y) {
  (reg x:*, reg y:*) -+> V { var x:*, var y:*, reg y1:*, reg y2:V, reg c:L, reg y4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg x1:*, reg x2:V, reg __:cls, reg r:V |
    mkenv;
    st x = x;
    st y = y;
    y1 = ld y;
    check L1() else D0();
  D0():
    deopt 0 [y1];
  L1():
    y2 = force? y1;
    checkMissing(y2);
    c = `is.object`(y2);
    if c then L2() else L3(y2);
  L0(dx1):
    popenv;
    return dx1;
  L2():
    dr = tryDispatchBuiltin.1("[", y2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3(dr);
  L3(y4):
    x1 = ld x;
    check L5() else D1();
  D1():
    deopt 2 [y4, x1];
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L5():
    x2 = force? x1;
    __ = ldf `[` in base;
    r = dyn __(y4, x2);
    goto L0(r);
  }
}
fun inner3743016188(x, names) {
  (reg x:*, reg names:*) -+> V { var x:*, var names:*, reg names1:*, reg names2:V, reg c:L, reg names4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg x1:*, reg x2:V, reg r:V, reg __:cls, reg r1:V |
    mkenv;
    st x = x;
    st names = names;
    names1 = ld names;
    check L1() else D0();
  D0():
    deopt 0 [names1];
  L1():
    names2 = force? names1;
    checkMissing(names2);
    c = `is.object`(names2);
    if c then L2() else L3(names2);
  L0(dx1):
    popenv;
    return dx1;
  L2():
    dr = tryDispatchBuiltin.1("[", names2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3(dr);
  L3(names4):
    x1 = ld x;
    check L5() else D1();
  D1():
    deopt 2 [names4, x1];
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L5():
    x2 = force? x1;
    checkMissing(x2);
    r = `-`(<missing>, x2);
    __ = ldf `[` in base;
    r1 = dyn __(names4, r);
    goto L0(r1);
  }
}