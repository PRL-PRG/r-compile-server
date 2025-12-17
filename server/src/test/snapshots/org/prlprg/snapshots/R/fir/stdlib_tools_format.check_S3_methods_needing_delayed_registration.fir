fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `format.check_S3_methods_needing_delayed_registration` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg character:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r5:V, reg length:cls, reg r6:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg strwrap:cls, reg paste:cls, reg bad:*, reg bad1:V, reg p:p(V +), reg r10:V, reg p1:p(V +), reg r12:V, reg c2:cls, reg r13:V, reg r14:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg x5:*, reg x6:V, reg c3:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r17:V, reg length1:cls, reg r18:V, reg c4:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg r20:V, reg sprintf:cls, reg format:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r21:V, reg r22:V, reg mat:*, reg mat1:V, reg c5:L, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __:cls, reg r23:V, reg c6:cls, reg r24:V, reg p2:p(V +), reg r26:V, reg p3:p(V +), reg format1:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r28:V, reg r29:V, reg mat4:*, reg mat5:V, reg c7:L, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __1:cls, reg r30:V, reg c8:cls, reg r31:V, reg p4:p(V +), reg r33:V, reg p5:p(V +), reg format2:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r35:V, reg r36:V, reg mat8:*, reg mat9:V, reg c9:L, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __2:cls, reg r37:V, reg c10:cls, reg r38:V, reg p6:p(V +), reg r40:V, reg p7:p(V +), reg r42:V, reg c11:cls, reg r43:V, reg r44:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r45:V, reg r46:V, reg x9:*, reg x10:V, reg c12:L, reg x12:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r47:V, reg length2:cls, reg r48:V, reg c13:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r49:V, reg r50:V, reg sprintf1:cls, reg format3:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r51:V, reg r52:V, reg reg:*, reg reg1:V, reg c14:L, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg __3:cls, reg r53:V, reg c15:cls, reg r54:V, reg p8:p(V +), reg r56:V, reg p9:p(V +), reg format4:cls, reg sym11:cls, reg base11:cls, reg guard11:L, reg r58:V, reg r59:V, reg reg4:*, reg reg5:V, reg c16:L, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg __4:cls, reg r60:V, reg c17:cls, reg r61:V, reg p10:p(V +), reg r63:V, reg p11:p(V +), reg format5:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r65:V, reg r66:V, reg reg8:*, reg reg9:V, reg c18:L, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg __5:cls, reg r67:V, reg c19:cls, reg r68:V, reg p12:p(V +), reg r70:V, reg p13:p(V +), reg format6:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r72:V, reg r73:V, reg reg12:*, reg reg13:V, reg c20:L, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg __6:cls, reg r74:V, reg c21:cls, reg r75:V, reg p14:p(V +), reg r77:V, reg p15:p(V +), reg r79:V, reg c22:cls, reg r80:V, reg r81:V, reg c23:cls, reg r82:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L0(r1):
    popenv;
    return r1;
  L13():
    character = ldf character;
    check L15() else D0();
  L14():
    r = dyn base(<lang character()>, <lang if(length(`<-`(bad, `$`(x, bad))), {
        c("Suggested packages not available for checking:", strwrap(paste(bad, collapse=" "), indent=2))
      })>, <lang if(length(`<-`(mat, `$`(x, mat))), {
        c("Apparent S3 methods needing delayed registration:", sprintf("  %s %s %s", format(c("Package", `[`(mat, , 1))), format(c("Generic", `[`(mat, , 2))), format(c("Method", `[`(mat, , 3)))))
      })>, <lang if(length(`<-`(reg, `$`(x, reg))), {
        c("S3 methods using delayed registration:", sprintf("  %s %s %s %s", format(c("Package", `[`(reg, , 1))), format(c("Generic", `[`(reg, , 2))), format(c("Class", `[`(reg, , 3))), format(c("Method", `[`(reg, , 4)))))
      })>);
    goto L0(r);
  D0():
    deopt 3 [];
  L15():
    r2 = dyn character();
    check L16() else D1();
  D1():
    deopt 4 [r2];
  L16():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L1(r4):
    c1 = `as.logical`(r4);
    if c1 then L25() else L2();
  L17():
    x1 = ld x;
    check L19() else D2();
  L18():
    r3 = dyn base1(<lang `<-`(bad, `$`(x, bad))>);
    goto L1(r3);
  D2():
    deopt 7 [x1];
  L2():
    goto L4(NULL);
  L4(r14):
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L32() else L33();
  L19():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L21() else L22(x2);
  L25():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L26() else L27();
  L3(r8):
    goto L4(r8);
  L5(r16):
    c4 = `as.logical`(r16);
    if c4 then L40() else L6();
  L20(dx1):
    st bad = dx1;
    length = ldf length in base;
    r6 = dyn length(dx1);
    check L24() else D3();
  L21():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L23() else L22(dr);
  L22(x4):
    r5 = `$`(x4, <sym bad>);
    goto L20(r5);
  L26():
    strwrap = ldf strwrap;
    check L28() else D4();
  L27():
    r7 = dyn base2("Suggested packages not available for checking:", <lang strwrap(paste(bad, collapse=" "), indent=2)>);
    goto L3(r7);
  L32():
    x5 = ld x;
    check L34() else D7();
  L33():
    r15 = dyn base3(<lang `<-`(mat, `$`(x, mat))>);
    goto L5(r15);
  D3():
    deopt 12 [r6];
  D4():
    deopt 17 [];
  D7():
    deopt 28 [x5];
  L6():
    goto L8(NULL);
  L8(r44):
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L47() else L48();
  L23():
    dx = getTryDispatchBuiltinValue(dr);
    goto L20(dx);
  L24():
    goto L1(r6);
  L28():
    p1 = prom<V +>{
      paste = ldf paste;
      p = prom<V +>{
        bad = ld bad;
        bad1 = force? bad;
        checkMissing(bad1);
        return bad1;
      };
      r10 = dyn paste[, collapse](p, " ");
      return r10;
    };
    r12 = dyn strwrap[, indent](p1, 2);
    check L29() else D5();
  L34():
    x6 = force? x5;
    checkMissing(x6);
    c3 = `is.object`(x6);
    if c3 then L36() else L37(x6);
  L40():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L41() else L42();
  D5():
    deopt 21 [r12];
  L7(r20):
    goto L8(r20);
  L9(r46):
    c13 = `as.logical`(r46);
    if c13 then L55() else L10();
  L29():
    c2 = ldf c in base;
    r13 = dyn c2("Suggested packages not available for checking:", r12);
    check L30() else D6();
  L35(dx3):
    st mat = dx3;
    length1 = ldf length in base;
    r18 = dyn length1(dx3);
    check L39() else D8();
  L36():
    dr2 = tryDispatchBuiltin.1("$", x6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L38() else L37(dr2);
  L37(x8):
    r17 = `$`(x8, <sym mat>);
    goto L35(r17);
  L41():
    sprintf = ldf sprintf;
    check L43() else D9();
  L42():
    r19 = dyn base4("Apparent S3 methods needing delayed registration:", <lang sprintf("  %s %s %s", format(c("Package", `[`(mat, , 1))), format(c("Generic", `[`(mat, , 2))), format(c("Method", `[`(mat, , 3))))>);
    goto L7(r19);
  L47():
    x9 = ld x;
    check L49() else D12();
  L48():
    r45 = dyn base8(<lang `<-`(reg, `$`(x, reg))>);
    goto L9(r45);
  D6():
    deopt 23 [r13];
  D8():
    deopt 33 [r18];
  D9():
    deopt 38 [];
  D12():
    deopt 50 [x9];
  L10():
    goto L12(NULL);
  L12(r81):
    c23 = ldf c in base;
    r82 = dyn c23(r2, r14, r44, r81);
    check L62() else D17();
  L30():
    goto L3(r13);
  L38():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L35(dx2);
  L39():
    goto L5(r18);
  L43():
    p3 = prom<V +>{
      format = ldf format;
      p2 = prom<V +>{
        sym5 = ldf c;
        base5 = ldf c in base;
        guard5 = `==`.4(sym5, base5);
        if guard5 then L2() else L3();
      L0(r22):
        return r22;
      L2():
        mat = ld mat;
        mat1 = force? mat;
        checkMissing(mat1);
        c5 = `is.object`(mat1);
        if c5 then L4() else L5();
      L3():
        r21 = dyn base5("Package", <lang `[`(mat, , 1)>);
        goto L0(r21);
      L1(dx5):
        c6 = ldf c in base;
        r24 = dyn c6("Package", dx5);
        goto L0(r24);
      L4():
        dr4 = tryDispatchBuiltin.1("[", mat1);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L6() else L5();
      L5():
        __ = ldf `[` in base;
        r23 = dyn __(mat1, <missing>, 1);
        goto L1(r23);
      L6():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L1(dx4);
      };
      r26 = dyn format(p2);
      return r26;
    };
    p5 = prom<V +>{
      format1 = ldf format;
      p4 = prom<V +>{
        sym6 = ldf c;
        base6 = ldf c in base;
        guard6 = `==`.4(sym6, base6);
        if guard6 then L2() else L3();
      L0(r29):
        return r29;
      L2():
        mat4 = ld mat;
        mat5 = force? mat4;
        checkMissing(mat5);
        c7 = `is.object`(mat5);
        if c7 then L4() else L5();
      L3():
        r28 = dyn base6("Generic", <lang `[`(mat, , 2)>);
        goto L0(r28);
      L1(dx7):
        c8 = ldf c in base;
        r31 = dyn c8("Generic", dx7);
        goto L0(r31);
      L4():
        dr6 = tryDispatchBuiltin.1("[", mat5);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L6() else L5();
      L5():
        __1 = ldf `[` in base;
        r30 = dyn __1(mat5, <missing>, 2);
        goto L1(r30);
      L6():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L1(dx6);
      };
      r33 = dyn format1(p4);
      return r33;
    };
    p7 = prom<V +>{
      format2 = ldf format;
      p6 = prom<V +>{
        sym7 = ldf c;
        base7 = ldf c in base;
        guard7 = `==`.4(sym7, base7);
        if guard7 then L2() else L3();
      L0(r36):
        return r36;
      L2():
        mat8 = ld mat;
        mat9 = force? mat8;
        checkMissing(mat9);
        c9 = `is.object`(mat9);
        if c9 then L4() else L5();
      L3():
        r35 = dyn base7("Method", <lang `[`(mat, , 3)>);
        goto L0(r35);
      L1(dx9):
        c10 = ldf c in base;
        r38 = dyn c10("Method", dx9);
        goto L0(r38);
      L4():
        dr8 = tryDispatchBuiltin.1("[", mat9);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L6() else L5();
      L5():
        __2 = ldf `[` in base;
        r37 = dyn __2(mat9, <missing>, 3);
        goto L1(r37);
      L6():
        dx8 = getTryDispatchBuiltinValue(dr8);
        goto L1(dx8);
      };
      r40 = dyn format2(p6);
      return r40;
    };
    r42 = dyn sprintf("  %s %s %s", p3, p5, p7);
    check L44() else D10();
  L49():
    x10 = force? x9;
    checkMissing(x10);
    c12 = `is.object`(x10);
    if c12 then L51() else L52(x10);
  L55():
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L56() else L57();
  D10():
    deopt 43 [r42];
  D17():
    deopt 72 [r82];
  L11(r50):
    goto L12(r50);
  L44():
    c11 = ldf c in base;
    r43 = dyn c11("Apparent S3 methods needing delayed registration:", r42);
    check L45() else D11();
  L50(dx11):
    st reg = dx11;
    length2 = ldf length in base;
    r48 = dyn length2(dx11);
    check L54() else D13();
  L51():
    dr10 = tryDispatchBuiltin.1("$", x10);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L53() else L52(dr10);
  L52(x12):
    r47 = `$`(x12, <sym reg>);
    goto L50(r47);
  L56():
    sprintf1 = ldf sprintf;
    check L58() else D14();
  L57():
    r49 = dyn base9("S3 methods using delayed registration:", <lang sprintf("  %s %s %s %s", format(c("Package", `[`(reg, , 1))), format(c("Generic", `[`(reg, , 2))), format(c("Class", `[`(reg, , 3))), format(c("Method", `[`(reg, , 4))))>);
    goto L11(r49);
  L62():
    goto L0(r82);
  D11():
    deopt 45 [r43];
  D13():
    deopt 55 [r48];
  D14():
    deopt 60 [];
  L45():
    goto L7(r43);
  L53():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L50(dx10);
  L54():
    goto L9(r48);
  L58():
    p9 = prom<V +>{
      format3 = ldf format;
      p8 = prom<V +>{
        sym10 = ldf c;
        base10 = ldf c in base;
        guard10 = `==`.4(sym10, base10);
        if guard10 then L2() else L3();
      L0(r52):
        return r52;
      L2():
        reg = ld reg;
        reg1 = force? reg;
        checkMissing(reg1);
        c14 = `is.object`(reg1);
        if c14 then L4() else L5();
      L3():
        r51 = dyn base10("Package", <lang `[`(reg, , 1)>);
        goto L0(r51);
      L1(dx13):
        c15 = ldf c in base;
        r54 = dyn c15("Package", dx13);
        goto L0(r54);
      L4():
        dr12 = tryDispatchBuiltin.1("[", reg1);
        dc6 = getTryDispatchBuiltinDispatched(dr12);
        if dc6 then L6() else L5();
      L5():
        __3 = ldf `[` in base;
        r53 = dyn __3(reg1, <missing>, 1);
        goto L1(r53);
      L6():
        dx12 = getTryDispatchBuiltinValue(dr12);
        goto L1(dx12);
      };
      r56 = dyn format3(p8);
      return r56;
    };
    p11 = prom<V +>{
      format4 = ldf format;
      p10 = prom<V +>{
        sym11 = ldf c;
        base11 = ldf c in base;
        guard11 = `==`.4(sym11, base11);
        if guard11 then L2() else L3();
      L0(r59):
        return r59;
      L2():
        reg4 = ld reg;
        reg5 = force? reg4;
        checkMissing(reg5);
        c16 = `is.object`(reg5);
        if c16 then L4() else L5();
      L3():
        r58 = dyn base11("Generic", <lang `[`(reg, , 2)>);
        goto L0(r58);
      L1(dx15):
        c17 = ldf c in base;
        r61 = dyn c17("Generic", dx15);
        goto L0(r61);
      L4():
        dr14 = tryDispatchBuiltin.1("[", reg5);
        dc7 = getTryDispatchBuiltinDispatched(dr14);
        if dc7 then L6() else L5();
      L5():
        __4 = ldf `[` in base;
        r60 = dyn __4(reg5, <missing>, 2);
        goto L1(r60);
      L6():
        dx14 = getTryDispatchBuiltinValue(dr14);
        goto L1(dx14);
      };
      r63 = dyn format4(p10);
      return r63;
    };
    p13 = prom<V +>{
      format5 = ldf format;
      p12 = prom<V +>{
        sym12 = ldf c;
        base12 = ldf c in base;
        guard12 = `==`.4(sym12, base12);
        if guard12 then L2() else L3();
      L0(r66):
        return r66;
      L2():
        reg8 = ld reg;
        reg9 = force? reg8;
        checkMissing(reg9);
        c18 = `is.object`(reg9);
        if c18 then L4() else L5();
      L3():
        r65 = dyn base12("Class", <lang `[`(reg, , 3)>);
        goto L0(r65);
      L1(dx17):
        c19 = ldf c in base;
        r68 = dyn c19("Class", dx17);
        goto L0(r68);
      L4():
        dr16 = tryDispatchBuiltin.1("[", reg9);
        dc8 = getTryDispatchBuiltinDispatched(dr16);
        if dc8 then L6() else L5();
      L5():
        __5 = ldf `[` in base;
        r67 = dyn __5(reg9, <missing>, 3);
        goto L1(r67);
      L6():
        dx16 = getTryDispatchBuiltinValue(dr16);
        goto L1(dx16);
      };
      r70 = dyn format5(p12);
      return r70;
    };
    p15 = prom<V +>{
      format6 = ldf format;
      p14 = prom<V +>{
        sym13 = ldf c;
        base13 = ldf c in base;
        guard13 = `==`.4(sym13, base13);
        if guard13 then L2() else L3();
      L0(r73):
        return r73;
      L2():
        reg12 = ld reg;
        reg13 = force? reg12;
        checkMissing(reg13);
        c20 = `is.object`(reg13);
        if c20 then L4() else L5();
      L3():
        r72 = dyn base13("Method", <lang `[`(reg, , 4)>);
        goto L0(r72);
      L1(dx19):
        c21 = ldf c in base;
        r75 = dyn c21("Method", dx19);
        goto L0(r75);
      L4():
        dr18 = tryDispatchBuiltin.1("[", reg13);
        dc9 = getTryDispatchBuiltinDispatched(dr18);
        if dc9 then L6() else L5();
      L5():
        __6 = ldf `[` in base;
        r74 = dyn __6(reg13, <missing>, 4);
        goto L1(r74);
      L6():
        dx18 = getTryDispatchBuiltinValue(dr18);
        goto L1(dx18);
      };
      r77 = dyn format6(p14);
      return r77;
    };
    r79 = dyn sprintf1("  %s %s %s %s", p9, p11, p13, p15);
    check L59() else D15();
  D15():
    deopt 66 [r79];
  L59():
    c22 = ldf c in base;
    r80 = dyn c22("S3 methods using delayed registration:", r79);
    check L60() else D16();
  D16():
    deopt 68 [r80];
  L60():
    goto L11(r80);
  }
}