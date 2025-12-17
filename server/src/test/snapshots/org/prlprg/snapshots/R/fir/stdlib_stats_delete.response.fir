fun main() {
  () -+> V { reg r:cls, reg __:cls, reg r1:V, reg terms:cls, reg ff:*, reg ff1:V, reg p:p(V +), reg r3:V, reg tt:*, reg tt1:V, reg delete_response:cls, reg tt2:*, reg tt3:V, reg p1:p(V +), reg r5:V, reg drop_terms:cls, reg tt4:*, reg tt5:V, reg p2:p(V +), reg p3:p(V +), reg r8:V, reg tt6:*, reg tt7:V, reg c:L, reg tt9:V, reg dr:V, reg dc:L, reg dx:V, reg __1:cls, reg r9:V, reg tt10:*, reg tt11:V, reg c1:L, reg tt13:V, reg dr2:V, reg dc1:L, reg dx2:V, reg __2:cls, reg r10:V, reg reformulate:cls, reg sym:cls, reg base:cls, reg guard:L, reg r11:V, reg r12:V, reg tt14:*, reg tt15:V, reg attr:cls, reg r13:V, reg p4:p(V +), reg r15:V, reg reformulate1:cls, reg ff2:*, reg ff3:V, reg c2:L, reg ff5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __3:cls, reg r16:V, reg p5:p(V +), reg r18:V, reg __4:cls, reg r19:V, reg reformulate2:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r20:V, reg r21:V, reg c3:cls, reg r22:V, reg p6:p(V +), reg fS:*, reg fS1:V, reg c4:L, reg fS3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __5:cls, reg r24:V, reg p7:p(V +), reg r26:V, reg reformulate3:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r27:V, reg r28:V, reg c5:cls, reg r29:V, reg p8:p(V +), reg as_name:cls, reg r31:V, reg p9:p(V +), reg r33:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r34:V, reg r35:V, reg c6:cls, reg r36:V, reg tryCatch:cls, reg reformulate4:cls, reg x:*, reg x1:V, reg p10:p(V +), reg r38:V, reg p11:p(V +), reg r40:cls, reg p12:p(V +), reg r42:V, reg reformulate5:cls, reg sprintf:cls, reg x2:*, reg x3:V, reg p13:p(V +), reg r44:V, reg p14:p(V +), reg r46:V, reg stopifnot:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r47:V, reg r48:V, reg __6:cls, reg r49:V, reg reformulate6:cls, reg r50:V, reg identical:cls, reg r51:V, reg p15:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r53:V, reg r54:V, reg __7:cls, reg r55:V, reg reformulate7:cls, reg letters:*, reg letters1:V, reg c7:L, reg letters3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __8:cls, reg r56:V, reg p16:p(V +), reg r58:V, reg identical1:cls, reg r59:V, reg p17:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r61:V, reg r62:V, reg __9:cls, reg r63:V, reg reformulate8:cls, reg letters4:*, reg letters5:V, reg c8:L, reg letters7:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __10:cls, reg r64:V, reg p18:p(V +), reg r66:V, reg identical2:cls, reg r67:V, reg p19:p(V +), reg r69:V |
    mkenv;
    r = clos inner409416647;
    st `delete.response` = r;
    __ = ldf `~` in base;
    r1 = dyn __(<sym y>, <lang `+`(`+`(z, x), w)>);
    st ff = r1;
    terms = ldf terms;
    check L3() else D0();
  D0():
    deopt 7 [];
  L3():
    p = prom<V +>{
      ff = ld ff;
      ff1 = force? ff;
      checkMissing(ff1);
      return ff1;
    };
    r3 = dyn terms(p);
    check L4() else D1();
  D1():
    deopt 9 [r3];
  L4():
    st tt = r3;
    tt = ld tt;
    check L5() else D2();
  D2():
    deopt 11 [tt];
  L5():
    tt1 = force? tt;
    checkMissing(tt1);
    delete_response = ldf `delete.response`;
    check L6() else D3();
  D3():
    deopt 14 [];
  L6():
    p1 = prom<V +>{
      tt2 = ld tt;
      tt3 = force? tt2;
      checkMissing(tt3);
      return tt3;
    };
    r5 = dyn delete_response(p1);
    check L7() else D4();
  D4():
    deopt 16 [r5];
  L7():
    drop_terms = ldf `drop.terms`;
    check L8() else D5();
  D5():
    deopt 18 [];
  L8():
    p2 = prom<V +>{
      tt4 = ld tt;
      tt5 = force? tt4;
      checkMissing(tt5);
      return tt5;
    };
    p3 = prom<V +>{
      return <int 2, 3>;
    };
    r8 = dyn drop_terms[, , `keep.response`](p2, p3, TRUE);
    check L9() else D6();
  D6():
    deopt 23 [r8];
  L9():
    tt6 = ld tt;
    check L10() else D7();
  D7():
    deopt 24 [tt6];
  L10():
    tt7 = force? tt6;
    checkMissing(tt7);
    c = `is.object`(tt7);
    if c then L11() else L12(tt7);
  L0():
    tt10 = ld tt;
    check L14() else D8();
  L11():
    dr = tryDispatchBuiltin.1("[", tt7);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L13() else L12(dr);
  L12(tt9):
    __1 = ldf `[` in base;
    r9 = dyn __1(tt9, -1.0);
    goto L0();
  D8():
    deopt 29 [tt10];
  L13():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0();
  L14():
    tt11 = force? tt10;
    checkMissing(tt11);
    c1 = `is.object`(tt11);
    if c1 then L15() else L16(tt11);
  L1():
    reformulate = ldf reformulate;
    check L18() else D9();
  L15():
    dr2 = tryDispatchBuiltin.1("[", tt11);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L17() else L16(dr2);
  L16(tt13):
    __2 = ldf `[` in base;
    r10 = dyn __2(tt13, <int 2, 3>);
    goto L1();
  D9():
    deopt 35 [];
  L17():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L1();
  L18():
    p4 = prom<V +>{
      sym = ldf attr;
      base = ldf attr in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r12):
      return r12;
    L1():
      tt14 = ld tt;
      tt15 = force? tt14;
      checkMissing(tt15);
      attr = ldf attr in base;
      r13 = dyn attr(tt15, "term.labels");
      goto L0(r13);
    L2():
      r11 = dyn base(<sym tt>, "term.labels");
      goto L0(r11);
    };
    r15 = dyn reformulate(p4);
    check L19() else D10();
  D10():
    deopt 37 [r15];
  L19():
    reformulate1 = ldf reformulate;
    check L20() else D11();
  D11():
    deopt 39 [];
  L20():
    p5 = prom<V +>{
      ff2 = ld ff;
      ff3 = force? ff2;
      checkMissing(ff3);
      c2 = `is.object`(ff3);
      if c2 then L1() else L2(ff3);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", ff3);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(ff5):
      __3 = ldf `[[` in base;
      r16 = dyn __3(ff5, 2.0);
      goto L0(r16);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r18 = dyn reformulate1("x*w", p5);
    check L21() else D12();
  D12():
    deopt 42 [r18];
  L21():
    __4 = ldf `~` in base;
    r19 = dyn __4(<lang surv(ft, case)>, <lang `+`(a, b)>);
    st fS = r19;
    reformulate2 = ldf reformulate;
    check L22() else D13();
  D13():
    deopt 47 [];
  L22():
    p6 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r21):
      return r21;
    L1():
      c3 = ldf c in base;
      r22 = dyn c3("a", "b*f");
      goto L0(r22);
    L2():
      r20 = dyn base1("a", "b*f");
      goto L0(r20);
    };
    p7 = prom<V +>{
      fS = ld fS;
      fS1 = force? fS;
      checkMissing(fS1);
      c4 = `is.object`(fS1);
      if c4 then L1() else L2(fS1);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[[", fS1);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(fS3):
      __5 = ldf `[[` in base;
      r24 = dyn __5(fS3, 2.0);
      goto L0(r24);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r26 = dyn reformulate2(p6, p7);
    check L23() else D14();
  D14():
    deopt 50 [r26];
  L23():
    reformulate3 = ldf reformulate;
    check L24() else D15();
  D15():
    deopt 52 [];
  L24():
    p8 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r28):
      return r28;
    L1():
      c5 = ldf c in base;
      r29 = dyn c5("`P/E`", "`% Growth`");
      goto L0(r29);
    L2():
      r27 = dyn base2("`P/E`", "`% Growth`");
      goto L0(r27);
    };
    p9 = prom<V +>{
      as_name = ldf `as.name`;
      r31 = dyn as_name("+-");
      return r31;
    };
    r33 = dyn reformulate3[, response](p8, p9);
    check L25() else D16();
  D16():
    deopt 56 [r33];
  L25():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L26() else L27();
  L2(r35):
    st x = r35;
    tryCatch = ldf tryCatch;
    check L29() else D18();
  L26():
    c6 = ldf c in base;
    r36 = dyn c6("a name", "another name");
    check L28() else D17();
  L27():
    r34 = dyn base3("a name", "another name");
    goto L2(r34);
  D17():
    deopt 62 [r36];
  D18():
    deopt 65 [];
  L28():
    goto L2(r36);
  L29():
    p11 = prom<V +>{
      reformulate4 = ldf reformulate;
      p10 = prom<V +>{
        x = ld x;
        x1 = force? x;
        checkMissing(x1);
        return x1;
      };
      r38 = dyn reformulate4(p10);
      return r38;
    };
    p12 = prom<V +>{
      r40 = clos inner3708401697;
      return r40;
    };
    r42 = dyn tryCatch[, error](p11, p12);
    check L30() else D19();
  D19():
    deopt 69 [r42];
  L30():
    reformulate5 = ldf reformulate;
    check L31() else D20();
  D20():
    deopt 71 [];
  L31():
    p14 = prom<V +>{
      sprintf = ldf sprintf;
      p13 = prom<V +>{
        x2 = ld x;
        x3 = force? x2;
        checkMissing(x3);
        return x3;
      };
      r44 = dyn sprintf("`%s`", p13);
      return r44;
    };
    r46 = dyn reformulate5(p14);
    check L32() else D21();
  D21():
    deopt 73 [r46];
  L32():
    stopifnot = ldf stopifnot;
    check L33() else D22();
  D22():
    deopt 75 [];
  L33():
    p15 = prom<V +>{
      sym4 = ldf identical;
      base4 = ldf identical in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r48):
      return r48;
    L1():
      __6 = ldf `~` in base;
      r49 = dyn __6(<sym var>);
      reformulate6 = ldf reformulate;
      r50 = dyn reformulate6("var");
      identical = ldf identical in base;
      r51 = dyn identical(r49, r50, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r51);
    L2():
      r47 = dyn base4(<lang `~`(var)>, <lang reformulate("var")>);
      goto L0(r47);
    };
    p17 = prom<V +>{
      sym5 = ldf identical;
      base5 = ldf identical in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r54):
      return r54;
    L1():
      __7 = ldf `~` in base;
      r55 = dyn __7(<lang `+`(`+`(a, b), c)>);
      reformulate7 = ldf reformulate;
      p16 = prom<V +>{
        letters = ld letters;
        letters1 = force? letters;
        checkMissing(letters1);
        c7 = `is.object`(letters1);
        if c7 then L1() else L2(letters1);
      L0(dx9):
        return dx9;
      L1():
        dr8 = tryDispatchBuiltin.1("[", letters1);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L3() else L2(dr8);
      L2(letters3):
        __8 = ldf `[` in base;
        r56 = dyn __8(letters3, <int 1, 2, 3>);
        goto L0(r56);
      L3():
        dx8 = getTryDispatchBuiltinValue(dr8);
        goto L0(dx8);
      };
      r58 = dyn reformulate7(p16);
      identical1 = ldf identical in base;
      r59 = dyn identical1(r55, r58, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r59);
    L2():
      r53 = dyn base5(<lang `~`(`+`(`+`(a, b), c))>, <lang reformulate(`[`(letters, `:`(1.0, 3.0)))>);
      goto L0(r53);
    };
    p19 = prom<V +>{
      sym6 = ldf identical;
      base6 = ldf identical in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r62):
      return r62;
    L1():
      __9 = ldf `~` in base;
      r63 = dyn __9(<sym y>, <lang `+`(a, b)>);
      reformulate8 = ldf reformulate;
      p18 = prom<V +>{
        letters4 = ld letters;
        letters5 = force? letters4;
        checkMissing(letters5);
        c8 = `is.object`(letters5);
        if c8 then L1() else L2(letters5);
      L0(dx11):
        return dx11;
      L1():
        dr10 = tryDispatchBuiltin.1("[", letters5);
        dc5 = getTryDispatchBuiltinDispatched(dr10);
        if dc5 then L3() else L2(dr10);
      L2(letters7):
        __10 = ldf `[` in base;
        r64 = dyn __10(letters7, <int 1, 2>);
        goto L0(r64);
      L3():
        dx10 = getTryDispatchBuiltinValue(dr10);
        goto L0(dx10);
      };
      r66 = dyn reformulate8(p18, "y");
      identical2 = ldf identical in base;
      r67 = dyn identical2(r63, r66, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r67);
    L2():
      r61 = dyn base6(<lang `~`(y, `+`(a, b))>, <lang reformulate(`[`(letters, `:`(1.0, 2.0)), "y")>);
      goto L0(r61);
    };
    r69 = dyn stopifnot(p15, p17, p19);
    check L34() else D23();
  D23():
    deopt 79 [r69];
  L34():
    popenv;
    return r69;
  }
}
fun inner409416647(termobj) {
  (reg termobj:*) -+> V { var termobj:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg termobj1:*, reg termobj2:V, reg attributes:cls, reg r2:V, reg a:*, reg a1:V, reg c:L, reg a3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg y:*, reg y1:V, reg c1:V, reg r6:V, reg c2:L, reg c4:V, reg y2:*, reg y3:V, reg c5:L, reg c6:V, reg c8:L, reg l:*, reg c9:L, reg r8:dots, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ____:cls, reg r11:V, reg l3:*, reg c10:L, reg r13:R, reg l5:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r16:V, reg a4:*, reg a5:V, reg c11:L, reg a7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r17:V, reg c12:L, reg dx9:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg y4:*, reg y5:V, reg r18:V, reg r19:V, reg __:cls, reg r20:V, reg l6:*, reg c13:L, reg dx13:V, reg l8:*, reg dr10:V, reg dc5:L, reg dx15:V, reg dx17:V, reg r21:V, reg a8:*, reg a9:V, reg c14:L, reg a11:V, reg dr12:V, reg dc6:L, reg dx18:V, reg dx19:V, reg r22:V, reg c15:L, reg dx21:V, reg dr14:V, reg dc7:L, reg dx22:V, reg dx23:V, reg y6:*, reg y7:V, reg r23:V, reg r24:V, reg __1:cls, reg r25:V, reg l9:*, reg c16:L, reg dx25:V, reg l11:*, reg dr16:V, reg dc8:L, reg dx27:V, reg dx29:V, reg r26:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r27:V, reg r28:V, reg a12:*, reg a13:V, reg c17:L, reg a15:V, reg dr18:V, reg dc9:L, reg dx30:V, reg dx31:V, reg r29:V, reg length:cls, reg r30:V, reg c18:L, reg a16:*, reg a17:V, reg c19:L, reg a19:V, reg dr20:V, reg dc10:L, reg dx32:V, reg dx33:V, reg r31:V, reg c20:L, reg dx35:V, reg dr22:V, reg dc11:L, reg dx36:V, reg dx37:V, reg y8:*, reg y9:V, reg r32:V, reg __2:cls, reg r33:V, reg l12:*, reg c21:L, reg dx39:V, reg l14:*, reg dr24:V, reg dc12:L, reg dx41:V, reg dx42:V, reg dx43:V, reg r34:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r35:V, reg r36:V, reg a20:*, reg a21:V, reg c22:L, reg a23:V, reg dr26:V, reg dc13:L, reg dx45:V, reg dx46:V, reg r37:V, reg length1:cls, reg r38:V, reg c23:L, reg ifelse:cls, reg a24:*, reg a25:V, reg c24:L, reg a27:V, reg dr28:V, reg dc14:L, reg dx47:V, reg dx48:V, reg r39:V, reg y10:*, reg y11:V, reg r40:V, reg p:p(V +), reg a28:*, reg a29:V, reg c25:L, reg a31:V, reg dr30:V, reg dc15:L, reg dx49:V, reg dx50:V, reg r42:V, reg r43:V, reg p1:p(V +), reg a32:*, reg a33:V, reg c26:L, reg a35:V, reg dr32:V, reg dc16:L, reg dx51:V, reg dx52:V, reg r45:V, reg p2:p(V +), reg r47:V, reg l15:*, reg c27:L, reg r49:V, reg l17:*, reg dr34:V, reg dc17:L, reg dx53:V, reg r51:V, reg dx54:V, reg r52:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r54:V, reg r55:V, reg a36:*, reg a37:V, reg c28:L, reg a39:V, reg dr36:V, reg dc18:L, reg dx55:V, reg dx56:V, reg r56:V, reg length2:cls, reg r57:V, reg c29:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r58:V, reg r59:V, reg a40:*, reg a41:V, reg c30:L, reg a43:V, reg dr38:V, reg dc19:L, reg dx57:V, reg dx58:V, reg r60:V, reg r61:I, reg s:V, reg l18:I, reg i:I, reg i1:I, reg i2:I, reg c31:L, reg x:V, reg a44:*, reg a45:V, reg c32:L, reg i6:I, reg a47:V, reg dr40:V, reg dc20:L, reg dx59:V, reg i8:I, reg dx60:V, reg r62:V, reg c33:L, reg i10:I, reg dx62:V, reg dr42:V, reg dc21:L, reg dx63:V, reg i12:I, reg dx64:V, reg i13:*, reg i14:V, reg __3:cls, reg r63:V, reg ifelse1:cls, reg b:*, reg b1:V, reg y12:*, reg y13:V, reg r64:V, reg p3:p(V +), reg b2:*, reg b3:V, reg r66:V, reg p4:p(V +), reg b4:*, reg b5:V, reg p5:p(V +), reg r69:V, reg l19:*, reg c34:L, reg i16:I, reg r72:V, reg l22:*, reg r73:V, reg l23:*, reg dr44:V, reg dc22:L, reg dx65:V, reg i18:I, reg r76:V, reg l25:*, reg r77:V, reg dx66:V, reg r78:V, reg c35:L, reg i20:I, reg r80:V, reg l27:*, reg dx68:V, reg dr46:V, reg dc23:L, reg dx69:V, reg i22:I, reg r82:V, reg l29:*, reg dx70:V, reg i23:*, reg i24:V, reg ____1:cls, reg r83:V, reg c36:L, reg i26:I, reg r85:V, reg l31:*, reg dr48:V, reg dc24:L, reg dx71:V, reg i28:I, reg dx72:V, reg r88:V, reg a48:*, reg a49:V, reg l32:*, reg attributes__:cls, reg r89:V, reg termobj3:*, reg termobj4:V |
    mkenv;
    st termobj = termobj;
    sym = ldf attributes;
    base = ldf attributes in base;
    guard = `==`.4(sym, base);
    if guard then L23() else L24();
  L0(r1):
    st a = r1;
    a = ld a;
    check L27() else D2();
  L23():
    termobj1 = ld termobj;
    check L25() else D0();
  L24():
    r = dyn base(<sym termobj>);
    goto L0(r);
  D0():
    deopt 2 [termobj1];
  D2():
    deopt 7 [a];
  L25():
    termobj2 = force? termobj1;
    checkMissing(termobj2);
    attributes = ldf attributes in base;
    r2 = dyn attributes(termobj2);
    check L26() else D1();
  L27():
    a1 = force? a;
    checkMissing(a1);
    c = `is.object`(a1);
    if c then L29() else L30(a1);
  D1():
    deopt 5 [r2];
  L26():
    goto L0(r2);
  L28(dx1):
    st y = dx1;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L32() else L33();
  L29():
    dr = tryDispatchBuiltin.1("$", a1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L31() else L30(dr);
  L30(a3):
    r3 = `$`(a3, <sym response>);
    goto L28(r3);
  L1(r5):
    r6 = `!`(r5);
    c2 = `as.logical`(r6);
    if c2 then L35() else L2(c2);
  L31():
    dx = getTryDispatchBuiltinValue(dr);
    goto L28(dx);
  L32():
    y = ld y;
    check L34() else D3();
  L33():
    r4 = dyn base1(<sym y>);
    goto L1(r4);
  D3():
    deopt 12 [y];
  L2(c4):
    c8 = `as.logical`(c4);
    if c8 then L38() else L3();
  L34():
    y1 = force? y;
    checkMissing(y1);
    c1 = `==`(y1, NULL);
    goto L1(c1);
  L35():
    y2 = ld y;
    check L36() else D4();
  D4():
    deopt 16 [c2, y2];
  L3():
    goto L22();
  L22():
    termobj3 = ld termobj;
    check L156() else D28();
  L36():
    y3 = force? y2;
    checkMissing(y3);
    c5 = `as.logical`(y3);
    c6 = `&&`(c2, c5);
    goto L2(c6);
  L38():
    l = ld termobj;
    c9 = `is.object`(l);
    if c9 then L39() else L40(NULL, l);
  D28():
    deopt 144 [termobj3];
  L4(dx3):
    st termobj = dx3;
    l3 = ld a;
    c10 = `is.object`(l3);
    if c10 then L43() else L44(0.0, l3);
  L39():
    dr2 = tryDispatchBuiltin.0("[[<-", l, NULL);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L41() else L40(NULL, dr2);
  L40(r8, l2):
    ____ = ldf `[[<-` in base;
    r11 = dyn ____(l2, NULL, 2);
    goto L4(r11);
  L156():
    termobj4 = force? termobj3;
    checkMissing(termobj4);
    popenv;
    return termobj4;
  L41():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx2);
  L42(dx5):
    st a = dx5;
    a4 = ld a;
    check L46() else D5();
  L43():
    dr4 = tryDispatchBuiltin.0("$<-", l3, 0.0);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L45() else L44(0.0, dr4);
  L44(r13, l5):
    r16 = `$<-`(l5, <sym response>, 0.0);
    goto L42(r16);
  D5():
    deopt 31 [a4];
  L45():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L42(dx4);
  L46():
    a5 = force? a4;
    checkMissing(a5);
    c11 = `is.object`(a5);
    if c11 then L48() else L49(a5);
  L47(dx7):
    c12 = `is.object`(dx7);
    if c12 then L51() else L52(dx7);
  L48():
    dr6 = tryDispatchBuiltin.1("$", a5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L50() else L49(dr6);
  L49(a7):
    r17 = `$`(a7, <sym variables>);
    goto L47(r17);
  L5(dx11):
    l6 = ld a;
    c13 = `is.object`(l6);
    if c13 then L56() else L57(dx11, l6);
  L50():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L47(dx6);
  L51():
    dr8 = tryDispatchBuiltin.1("[", dx7);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L53() else L52(dr8);
  L52(dx9):
    y4 = ld y;
    check L54() else D6();
  D6():
    deopt 35 [dx9, 1.0, y4];
  L53():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L5(dx10);
  L54():
    y5 = force? y4;
    checkMissing(y5);
    r18 = `+`(1.0, y5);
    r19 = `-`(<missing>, r18);
    __ = ldf `[` in base;
    r20 = dyn __(dx9, r19);
    goto L5(r20);
  L55(dx17):
    st a = dx17;
    a8 = ld a;
    check L59() else D7();
  L56():
    dr10 = tryDispatchBuiltin.0("$<-", l6, dx11);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L58() else L57(dx11, dr10);
  L57(dx13, l8):
    r21 = `$<-`(l8, <sym variables>, dx11);
    goto L55(r21);
  D7():
    deopt 43 [a8];
  L58():
    dx15 = getTryDispatchBuiltinValue(dr10);
    goto L55(dx15);
  L59():
    a9 = force? a8;
    checkMissing(a9);
    c14 = `is.object`(a9);
    if c14 then L61() else L62(a9);
  L60(dx19):
    c15 = `is.object`(dx19);
    if c15 then L64() else L65(dx19);
  L61():
    dr12 = tryDispatchBuiltin.1("$", a9);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L63() else L62(dr12);
  L62(a11):
    r22 = `$`(a11, <sym predvars>);
    goto L60(r22);
  L6(dx23):
    l9 = ld a;
    c16 = `is.object`(l9);
    if c16 then L69() else L70(dx23, l9);
  L63():
    dx18 = getTryDispatchBuiltinValue(dr12);
    goto L60(dx18);
  L64():
    dr14 = tryDispatchBuiltin.1("[", dx19);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L66() else L65(dr14);
  L65(dx21):
    y6 = ld y;
    check L67() else D8();
  D8():
    deopt 47 [dx21, 1.0, y6];
  L66():
    dx22 = getTryDispatchBuiltinValue(dr14);
    goto L6(dx22);
  L67():
    y7 = force? y6;
    checkMissing(y7);
    r23 = `+`(1.0, y7);
    r24 = `-`(<missing>, r23);
    __1 = ldf `[` in base;
    r25 = dyn __1(dx21, r24);
    goto L6(r25);
  L68(dx29):
    st a = dx29;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L72() else L73();
  L69():
    dr16 = tryDispatchBuiltin.0("$<-", l9, dx23);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L71() else L70(dx23, dr16);
  L70(dx25, l11):
    r26 = `$<-`(l11, <sym predvars>, dx23);
    goto L68(r26);
  L7(r28):
    c18 = `as.logical`(r28);
    if c18 then L80() else L8();
  L71():
    dx27 = getTryDispatchBuiltinValue(dr16);
    goto L68(dx27);
  L72():
    a12 = ld a;
    check L74() else D9();
  L73():
    r27 = dyn base2(<lang `$`(a, factors)>);
    goto L7(r27);
  D9():
    deopt 57 [a12];
  L8():
    goto L10();
  L10():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L95() else L96();
  L74():
    a13 = force? a12;
    checkMissing(a13);
    c17 = `is.object`(a13);
    if c17 then L76() else L77(a13);
  L80():
    a16 = ld a;
    check L81() else D11();
  D11():
    deopt 62 [a16];
  L11(r36):
    c23 = `as.logical`(r36);
    if c23 then L103() else L12();
  L75(dx31):
    length = ldf length in base;
    r30 = dyn length(dx31);
    check L79() else D10();
  L76():
    dr18 = tryDispatchBuiltin.1("$", a13);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L78() else L77(dr18);
  L77(a15):
    r29 = `$`(a15, <sym factors>);
    goto L75(r29);
  L81():
    a17 = force? a16;
    checkMissing(a17);
    c19 = `is.object`(a17);
    if c19 then L83() else L84(a17);
  L95():
    a20 = ld a;
    check L97() else D13();
  L96():
    r35 = dyn base3(<lang `$`(a, offset)>);
    goto L11(r35);
  D10():
    deopt 61 [r30];
  D13():
    deopt 80 [a20];
  L12():
    goto L13();
  L13():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L111() else L112();
  L78():
    dx30 = getTryDispatchBuiltinValue(dr18);
    goto L75(dx30);
  L79():
    goto L7(r30);
  L82(dx33):
    c20 = `is.object`(dx33);
    if c20 then L86() else L87(dx33);
  L83():
    dr20 = tryDispatchBuiltin.1("$", a17);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L85() else L84(dr20);
  L84(a19):
    r31 = `$`(a19, <sym factors>);
    goto L82(r31);
  L97():
    a21 = force? a20;
    checkMissing(a21);
    c22 = `is.object`(a21);
    if c22 then L99() else L100(a21);
  L103():
    ifelse = ldf ifelse;
    check L104() else D15();
  D15():
    deopt 86 [];
  L9(dx37):
    l12 = ld a;
    c21 = `is.object`(l12);
    if c21 then L91() else L92(dx37, l12);
  L14(r55):
    c29 = `as.logical`(r55);
    if c29 then L119() else L15();
  L85():
    dx32 = getTryDispatchBuiltinValue(dr20);
    goto L82(dx32);
  L86():
    dr22 = tryDispatchBuiltin.1("[", dx33);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L88() else L87(dr22);
  L87(dx35):
    y8 = ld y;
    check L89() else D12();
  L98(dx46):
    length1 = ldf length in base;
    r38 = dyn length1(dx46);
    check L102() else D14();
  L99():
    dr26 = tryDispatchBuiltin.1("$", a21);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L101() else L100(dr26);
  L100(a23):
    r37 = `$`(a23, <sym offset>);
    goto L98(r37);
  L104():
    p = prom<V +>{
      a24 = ld a;
      a25 = force? a24;
      checkMissing(a25);
      c24 = `is.object`(a25);
      if c24 then L1() else L2(a25);
    L0(dx48):
      y10 = ld y;
      y11 = force? y10;
      checkMissing(y11);
      r40 = `>`(dx48, y11);
      return r40;
    L1():
      dr28 = tryDispatchBuiltin.1("$", a25);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L3() else L2(dr28);
    L2(a27):
      r39 = `$`(a27, <sym offset>);
      goto L0(r39);
    L3():
      dx47 = getTryDispatchBuiltinValue(dr28);
      goto L0(dx47);
    };
    p1 = prom<V +>{
      a28 = ld a;
      a29 = force? a28;
      checkMissing(a29);
      c25 = `is.object`(a29);
      if c25 then L1() else L2(a29);
    L0(dx50):
      r43 = `-`(dx50, 1.0);
      return r43;
    L1():
      dr30 = tryDispatchBuiltin.1("$", a29);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L3() else L2(dr30);
    L2(a31):
      r42 = `$`(a31, <sym offset>);
      goto L0(r42);
    L3():
      dx49 = getTryDispatchBuiltinValue(dr30);
      goto L0(dx49);
    };
    p2 = prom<V +>{
      a32 = ld a;
      a33 = force? a32;
      checkMissing(a33);
      c26 = `is.object`(a33);
      if c26 then L1() else L2(a33);
    L0(dx52):
      return dx52;
    L1():
      dr32 = tryDispatchBuiltin.1("$", a33);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L3() else L2(dr32);
    L2(a35):
      r45 = `$`(a35, <sym offset>);
      goto L0(r45);
    L3():
      dx51 = getTryDispatchBuiltinValue(dr32);
      goto L0(dx51);
    };
    r47 = dyn ifelse(p, p1, p2);
    check L105() else D16();
  L111():
    a36 = ld a;
    check L113() else D17();
  L112():
    r54 = dyn base4(<lang `$`(a, specials)>);
    goto L14(r54);
  D12():
    deopt 65 [dx35, y8];
  D14():
    deopt 84 [r38];
  D16():
    deopt 90 [r47];
  D17():
    deopt 98 [a36];
  L15():
    goto L21();
  L21():
    a48 = ld a;
    check L152() else D25();
  L88():
    dx36 = getTryDispatchBuiltinValue(dr22);
    goto L9(dx36);
  L89():
    y9 = force? y8;
    checkMissing(y9);
    r32 = `-`(<missing>, y9);
    __2 = ldf `[` in base;
    r33 = dyn __2(dx33, r32, <missing>, FALSE);
    goto L9(r33);
  L90(dx42, dx43):
    st a = dx43;
    goto L10();
  L91():
    dr24 = tryDispatchBuiltin.0("$<-", l12, dx37);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L93() else L92(dx37, dr24);
  L92(dx39, l14):
    r34 = `$<-`(l14, <sym factors>, dx37);
    goto L90(dx39, r34);
  L101():
    dx45 = getTryDispatchBuiltinValue(dr26);
    goto L98(dx45);
  L102():
    goto L11(r38);
  L105():
    l15 = ld a;
    c27 = `is.object`(l15);
    if c27 then L107() else L108(r47, l15);
  L113():
    a37 = force? a36;
    checkMissing(a37);
    c28 = `is.object`(a37);
    if c28 then L115() else L116(a37);
  L119():
    sym5 = ldf seq_along;
    base5 = ldf seq_along in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L120() else L121();
  D25():
    deopt 135 [a48];
  L16(r59):
    s = toForSeq(r59);
    l18 = length(s);
    i = 0;
    goto L17(i);
  L93():
    dx41 = getTryDispatchBuiltinValue(dr24);
    goto L90(dx37, dx41);
  L106(r51, dx54):
    st a = dx54;
    goto L13();
  L107():
    dr34 = tryDispatchBuiltin.0("$<-", l15, r47);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L109() else L108(r47, dr34);
  L108(r49, l17):
    r52 = `$<-`(l17, <sym offset>, r47);
    goto L106(r49, r52);
  L114(dx56):
    length2 = ldf length in base;
    r57 = dyn length2(dx56);
    check L118() else D18();
  L115():
    dr36 = tryDispatchBuiltin.1("$", a37);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L117() else L116(dr36);
  L116(a39):
    r56 = `$`(a39, <sym specials>);
    goto L114(r56);
  L120():
    a40 = ld a;
    check L122() else D19();
  L121():
    r58 = dyn base5(<lang `$`(a, specials)>);
    goto L16(r58);
  L152():
    a49 = force? a48;
    checkMissing(a49);
    l32 = ld termobj;
    attributes__ = ldf `attributes<-`;
    check L153() else D26();
  D18():
    deopt 102 [r57];
  D19():
    deopt 104 [a40];
  D26():
    deopt 138 [a49, l32, a49];
  L17(i1):
    i2 = `+`.1(i1, 1);
    c31 = `<`.1(l18, i2);
    if c31 then L127() else L20();
  L109():
    dx53 = getTryDispatchBuiltinValue(dr34);
    goto L106(r47, dx53);
  L117():
    dx55 = getTryDispatchBuiltinValue(dr36);
    goto L114(dx55);
  L118():
    goto L14(r57);
  L122():
    a41 = force? a40;
    checkMissing(a41);
    c30 = `is.object`(a41);
    if c30 then L124() else L125(a41);
  L153():
    r89 = dyn attributes__(l32, NULL, a49);
    check L154() else D27();
  D27():
    deopt 140 [a49, r89];
  L20():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    a44 = ld a;
    check L128() else D20();
  L123(dx58):
    r61 = seq_along(dx58);
    goto L16(r61);
  L124():
    dr38 = tryDispatchBuiltin.1("$", a41);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L126() else L125(dr38);
  L125(a43):
    r60 = `$`(a43, <sym specials>);
    goto L123(r60);
  L127():
    goto L21();
  L154():
    st termobj = r89;
    goto L22();
  D20():
    deopt 108 [i2, a44];
  L126():
    dx57 = getTryDispatchBuiltinValue(dr38);
    goto L123(dx57);
  L128():
    a45 = force? a44;
    checkMissing(a45);
    c32 = `is.object`(a45);
    if c32 then L130() else L131(i2, a45);
  L129(i8, dx60):
    c33 = `is.object`(dx60);
    if c33 then L133() else L134(i8, dx60);
  L130():
    dr40 = tryDispatchBuiltin.1("$", a45);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L132() else L131(i2, dr40);
  L131(i6, a47):
    r62 = `$`(a47, <sym specials>);
    goto L129(i6, r62);
  L18(i12, dx64):
    st b = dx64;
    ifelse1 = ldf ifelse;
    check L137() else D22();
  L132():
    dx59 = getTryDispatchBuiltinValue(dr40);
    goto L129(i2, dx59);
  L133():
    dr42 = tryDispatchBuiltin.1("[[", dx60);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L135() else L134(i8, dr42);
  L134(i10, dx62):
    i13 = ld i;
    check L136() else D21();
  D21():
    deopt 111 [i10, dx62, i13];
  D22():
    deopt 116 [i12];
  L135():
    dx63 = getTryDispatchBuiltinValue(dr42);
    goto L18(i8, dx63);
  L136():
    i14 = force? i13;
    __3 = ldf `[[` in base;
    r63 = dyn __3(dx62, i14);
    goto L18(i10, r63);
  L137():
    p3 = prom<V +>{
      b = ld b;
      b1 = force? b;
      checkMissing(b1);
      y12 = ld y;
      y13 = force? y12;
      checkMissing(y13);
      r64 = `>`(b1, y13);
      return r64;
    };
    p4 = prom<V +>{
      b2 = ld b;
      b3 = force? b2;
      checkMissing(b3);
      r66 = `-`(b3, 1.0);
      return r66;
    };
    p5 = prom<V +>{
      b4 = ld b;
      b5 = force? b4;
      checkMissing(b5);
      return b5;
    };
    r69 = dyn ifelse1(p3, p4, p5);
    check L138() else D23();
  D23():
    deopt 120 [i12, r69];
  L138():
    l19 = ld a;
    c34 = `is.object`(l19);
    if c34 then L140() else L141(i12, r69, l19, r69, l19);
  L139(i18, r76, l25, r77, dx66):
    c35 = `is.object`(dx66);
    if c35 then L143() else L144(i18, r76, l25, dx66);
  L140():
    dr44 = tryDispatchBuiltin.1("$", l19);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L142() else L141(i12, r69, l19, r69, dr44);
  L141(i16, r72, l22, r73, l23):
    r78 = `$`(l23, <sym specials>);
    goto L139(i16, r72, l22, r73, r78);
  L19(i22, r82, l29, dx70):
    c36 = `is.object`(l29);
    if c36 then L148() else L149(i22, r82, l29);
  L142():
    dx65 = getTryDispatchBuiltinValue(dr44);
    goto L139(i12, r69, l19, r69, dx65);
  L143():
    dr46 = tryDispatchBuiltin.0("[[<-", dx66, r77);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L145() else L144(i18, r76, l25, dr46);
  L144(i20, r80, l27, dx68):
    i23 = ld i;
    check L146() else D24();
  D24():
    deopt 125 [i20, r80, l27, dx68, r77, i23];
  L145():
    dx69 = getTryDispatchBuiltinValue(dr46);
    goto L19(i18, r76, l25, dx69);
  L146():
    i24 = force? i23;
    ____1 = ldf `[[<-` in base;
    r83 = dyn ____1(dx68, r77, i24);
    goto L19(i20, r80, l27, r83);
  L147(i28, dx72):
    st a = dx72;
    goto L17(i28);
  L148():
    dr48 = tryDispatchBuiltin.0("$<-", l29, dx70);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L150() else L149(i22, r82, dr48);
  L149(i26, r85, l31):
    r88 = `$<-`(l31, <sym specials>, dx70);
    goto L147(i26, r88);
  L150():
    dx71 = getTryDispatchBuiltinValue(dr48);
    goto L147(i22, dx71);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:* |
    mkenv;
    st e = e;
    popenv;
    return "Syntax error.";
  }
}