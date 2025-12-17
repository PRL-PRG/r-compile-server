fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner189286523;
    st `as.character.srcref` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner189286523(x, useSource, to, `...`) {
  (reg x:*, reg useSource:*, reg to:*, reg ddd:dots) -+> V { var x:*, var useSource:*, reg useSource_isMissing:L, reg useSource_orDefault:*, var to:*, reg to_isMissing:L, reg to_orDefault:*, reg x1:*, reg x2:V, reg p:p(V +), var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg x3:*, reg x4:V, reg attr:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg missing:cls, reg r6:V, reg r7:V, reg c:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg srcfile:*, reg srcfile1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg to1:*, reg to2:V, reg attr1:cls, reg r12:V, reg identical:cls, reg r13:V, reg r14:V, reg c1:L, reg stop:cls, reg r15:V, reg to3:*, reg to4:V, reg c2:L, reg to6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg to9:V, reg r18:V, reg c3:cls, reg r19:V, reg __:cls, reg r20:V, reg l:*, reg c4:L, reg dx3:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx5:V, reg dx6:V, reg dx7:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r21:V, reg dx12:V, reg l5:*, reg dx13:V, reg r22:V, reg c5:cls, reg r23:V, reg ___:cls, reg r24:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r25:V, reg r26:V, reg srcfile2:*, reg srcfile3:V, reg c6:V, reg r27:V, reg c7:L, reg c9:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r28:V, reg c12:L, reg r29:V, reg srcfile4:*, reg srcfile5:V, reg inherits:cls, reg r30:V, reg r31:V, reg c13:L, reg c14:V, reg c16:L, reg cat:cls, reg r32:V, reg print:cls, reg __1:cls, reg r33:V, reg r34:cls, reg srcfile6:*, reg srcfile7:V, reg p1:p(V +), reg r36:V, reg p2:p(V +), reg r38:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r39:V, reg r40:V, reg c17:cls, reg r41:V, reg l6:*, reg class__:cls, reg r42:V, reg useSource1:*, reg useSource2:V, reg c18:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r44:V, reg r45:V, reg srcfile8:*, reg srcfile9:V, reg inherits1:cls, reg r46:V, reg c19:L, reg c20:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r47:V, reg c24:L, reg r48:V, reg srcfile10:*, reg srcfile11:V, reg inherits2:cls, reg r49:V, reg c25:L, reg c26:V, reg c28:L, reg try:cls, reg getSrcLines:cls, reg srcfile12:*, reg srcfile13:V, reg p3:p(V +), reg x5:*, reg x6:V, reg c29:L, reg x8:V, reg dr4:V, reg dc2:L, reg dx15:V, reg dx16:V, reg __2:cls, reg r51:V, reg p4:p(V +), reg x9:*, reg x10:V, reg c30:L, reg x12:V, reg dr6:V, reg dc3:L, reg dx17:V, reg dx18:V, reg __3:cls, reg r53:V, reg p5:p(V +), reg r55:V, reg p6:p(V +), reg r57:V, reg r58:V, reg try1:cls, reg getSrcLines1:cls, reg srcfile14:*, reg srcfile15:V, reg p7:p(V +), reg x13:*, reg x14:V, reg c31:L, reg x16:V, reg dr8:V, reg dc4:L, reg dx19:V, reg dx20:V, reg __4:cls, reg r60:V, reg p8:p(V +), reg x17:*, reg x18:V, reg c32:L, reg x20:V, reg dr10:V, reg dc5:L, reg dx21:V, reg dx22:V, reg __5:cls, reg r62:V, reg p9:p(V +), reg r64:V, reg p10:p(V +), reg r66:V, reg useSource3:*, reg useSource4:V, reg r68:V, reg c33:L, reg c34:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r69:V, reg c38:L, reg r70:V, reg lines:*, reg lines1:V, reg inherits3:cls, reg r71:V, reg c39:L, reg c40:V, reg c42:L, reg paste0:cls, reg srcfile16:*, reg srcfile17:V, reg c43:L, reg srcfile19:V, reg dr12:V, reg dc6:L, reg dx23:V, reg dx24:V, reg r72:V, reg p11:p(V +), reg x21:*, reg x22:V, reg c44:L, reg x24:V, reg dr14:V, reg dc7:L, reg dx25:V, reg dx26:V, reg __6:cls, reg r74:V, reg p12:p(V +), reg x25:*, reg x26:V, reg c45:L, reg x28:V, reg dr16:V, reg dc8:L, reg dx27:V, reg dx28:V, reg __7:cls, reg r76:V, reg p13:p(V +), reg x29:*, reg x30:V, reg c46:L, reg x32:V, reg dr18:V, reg dc9:L, reg dx29:V, reg dx30:V, reg __8:cls, reg r78:V, reg p14:p(V +), reg x33:*, reg x34:V, reg c47:L, reg x36:V, reg dr20:V, reg dc10:L, reg dx31:V, reg dx32:V, reg __9:cls, reg r80:V, reg p15:p(V +), reg r82:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r84:V, reg r85:V, reg lines2:*, reg lines3:V, reg length:cls, reg r86:V, reg c48:L, reg Encoding:cls, reg lines4:*, reg lines5:V, reg p16:p(V +), reg r88:V, reg l7:*, reg Encoding__:cls, reg r89:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r90:V, reg r91:V, reg lines6:*, reg lines7:V, reg length1:cls, reg r92:V, reg x37:*, reg x38:V, reg c49:L, reg r94:V, reg x40:V, reg dr22:V, reg dc11:L, reg dx33:V, reg r96:V, reg dx34:V, reg __10:cls, reg r97:V, reg x41:*, reg x42:V, reg c50:L, reg r99:V, reg dx36:V, reg x44:V, reg dr24:V, reg dc12:L, reg dx38:V, reg r101:V, reg dx39:V, reg dx40:V, reg __11:cls, reg r102:V, reg r103:V, reg r104:V, reg r105:V, reg c51:L, reg _Machine:*, reg _Machine1:V, reg c52:L, reg _Machine3:V, reg dr26:V, reg dc13:L, reg dx41:V, reg dx42:V, reg r106:V, reg l8:*, reg c53:L, reg dx44:V, reg l10:*, reg dr28:V, reg dc14:L, reg dx46:V, reg dx47:V, reg dx48:V, reg ___1:cls, reg r107:V, reg substring:cls, reg lines8:*, reg lines9:V, reg c54:L, reg lines11:V, reg dr30:V, reg dc15:L, reg dx50:V, reg dx51:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r108:V, reg lines14:V, reg r109:V, reg lines15:*, reg lines16:V, reg length2:cls, reg r110:V, reg __12:cls, reg r111:V, reg p17:p(V +), reg x45:*, reg x46:V, reg c55:L, reg x48:V, reg dr32:V, reg dc16:L, reg dx52:V, reg dx53:V, reg __13:cls, reg r113:V, reg p18:p(V +), reg r115:V, reg l11:*, reg c56:L, reg r117:V, reg l13:*, reg dr34:V, reg dc17:L, reg dx54:V, reg dx55:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r124:V, reg r125:V, reg l16:*, reg r126:V, reg r127:V, reg lines17:*, reg lines18:V, reg length3:cls, reg r128:V, reg ___2:cls, reg r129:V, reg substring1:cls, reg lines19:*, reg lines20:V, reg c57:L, reg lines22:V, reg dr36:V, reg dc18:L, reg dx56:V, reg dx57:V, reg __14:cls, reg r130:V, reg p19:p(V +), reg x49:*, reg x50:V, reg c58:L, reg x52:V, reg dr38:V, reg dc19:L, reg dx58:V, reg dx59:V, reg __15:cls, reg r132:V, reg p20:p(V +), reg r134:V, reg l17:*, reg c59:L, reg r136:V, reg l19:*, reg dr40:V, reg dc20:L, reg dx60:V, reg dx61:V, reg ___3:cls, reg r139:V, reg enc:*, reg enc1:V, reg l20:*, reg Encoding__1:cls, reg r140:V, reg lines23:*, reg lines24:V |
    mkenv;
    st x = x;
    useSource_isMissing = missing.0(useSource);
    if useSource_isMissing then L0(TRUE) else L0(useSource);
  L0(useSource_orDefault):
    st useSource = useSource_orDefault;
    to_isMissing = missing.0(to);
    if to_isMissing then L1() else L2(to);
  L1():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    goto L2(p);
  L2(to_orDefault):
    st to = to_orDefault;
    st `...` = ddd;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L43() else L44();
  L3(r2):
    st srcfile = r2;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L47() else L48();
  L43():
    x3 = ld x;
    check L45() else D0();
  L44():
    r1 = dyn base(<sym x>, "srcfile");
    goto L3(r1);
  D0():
    deopt 2 [x3];
  L4(r5):
    r7 = `!`(r5);
    c = `as.logical`(r7);
    if c then L49() else L5();
  L45():
    x4 = force? x3;
    checkMissing(x4);
    attr = ldf attr in base;
    r3 = dyn attr(x4, "srcfile");
    check L46() else D1();
  L47():
    missing = ldf missing in base;
    r6 = dyn missing(<sym to>);
    goto L4(r6);
  L48():
    r4 = dyn base1(<sym to>);
    goto L4(r4);
  D1():
    deopt 6 [r3];
  L5():
    goto L14();
  L14():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L76() else L77();
  L46():
    goto L3(r3);
  L49():
    sym2 = ldf identical;
    base2 = ldf identical in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L50() else L51();
  L6(r9):
    r14 = `!`(r9);
    c1 = `as.logical`(r14);
    if c1 then L58() else L8();
  L15(r26):
    r27 = `!`(r26);
    c7 = `as.logical`(r27);
    if c7 then L79() else L16(c7);
  L50():
    srcfile = ld srcfile;
    check L52() else D2();
  L51():
    r8 = dyn base2(<sym srcfile>, <lang attr(to, "srcfile")>);
    goto L6(r8);
  L76():
    srcfile2 = ld srcfile;
    check L78() else D11();
  L77():
    r25 = dyn base6(<sym srcfile>);
    goto L15(r25);
  D2():
    deopt 14 [srcfile];
  D11():
    deopt 64 [srcfile2];
  L8():
    goto L9();
  L9():
    to3 = ld to;
    check L62() else D8();
  L16(c9):
    c16 = `as.logical`(c9);
    if c16 then L85() else L18();
  L52():
    srcfile1 = force? srcfile;
    checkMissing(srcfile1);
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L53() else L54();
  L58():
    stop = ldf stop;
    check L59() else D6();
  L78():
    srcfile3 = force? srcfile2;
    checkMissing(srcfile3);
    c6 = `==`(srcfile3, NULL);
    goto L15(c6);
  L79():
    sym7 = ldf inherits;
    base7 = ldf inherits in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L80() else L81();
  D6():
    deopt 34 [];
  D8():
    deopt 39 [to3];
  L7(r11):
    identical = ldf identical in base;
    r13 = dyn identical(srcfile1, r11, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L57() else D5();
  L17(c12, r29):
    r31 = `!`(r29);
    c13 = `as.logical`(r31);
    c14 = `&&`(c12, c13);
    goto L16(c14);
  L18():
    goto L20();
  L20():
    useSource1 = ld useSource;
    check L96() else D21();
  L53():
    to1 = ld to;
    check L55() else D3();
  L54():
    r10 = dyn base3(<sym to>, "srcfile");
    goto L7(r10);
  L59():
    r15 = dyn stop("'x' and 'to' must refer to same file");
    check L60() else D7();
  L62():
    to4 = force? to3;
    checkMissing(to4);
    c2 = `is.object`(to4);
    if c2 then L63() else L64(to4);
  L80():
    srcfile4 = ld srcfile;
    check L82() else D12();
  L81():
    r28 = dyn base7(<sym srcfile>, "srcfile");
    goto L17(c7, r28);
  L85():
    cat = ldf cat;
    check L86() else D14();
  D3():
    deopt 18 [to1];
  D5():
    deopt 31 [r13];
  D7():
    deopt 36 [r15];
  D12():
    deopt 70 [c7, srcfile4];
  D14():
    deopt 79 [];
  D21():
    deopt 99 [useSource1];
  L10(dx1):
    l = ld x;
    c4 = `is.object`(l);
    if c4 then L69() else L70(dx1, l);
  L55():
    to2 = force? to1;
    checkMissing(to2);
    attr1 = ldf attr in base;
    r12 = dyn attr1(to2, "srcfile");
    check L56() else D4();
  L57():
    goto L6(r13);
  L60():
    goto L9();
  L63():
    dr = tryDispatchBuiltin.1("[", to4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L65() else L64(dr);
  L64(to6):
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L66() else L67();
  L82():
    srcfile5 = force? srcfile4;
    checkMissing(srcfile5);
    inherits = ldf inherits in base;
    r30 = dyn inherits(srcfile5, "srcfile", FALSE);
    check L83() else D13();
  L86():
    r32 = dyn cat("forcing class on");
    check L87() else D15();
  L96():
    useSource2 = force? useSource1;
    checkMissing(useSource2);
    c18 = `as.logical`(useSource2);
    if c18 then L97() else L21();
  D4():
    deopt 22 [r12];
  D13():
    deopt 75 [c7, r30];
  D15():
    deopt 81 [r32];
  L11(to9, r18):
    __ = ldf `[` in base;
    r20 = dyn __(to9, r18);
    goto L10(r20);
  L12(dx6, dx7):
    st x = dx7;
    goto L14();
  L21():
    goto L27();
  L27():
    useSource3 = ld useSource;
    check L115() else D30();
  L56():
    goto L7(r12);
  L65():
    dx = getTryDispatchBuiltinValue(dr);
    goto L10(dx);
  L66():
    c3 = ldf c in base;
    r19 = dyn c3(3, 4, 6, 8);
    check L68() else D9();
  L67():
    r17 = dyn base4(3, 4, 6, 8);
    goto L11(to6, r17);
  L69():
    dr2 = tryDispatchBuiltin.0("[<-", l, dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L71() else L70(dx1, dr2);
  L70(dx3, l2):
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L72() else L73();
  L83():
    goto L17(c7, r30);
  L87():
    print = ldf print;
    check L88() else D16();
  L97():
    sym9 = ldf inherits;
    base9 = ldf inherits in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L98() else L99();
  D9():
    deopt 48 [to6, r19];
  D16():
    deopt 83 [];
  D30():
    deopt 132 [useSource3];
  L13(dx12, l5, dx13, r22):
    ___ = ldf `[<-` in base;
    r24 = dyn ___(l5, dx13, r22);
    goto L12(dx12, r24);
  L22(r45):
    c19 = `as.logical`(r45);
    if c19 then L23(c19) else L102();
  L68():
    goto L11(to6, r19);
  L71():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L12(dx1, dx5);
  L72():
    c5 = ldf c in base;
    r23 = dyn c5(3, 4, 6, 8);
    check L74() else D10();
  L73():
    r21 = dyn base5(3, 4, 6, 8);
    goto L13(dx3, l2, dx1, r21);
  L88():
    p2 = prom<V +>{
      __1 = ldf `::`;
      r33 = dyn __1("utils", "str");
      checkFun.0(r33);
      r34 = r33 as cls;
      p1 = prom<V +>{
        srcfile6 = ld srcfile;
        srcfile7 = force? srcfile6;
        checkMissing(srcfile7);
        return srcfile7;
      };
      r36 = dyn r34(p1);
      return r36;
    };
    r38 = dyn print(p2);
    check L89() else D17();
  L98():
    srcfile8 = ld srcfile;
    check L100() else D22();
  L99():
    r44 = dyn base9(<sym srcfile>, "srcfilecopy");
    goto L22(r44);
  L115():
    useSource4 = force? useSource3;
    checkMissing(useSource4);
    r68 = `!`(useSource4);
    c33 = `as.logical`(r68);
    if c33 then L28(c33) else L116();
  D10():
    deopt 58 [dx3, l2, dx1, r23];
  D17():
    deopt 85 [r38];
  D22():
    deopt 103 [srcfile8];
  L23(c20):
    c28 = `as.logical`(c20);
    if c28 then L108() else L25();
  L28(c34):
    c42 = `as.logical`(c34);
    if c42 then L122() else L30();
  L74():
    goto L13(dx3, l2, dx1, r23);
  L89():
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L90() else L91();
  L100():
    srcfile9 = force? srcfile8;
    checkMissing(srcfile9);
    inherits1 = ldf inherits in base;
    r46 = dyn inherits1(srcfile9, "srcfilecopy", FALSE);
    check L101() else D23();
  L102():
    sym10 = ldf inherits;
    base10 = ldf inherits in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L103() else L104();
  L116():
    sym11 = ldf inherits;
    base11 = ldf inherits in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L117() else L118();
  D23():
    deopt 108 [r46];
  L19(r40):
    l6 = ld srcfile;
    class__ = ldf `class<-`;
    check L93() else D19();
  L24(c24, r48):
    c25 = `as.logical`(r48);
    c26 = `||`(c24, c25);
    goto L23(c26);
  L25():
    try1 = ldf try;
    check L112() else D28();
  L26(r58):
    goto L27();
  L29(c38, r70):
    c39 = `as.logical`(r70);
    c40 = `||`(c38, c39);
    goto L28(c40);
  L30():
    sym12 = ldf length;
    base12 = ldf length in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L126() else L127();
  L31():
    lines23 = ld lines;
    check L175() else D55();
  L90():
    c17 = ldf c in base;
    r41 = dyn c17("srcfilealias", "srcfile");
    check L92() else D18();
  L91():
    r39 = dyn base8("srcfilealias", "srcfile");
    goto L19(r39);
  L101():
    goto L22(r46);
  L103():
    srcfile10 = ld srcfile;
    check L105() else D24();
  L104():
    r47 = dyn base10(<sym srcfile>, "srcfilealias");
    goto L24(c19, r47);
  L108():
    try = ldf try;
    check L109() else D26();
  L117():
    lines = ld lines;
    check L119() else D31();
  L118():
    r69 = dyn base11(<sym lines>, "try-error");
    goto L29(c33, r69);
  L122():
    paste0 = ldf paste0;
    check L123() else D33();
  D18():
    deopt 91 [r41];
  D19():
    deopt 93 [r40, l6, r40];
  D24():
    deopt 111 [c19, srcfile10];
  D26():
    deopt 119 [];
  D28():
    deopt 125 [];
  D31():
    deopt 137 [c33, lines];
  D33():
    deopt 145 [];
  D55():
    deopt 239 [lines23];
  L32(r85):
    c48 = `as.logical`(r85);
    if c48 then L130() else L33();
  L92():
    goto L19(r41);
  L93():
    r42 = dyn class__(l6, NULL, r40);
    check L94() else D20();
  L105():
    srcfile11 = force? srcfile10;
    checkMissing(srcfile11);
    inherits2 = ldf inherits in base;
    r49 = dyn inherits2(srcfile11, "srcfilealias", FALSE);
    check L106() else D25();
  L109():
    p6 = prom<V +>{
      getSrcLines = ldf getSrcLines;
      p3 = prom<V +>{
        srcfile12 = ld srcfile;
        srcfile13 = force? srcfile12;
        checkMissing(srcfile13);
        return srcfile13;
      };
      p4 = prom<V +>{
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        c29 = `is.object`(x6);
        if c29 then L1() else L2(x6);
      L0(dx16):
        return dx16;
      L1():
        dr4 = tryDispatchBuiltin.1("[", x6);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(x8):
        __2 = ldf `[` in base;
        r51 = dyn __2(x8, 7);
        goto L0(r51);
      L3():
        dx15 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx15);
      };
      p5 = prom<V +>{
        x9 = ld x;
        x10 = force? x9;
        checkMissing(x10);
        c30 = `is.object`(x10);
        if c30 then L1() else L2(x10);
      L0(dx18):
        return dx18;
      L1():
        dr6 = tryDispatchBuiltin.1("[", x10);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L3() else L2(dr6);
      L2(x12):
        __3 = ldf `[` in base;
        r53 = dyn __3(x12, 8);
        goto L0(r53);
      L3():
        dx17 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx17);
      };
      r55 = dyn getSrcLines(p3, p4, p5);
      return r55;
    };
    r57 = dyn try(p6, TRUE);
    check L110() else D27();
  L112():
    p10 = prom<V +>{
      getSrcLines1 = ldf getSrcLines;
      p7 = prom<V +>{
        srcfile14 = ld srcfile;
        srcfile15 = force? srcfile14;
        checkMissing(srcfile15);
        return srcfile15;
      };
      p8 = prom<V +>{
        x13 = ld x;
        x14 = force? x13;
        checkMissing(x14);
        c31 = `is.object`(x14);
        if c31 then L1() else L2(x14);
      L0(dx20):
        return dx20;
      L1():
        dr8 = tryDispatchBuiltin.1("[", x14);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L3() else L2(dr8);
      L2(x16):
        __4 = ldf `[` in base;
        r60 = dyn __4(x16, 1);
        goto L0(r60);
      L3():
        dx19 = getTryDispatchBuiltinValue(dr8);
        goto L0(dx19);
      };
      p9 = prom<V +>{
        x17 = ld x;
        x18 = force? x17;
        checkMissing(x18);
        c32 = `is.object`(x18);
        if c32 then L1() else L2(x18);
      L0(dx22):
        return dx22;
      L1():
        dr10 = tryDispatchBuiltin.1("[", x18);
        dc5 = getTryDispatchBuiltinDispatched(dr10);
        if dc5 then L3() else L2(dr10);
      L2(x20):
        __5 = ldf `[` in base;
        r62 = dyn __5(x20, 3);
        goto L0(r62);
      L3():
        dx21 = getTryDispatchBuiltinValue(dr10);
        goto L0(dx21);
      };
      r64 = dyn getSrcLines1(p7, p8, p9);
      return r64;
    };
    r66 = dyn try1(p10, TRUE);
    check L113() else D29();
  L119():
    lines1 = force? lines;
    checkMissing(lines1);
    inherits3 = ldf inherits in base;
    r71 = dyn inherits3(lines1, "try-error", FALSE);
    check L120() else D32();
  L123():
    p11 = prom<V +>{
      srcfile16 = ld srcfile;
      srcfile17 = force? srcfile16;
      checkMissing(srcfile17);
      c43 = `is.object`(srcfile17);
      if c43 then L1() else L2(srcfile17);
    L0(dx24):
      return dx24;
    L1():
      dr12 = tryDispatchBuiltin.1("$", srcfile17);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(srcfile19):
      r72 = `$`(srcfile19, <sym filename>);
      goto L0(r72);
    L3():
      dx23 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx23);
    };
    p12 = prom<V +>{
      x21 = ld x;
      x22 = force? x21;
      checkMissing(x22);
      c44 = `is.object`(x22);
      if c44 then L1() else L2(x22);
    L0(dx26):
      return dx26;
    L1():
      dr14 = tryDispatchBuiltin.1("[", x22);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(x24):
      __6 = ldf `[` in base;
      r74 = dyn __6(x24, 1);
      goto L0(r74);
    L3():
      dx25 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx25);
    };
    p13 = prom<V +>{
      x25 = ld x;
      x26 = force? x25;
      checkMissing(x26);
      c45 = `is.object`(x26);
      if c45 then L1() else L2(x26);
    L0(dx28):
      return dx28;
    L1():
      dr16 = tryDispatchBuiltin.1("[", x26);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(x28):
      __7 = ldf `[` in base;
      r76 = dyn __7(x28, 5);
      goto L0(r76);
    L3():
      dx27 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx27);
    };
    p14 = prom<V +>{
      x29 = ld x;
      x30 = force? x29;
      checkMissing(x30);
      c46 = `is.object`(x30);
      if c46 then L1() else L2(x30);
    L0(dx30):
      return dx30;
    L1():
      dr18 = tryDispatchBuiltin.1("[", x30);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(x32):
      __8 = ldf `[` in base;
      r78 = dyn __8(x32, 3);
      goto L0(r78);
    L3():
      dx29 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx29);
    };
    p15 = prom<V +>{
      x33 = ld x;
      x34 = force? x33;
      checkMissing(x34);
      c47 = `is.object`(x34);
      if c47 then L1() else L2(x34);
    L0(dx32):
      return dx32;
    L1():
      dr20 = tryDispatchBuiltin.1("[", x34);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(x36):
      __9 = ldf `[` in base;
      r80 = dyn __9(x36, 6);
      goto L0(r80);
    L3():
      dx31 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx31);
    };
    r82 = dyn paste0("<srcref: file \"", p11, "\" chars ", p12, ":", p13, " to ", p14, ":", p15, ">");
    check L124() else D34();
  L126():
    lines2 = ld lines;
    check L128() else D35();
  L127():
    r84 = dyn base12(<sym lines>);
    goto L32(r84);
  L175():
    lines24 = force? lines23;
    checkMissing(lines24);
    popenv;
    return lines24;
  D20():
    deopt 95 [r40, r42];
  D25():
    deopt 116 [c19, r49];
  D27():
    deopt 122 [r57];
  D29():
    deopt 128 [r66];
  D32():
    deopt 142 [c33, r71];
  D34():
    deopt 157 [r82];
  D35():
    deopt 161 [lines2];
  L33():
    goto L31();
  L94():
    st srcfile = r42;
    goto L20();
  L106():
    goto L24(c19, r49);
  L110():
    st lines = r57;
    goto L26(r57);
  L113():
    st lines = r66;
    goto L26(r66);
  L120():
    goto L29(c33, r71);
  L124():
    st lines = r82;
    goto L31();
  L128():
    lines3 = force? lines2;
    checkMissing(lines3);
    length = ldf length in base;
    r86 = dyn length(lines3);
    check L129() else D36();
  L130():
    Encoding = ldf Encoding;
    check L131() else D37();
  D36():
    deopt 164 [r86];
  D37():
    deopt 166 [];
  L129():
    goto L32(r86);
  L131():
    p16 = prom<V +>{
      lines4 = ld lines;
      lines5 = force? lines4;
      checkMissing(lines5);
      return lines5;
    };
    r88 = dyn Encoding(p16);
    check L132() else D38();
  D38():
    deopt 168 [r88];
  L132():
    st enc = r88;
    l7 = ld lines;
    Encoding__ = ldf `Encoding<-`;
    check L133() else D39();
  D39():
    deopt 173 ["bytes", l7, "bytes"];
  L133():
    r89 = dyn Encoding__(l7, NULL, "bytes");
    check L134() else D40();
  D40():
    deopt 175 ["bytes", r89];
  L134():
    st lines = r89;
    sym13 = ldf length;
    base13 = ldf length in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L135() else L136();
  L34(r91):
    x37 = ld x;
    check L139() else D43();
  L135():
    lines6 = ld lines;
    check L137() else D41();
  L136():
    r90 = dyn base13(<sym lines>);
    goto L34(r90);
  D41():
    deopt 179 [lines6];
  D43():
    deopt 182 [r91, x37];
  L137():
    lines7 = force? lines6;
    checkMissing(lines7);
    length1 = ldf length in base;
    r92 = dyn length1(lines7);
    check L138() else D42();
  L139():
    x38 = force? x37;
    checkMissing(x38);
    c49 = `is.object`(x38);
    if c49 then L140() else L141(r91, x38);
  D42():
    deopt 182 [r92];
  L35(r96, dx34):
    x41 = ld x;
    check L143() else D44();
  L138():
    goto L34(r92);
  L140():
    dr22 = tryDispatchBuiltin.1("[", x38);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L142() else L141(r91, dr22);
  L141(r94, x40):
    __10 = ldf `[` in base;
    r97 = dyn __10(x40, 3);
    goto L35(r94, r97);
  D44():
    deopt 186 [r96, dx34, x41];
  L142():
    dx33 = getTryDispatchBuiltinValue(dr22);
    goto L35(r91, dx33);
  L143():
    x42 = force? x41;
    checkMissing(x42);
    c50 = `is.object`(x42);
    if c50 then L144() else L145(r96, dx34, x42);
  L36(r101, dx39, dx40):
    r103 = `-`(dx39, dx40);
    r104 = `+`(r103, 1);
    r105 = `<`(r101, r104);
    c51 = `as.logical`(r105);
    if c51 then L147() else L37();
  L144():
    dr24 = tryDispatchBuiltin.1("[", x42);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L146() else L145(r96, dx34, dr24);
  L145(r99, dx36, x44):
    __11 = ldf `[` in base;
    r102 = dyn __11(x44, 1);
    goto L36(r99, dx36, r102);
  L37():
    goto L39();
  L39():
    substring = ldf substring;
    check L157() else D46();
  L146():
    dx38 = getTryDispatchBuiltinValue(dr24);
    goto L36(r96, dx34, dx38);
  L147():
    _Machine = ld `.Machine`;
    check L148() else D45();
  D45():
    deopt 195 [_Machine];
  D46():
    deopt 206 [];
  L148():
    _Machine1 = force? _Machine;
    checkMissing(_Machine1);
    c52 = `is.object`(_Machine1);
    if c52 then L150() else L151(_Machine1);
  L157():
    p17 = prom<V +>{
      lines8 = ld lines;
      lines9 = force? lines8;
      checkMissing(lines9);
      c54 = `is.object`(lines9);
      if c54 then L2() else L3(lines9);
    L0(dx51):
      return dx51;
    L2():
      dr30 = tryDispatchBuiltin.1("[", lines9);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L4() else L3(dr30);
    L3(lines11):
      sym14 = ldf length;
      base14 = ldf length in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L5() else L6();
    L1(lines14, r109):
      __12 = ldf `[` in base;
      r111 = dyn __12(lines14, r109);
      goto L0(r111);
    L4():
      dx50 = getTryDispatchBuiltinValue(dr30);
      goto L0(dx50);
    L5():
      lines15 = ld lines;
      lines16 = force? lines15;
      checkMissing(lines16);
      length2 = ldf length in base;
      r110 = dyn length2(lines16);
      goto L1(lines11, r110);
    L6():
      r108 = dyn base14(<sym lines>);
      goto L1(lines11, r108);
    };
    p18 = prom<V +>{
      x45 = ld x;
      x46 = force? x45;
      checkMissing(x46);
      c55 = `is.object`(x46);
      if c55 then L1() else L2(x46);
    L0(dx53):
      return dx53;
    L1():
      dr32 = tryDispatchBuiltin.1("[", x46);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L3() else L2(dr32);
    L2(x48):
      __13 = ldf `[` in base;
      r113 = dyn __13(x48, 4);
      goto L0(r113);
    L3():
      dx52 = getTryDispatchBuiltinValue(dr32);
      goto L0(dx52);
    };
    r115 = dyn substring(p17, 1, p18);
    check L158() else D47();
  D47():
    deopt 210 [r115];
  L149(dx42):
    l8 = ld x;
    c53 = `is.object`(l8);
    if c53 then L153() else L154(dx42, l8);
  L150():
    dr26 = tryDispatchBuiltin.1("$", _Machine1);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L152() else L151(dr26);
  L151(_Machine3):
    r106 = `$`(_Machine3, <sym integer.max>);
    goto L149(r106);
  L158():
    l11 = ld lines;
    c56 = `is.object`(l11);
    if c56 then L159() else L160(r115, l11);
  L38(dx47, dx48):
    st x = dx48;
    goto L39();
  L40(dx55):
    st lines = dx55;
    substring1 = ldf substring;
    check L166() else D50();
  L152():
    dx41 = getTryDispatchBuiltinValue(dr26);
    goto L149(dx41);
  L153():
    dr28 = tryDispatchBuiltin.0("[<-", l8, dx42);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L155() else L154(dx42, dr28);
  L154(dx44, l10):
    ___1 = ldf `[<-` in base;
    r107 = dyn ___1(l10, dx42, 4);
    goto L38(dx44, r107);
  L159():
    dr34 = tryDispatchBuiltin.0("[<-", l11, r115);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L161() else L160(r115, dr34);
  L160(r117, l13):
    sym15 = ldf length;
    base15 = ldf length in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L162() else L163();
  D50():
    deopt 221 [];
  L41(r125, l16, r126, r127):
    ___2 = ldf `[<-` in base;
    r129 = dyn ___2(l16, r126, r127);
    goto L40(r129);
  L155():
    dx46 = getTryDispatchBuiltinValue(dr28);
    goto L38(dx42, dx46);
  L161():
    dx54 = getTryDispatchBuiltinValue(dr34);
    goto L40(dx54);
  L162():
    lines17 = ld lines;
    check L164() else D48();
  L163():
    r124 = dyn base15(<sym lines>);
    goto L41(r117, l13, r115, r124);
  L166():
    p19 = prom<V +>{
      lines19 = ld lines;
      lines20 = force? lines19;
      checkMissing(lines20);
      c57 = `is.object`(lines20);
      if c57 then L1() else L2(lines20);
    L0(dx57):
      return dx57;
    L1():
      dr36 = tryDispatchBuiltin.1("[", lines20);
      dc18 = getTryDispatchBuiltinDispatched(dr36);
      if dc18 then L3() else L2(dr36);
    L2(lines22):
      __14 = ldf `[` in base;
      r130 = dyn __14(lines22, 1);
      goto L0(r130);
    L3():
      dx56 = getTryDispatchBuiltinValue(dr36);
      goto L0(dx56);
    };
    p20 = prom<V +>{
      x49 = ld x;
      x50 = force? x49;
      checkMissing(x50);
      c58 = `is.object`(x50);
      if c58 then L1() else L2(x50);
    L0(dx59):
      return dx59;
    L1():
      dr38 = tryDispatchBuiltin.1("[", x50);
      dc19 = getTryDispatchBuiltinDispatched(dr38);
      if dc19 then L3() else L2(dr38);
    L2(x52):
      __15 = ldf `[` in base;
      r132 = dyn __15(x52, 2);
      goto L0(r132);
    L3():
      dx58 = getTryDispatchBuiltinValue(dr38);
      goto L0(dx58);
    };
    r134 = dyn substring1(p19, p20);
    check L167() else D51();
  D48():
    deopt 214 [r117, l13, r115, lines17];
  D51():
    deopt 224 [r134];
  L164():
    lines18 = force? lines17;
    checkMissing(lines18);
    length3 = ldf length in base;
    r128 = dyn length3(lines18);
    check L165() else D49();
  L167():
    l17 = ld lines;
    c59 = `is.object`(l17);
    if c59 then L168() else L169(r134, l17);
  D49():
    deopt 217 [r117, l13, r115, r128];
  L42(dx61):
    st lines = dx61;
    enc = ld enc;
    check L171() else D52();
  L165():
    goto L41(r117, l13, r115, r128);
  L168():
    dr40 = tryDispatchBuiltin.0("[<-", l17, r134);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L170() else L169(r134, dr40);
  L169(r136, l19):
    ___3 = ldf `[<-` in base;
    r139 = dyn ___3(l19, r134, 1);
    goto L42(r139);
  D52():
    deopt 230 [enc];
  L170():
    dx60 = getTryDispatchBuiltinValue(dr40);
    goto L42(dx60);
  L171():
    enc1 = force? enc;
    checkMissing(enc1);
    l20 = ld lines;
    Encoding__1 = ldf `Encoding<-`;
    check L172() else D53();
  D53():
    deopt 233 [enc1, l20, enc1];
  L172():
    r140 = dyn Encoding__1(l20, NULL, enc1);
    check L173() else D54();
  D54():
    deopt 235 [enc1, r140];
  L173():
    st lines = r140;
    goto L31();
  }
}