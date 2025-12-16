fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-572461650`;
    st `attr.all.equal` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-572461650`(target, current, `...`, `check.attributes`, `check.names`) {
  (reg target:*, reg current:*, reg ddd:dots, reg check_attributes:*, reg check_names:*) -+> V { var target:*, var current:*, var `...`:dots?, var `check.attributes`:*, reg check_attributes_isMissing:L, reg check_attributes_orDefault:*, var `check.names`:*, reg check_names_isMissing:L, reg check_names_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg check_attributes1:*, reg check_attributes2:V, reg c:L, reg r2:V, reg c1:L, reg stop:cls, reg gettextf:cls, reg r3:V, reg p:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg check_names1:*, reg check_names2:V, reg c2:L, reg r9:V, reg c3:L, reg stop1:cls, reg gettextf1:cls, reg r10:V, reg p1:p(V +), reg r12:V, reg mode:cls, reg target1:*, reg target2:V, reg p2:p(V +), reg r15:V, reg mode1:cls, reg current1:*, reg current2:V, reg p3:p(V +), reg r17:V, reg r18:V, reg c4:L, reg paste0:cls, reg mode2:cls, reg target3:*, reg target4:V, reg p4:p(V +), reg r20:V, reg p5:p(V +), reg mode3:cls, reg current3:*, reg current4:V, reg p6:p(V +), reg r23:V, reg p7:p(V +), reg r25:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r27:V, reg r28:V, reg target5:*, reg target6:V, reg length:cls, reg r29:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r32:V, reg r33:V, reg r34:V, reg current5:*, reg current6:V, reg length1:cls, reg r35:V, reg r36:V, reg c5:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r37:V, reg r38:V, reg msg:*, reg msg1:V, reg paste1:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r39:V, reg r40:V, reg target7:*, reg target8:V, reg length2:cls, reg r41:V, reg p8:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r43:V, reg r44:V, reg current7:*, reg current8:V, reg length3:cls, reg r45:V, reg p9:p(V +), reg r47:V, reg c6:cls, reg r48:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r50:V, reg r51:V, reg target9:*, reg target10:V, reg attributes:cls, reg r52:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r53:V, reg r54:V, reg current9:*, reg current10:V, reg attributes1:cls, reg r55:V, reg check_names3:*, reg check_names4:V, reg c7:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r56:V, reg r57:V, reg target11:*, reg target12:V, reg names:cls, reg r58:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r59:V, reg r60:V, reg current11:*, reg current12:V, reg names1:cls, reg r61:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r62:V, reg r63:V, reg nx:*, reg nx1:V, reg length4:cls, reg r64:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r67:V, reg r68:V, reg r69:V, reg ny:*, reg ny1:V, reg length5:cls, reg r70:V, reg r71:V, reg c8:L, reg l:*, reg c9:L, reg r73:dots, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg r75:dots, reg dx1:V, reg r76:V, reg l3:*, reg c10:L, reg r78:dots, reg l5:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r81:V, reg lx:*, reg lx1:V, reg c11:L, reg c13:V, reg ly:*, reg ly1:V, reg c14:L, reg c15:V, reg c17:L, reg sym13:cls, reg base13:cls, reg guard13:L, reg r82:V, reg r83:V, reg all_equal_character:cls, reg nx2:*, reg nx3:V, reg p10:p(V +), reg ny2:*, reg ny3:V, reg p11:p(V +), reg check_attributes3:*, reg check_attributes4:V, reg p12:p(V +), reg r87:V, reg c18:L, reg c19:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r88:V, reg r89:V, reg msg2:*, reg msg3:V, reg paste2:cls, reg m:*, reg m1:V, reg p13:p(V +), reg r91:V, reg c20:cls, reg r92:V, reg r93:V, reg r94:V, reg lx2:*, reg lx3:V, reg c21:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r95:V, reg r96:V, reg msg4:*, reg msg5:V, reg c22:cls, reg r97:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r98:V, reg r99:V, reg msg6:*, reg msg7:V, reg c23:cls, reg r100:V, reg r101:V, reg l6:*, reg c24:L, reg r104:dots, reg l8:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ____:cls, reg r107:V, reg l9:*, reg c25:L, reg r109:dots, reg l11:*, reg dr6:V, reg dc3:L, reg dx6:V, reg r111:dots, reg dx7:V, reg ____1:cls, reg r112:V, reg check_attributes5:*, reg check_attributes6:V, reg c26:L, reg c28:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r113:V, reg c31:L, reg r114:V, reg ax:*, reg ax1:V, reg length6:cls, reg r115:V, reg c32:L, reg c33:L, reg c34:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r116:V, reg c41:L, reg c42:L, reg r117:V, reg ay:*, reg ay1:V, reg length7:cls, reg r118:V, reg c43:L, reg c44:V, reg c47:L, reg c48:V, reg c50:L, reg sym19:cls, reg base19:cls, reg guard19:L, reg r119:V, reg r120:V, reg ax2:*, reg ax3:V, reg names2:cls, reg r121:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r122:V, reg r123:V, reg ay2:*, reg ay3:V, reg names3:cls, reg r124:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r125:V, reg r126:V, reg nx4:*, reg nx5:V, reg length8:cls, reg r127:V, reg c51:L, reg ax4:*, reg ax5:V, reg c52:L, reg ax7:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg order:cls, reg nx6:*, reg nx7:V, reg p14:p(V +), reg r129:V, reg __:cls, reg r130:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r131:V, reg r132:V, reg ny4:*, reg ny5:V, reg length9:cls, reg r133:V, reg c53:L, reg ay4:*, reg ay5:V, reg c54:L, reg ay7:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg order1:cls, reg ny6:*, reg ny7:V, reg p15:p(V +), reg r135:V, reg __1:cls, reg r136:V, reg all_equal:cls, reg ax8:*, reg ax9:V, reg p16:p(V +), reg ay8:*, reg ay9:V, reg p17:p(V +), reg ddd1:dots?, reg check_attributes7:*, reg check_attributes8:V, reg p18:p(V +), reg r140:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r141:V, reg r142:V, reg tt:*, reg tt1:V, reg c55:L, reg c56:L, reg sym24:cls, reg base24:cls, reg guard24:L, reg r143:V, reg r144:V, reg msg8:*, reg msg9:V, reg paste3:cls, reg tt2:*, reg tt3:V, reg p19:p(V +), reg r146:V, reg c57:cls, reg r147:V, reg r148:V, reg msg10:*, reg msg11:V |
    mkenv;
    st target = target;
    st current = current;
    st `...` = ddd;
    check_attributes_isMissing = missing.0(check_attributes);
    if check_attributes_isMissing then L0(TRUE) else L0(check_attributes);
  L0(check_attributes_orDefault):
    st `check.attributes` = check_attributes_orDefault;
    check_names_isMissing = missing.0(check_names);
    if check_names_isMissing then L1(TRUE) else L1(check_names);
  L1(check_names_orDefault):
    st `check.names` = check_names_orDefault;
    sym = ldf `is.logical`;
    base = ldf `is.logical` in base;
    guard = `==`.4(sym, base);
    if guard then L57() else L58();
  L2(r1):
    r2 = `!`(r1);
    c1 = `as.logical`(r2);
    if c1 then L60() else L3();
  L57():
    check_attributes1 = ld `check.attributes`;
    check L59() else D0();
  L58():
    r = dyn base(<sym check.attributes>);
    goto L2(r);
  D0():
    deopt 1 [check_attributes1];
  L3():
    goto L4();
  L4():
    sym1 = ldf `is.logical`;
    base1 = ldf `is.logical` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L64() else L65();
  L59():
    check_attributes2 = force? check_attributes1;
    checkMissing(check_attributes2);
    c = `is.logical`(check_attributes2);
    goto L2(c);
  L60():
    stop = ldf stop;
    check L61() else D1();
  D1():
    deopt 6 [];
  L5(r8):
    r9 = `!`(r8);
    c3 = `as.logical`(r9);
    if c3 then L67() else L6();
  L61():
    p = prom<V +>{
      gettextf = ldf gettextf;
      r3 = dyn gettextf("'%s' must be logical", "check.attributes");
      return r3;
    };
    r5 = dyn stop[, domain](p, NA_LGL);
    check L62() else D2();
  L64():
    check_names1 = ld `check.names`;
    check L66() else D3();
  L65():
    r7 = dyn base1(<sym check.names>);
    goto L5(r7);
  D2():
    deopt 10 [r5];
  D3():
    deopt 14 [check_names1];
  L6():
    goto L7();
  L7():
    st msg = NULL;
    mode = ldf mode;
    check L71() else D6();
  L62():
    goto L4();
  L66():
    check_names2 = force? check_names1;
    checkMissing(check_names2);
    c2 = `is.logical`(check_names2);
    goto L5(c2);
  L67():
    stop1 = ldf stop;
    check L68() else D4();
  D4():
    deopt 19 [];
  D6():
    deopt 30 [];
  L68():
    p1 = prom<V +>{
      gettextf1 = ldf gettextf;
      r10 = dyn gettextf1("'%s' must be logical", "check.names");
      return r10;
    };
    r12 = dyn stop1[, domain](p1, NA_LGL);
    check L69() else D5();
  L71():
    p2 = prom<V +>{
      target1 = ld target;
      target2 = force? target1;
      checkMissing(target2);
      return target2;
    };
    r15 = dyn mode(p2);
    check L72() else D7();
  D5():
    deopt 23 [r12];
  D7():
    deopt 32 [r15];
  L69():
    goto L7();
  L72():
    mode1 = ldf mode;
    check L73() else D8();
  D8():
    deopt 33 [r15];
  L73():
    p3 = prom<V +>{
      current1 = ld current;
      current2 = force? current1;
      checkMissing(current2);
      return current2;
    };
    r17 = dyn mode1(p3);
    check L74() else D9();
  D9():
    deopt 35 [r15, r17];
  L74():
    r18 = `!=`(r15, r17);
    c4 = `as.logical`(r18);
    if c4 then L75() else L8();
  L8():
    goto L9();
  L9():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L79() else L80();
  L75():
    paste0 = ldf paste0;
    check L76() else D10();
  D10():
    deopt 38 [];
  L10(r28):
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L83() else L84();
  L76():
    p5 = prom<V +>{
      mode2 = ldf mode;
      p4 = prom<V +>{
        target3 = ld target;
        target4 = force? target3;
        checkMissing(target4);
        return target4;
      };
      r20 = dyn mode2(p4);
      return r20;
    };
    p7 = prom<V +>{
      mode3 = ldf mode;
      p6 = prom<V +>{
        current3 = ld current;
        current4 = force? current3;
        checkMissing(current4);
        return current4;
      };
      r23 = dyn mode3(p6);
      return r23;
    };
    r25 = dyn paste0("Modes: ", p5, ", ", p7);
    check L77() else D11();
  L79():
    target5 = ld target;
    check L81() else D12();
  L80():
    r27 = dyn base2(<sym target>);
    goto L10(r27);
  D11():
    deopt 43 [r25];
  D12():
    deopt 49 [target5];
  L11(r33, r34):
    r36 = `!=`(r33, r34);
    c5 = `as.logical`(r36);
    if c5 then L87() else L12();
  L77():
    st msg = r25;
    goto L9();
  L81():
    target6 = force? target5;
    checkMissing(target6);
    length = ldf length in base;
    r29 = dyn length(target6);
    check L82() else D13();
  L83():
    current5 = ld current;
    check L85() else D14();
  L84():
    r32 = dyn base3(<sym current>);
    goto L11(r28, r32);
  D13():
    deopt 52 [r29];
  D14():
    deopt 54 [r28, current5];
  L12():
    goto L14();
  L14():
    sym7 = ldf attributes;
    base7 = ldf attributes in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L95() else L96();
  L82():
    goto L10(r29);
  L85():
    current6 = force? current5;
    checkMissing(current6);
    length1 = ldf length in base;
    r35 = dyn length1(current6);
    check L86() else D15();
  L87():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L88() else L89();
  D15():
    deopt 57 [r28, r35];
  L13(r38):
    st msg = r38;
    goto L14();
  L15(r51):
    st ax = r51;
    sym8 = ldf attributes;
    base8 = ldf attributes in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L99() else L100();
  L86():
    goto L11(r28, r35);
  L88():
    msg = ld msg;
    check L90() else D16();
  L89():
    r37 = dyn base4(<sym msg>, <lang paste0("Lengths: ", length(target), ", ", length(current))>);
    goto L13(r37);
  L95():
    target9 = ld target;
    check L97() else D20();
  L96():
    r50 = dyn base7(<sym target>);
    goto L15(r50);
  D16():
    deopt 61 [msg];
  D20():
    deopt 77 [target9];
  L16(r54):
    st ay = r54;
    check_names3 = ld `check.names`;
    check L103() else D24();
  L90():
    msg1 = force? msg;
    checkMissing(msg1);
    paste1 = ldf paste0;
    check L91() else D17();
  L97():
    target10 = force? target9;
    checkMissing(target10);
    attributes = ldf attributes in base;
    r52 = dyn attributes(target10);
    check L98() else D21();
  L99():
    current9 = ld current;
    check L101() else D22();
  L100():
    r53 = dyn base8(<sym current>);
    goto L16(r53);
  D17():
    deopt 64 [];
  D21():
    deopt 80 [r52];
  D22():
    deopt 84 [current9];
  D24():
    deopt 89 [check_names3];
  L91():
    p8 = prom<V +>{
      sym5 = ldf length;
      base5 = ldf length in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r40):
      return r40;
    L1():
      target7 = ld target;
      target8 = force? target7;
      checkMissing(target8);
      length2 = ldf length in base;
      r41 = dyn length2(target8);
      goto L0(r41);
    L2():
      r39 = dyn base5(<sym target>);
      goto L0(r39);
    };
    p9 = prom<V +>{
      sym6 = ldf length;
      base6 = ldf length in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r44):
      return r44;
    L1():
      current7 = ld current;
      current8 = force? current7;
      checkMissing(current8);
      length3 = ldf length in base;
      r45 = dyn length3(current8);
      goto L0(r45);
    L2():
      r43 = dyn base6(<sym current>);
      goto L0(r43);
    };
    r47 = dyn paste1("Lengths: ", p8, ", ", p9);
    check L92() else D18();
  L98():
    goto L15(r52);
  L101():
    current10 = force? current9;
    checkMissing(current10);
    attributes1 = ldf attributes in base;
    r55 = dyn attributes1(current10);
    check L102() else D23();
  L103():
    check_names4 = force? check_names3;
    checkMissing(check_names4);
    c7 = `as.logical`(check_names4);
    if c7 then L104() else L17();
  D18():
    deopt 69 [r47];
  D23():
    deopt 87 [r55];
  L17():
    l6 = ld ax;
    c24 = `is.object`(l6);
    if c24 then L161() else L162(NULL, l6);
  L34():
    check_attributes5 = ld `check.attributes`;
    check L167() else D46();
  L92():
    c6 = ldf c in base;
    r48 = dyn c6(msg1, r47);
    check L93() else D19();
  L102():
    goto L16(r55);
  L104():
    sym9 = ldf names;
    base9 = ldf names in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L105() else L106();
  D19():
    deopt 71 [r48];
  D46():
    deopt 190 [check_attributes5];
  L18(r57):
    st nx = r57;
    sym10 = ldf names;
    base10 = ldf names in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L109() else L110();
  L35(dx5):
    st ax = dx5;
    l9 = ld ay;
    c25 = `is.object`(l9);
    if c25 then L164() else L165(NULL, l9);
  L93():
    goto L13(r48);
  L105():
    target11 = ld target;
    check L107() else D25();
  L106():
    r56 = dyn base9(<sym target>);
    goto L18(r56);
  L161():
    dr4 = tryDispatchBuiltin.0("[[<-", l6, NULL);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L163() else L162(NULL, dr4);
  L162(r104, l8):
    ____ = ldf `[[<-` in base;
    r107 = dyn ____(l8, NULL, "names");
    goto L35(r107);
  L167():
    check_attributes6 = force? check_attributes5;
    checkMissing(check_attributes6);
    c26 = `as.logical`(check_attributes6);
    if c26 then L168() else L37(c26);
  D25():
    deopt 93 [target11];
  L19(r60):
    st ny = r60;
    sym11 = ldf length;
    base11 = ldf length in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L113() else L114();
  L36(r111, dx7):
    st ay = dx7;
    goto L34();
  L37(c28):
    c50 = `as.logical`(c28);
    if c50 then L180() else L41();
  L107():
    target12 = force? target11;
    checkMissing(target12);
    names = ldf names in base;
    r58 = dyn names(target12);
    check L108() else D26();
  L109():
    current11 = ld current;
    check L111() else D27();
  L110():
    r59 = dyn base10(<sym current>);
    goto L19(r59);
  L163():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L35(dx4);
  L164():
    dr6 = tryDispatchBuiltin.0("[[<-", l9, NULL);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L166() else L165(NULL, dr6);
  L165(r109, l11):
    ____1 = ldf `[[<-` in base;
    r112 = dyn ____1(l11, NULL, "names");
    goto L36(r109, r112);
  L168():
    sym17 = ldf length;
    base17 = ldf length in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L169() else L170();
  D26():
    deopt 96 [r58];
  D27():
    deopt 100 [current11];
  L20(r63):
    st lx = r63;
    sym12 = ldf length;
    base12 = ldf length in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L117() else L118();
  L38(c31, r114):
    c32 = `as.logical`(r114);
    if c32 then L39(c31, c32) else L173();
  L41():
    goto L56();
  L56():
    msg10 = ld msg;
    check L227() else D72();
  L108():
    goto L18(r58);
  L111():
    current12 = force? current11;
    checkMissing(current12);
    names1 = ldf names in base;
    r61 = dyn names1(current12);
    check L112() else D28();
  L113():
    nx = ld nx;
    check L115() else D29();
  L114():
    r62 = dyn base11(<sym nx>);
    goto L20(r62);
  L166():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L36(NULL, dx6);
  L169():
    ax = ld ax;
    check L171() else D47();
  L170():
    r113 = dyn base17(<sym ax>);
    goto L38(c26, r113);
  L180():
    sym19 = ldf names;
    base19 = ldf names in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L181() else L182();
  D28():
    deopt 103 [r61];
  D29():
    deopt 107 [nx];
  D47():
    deopt 194 [c26, ax];
  D72():
    deopt 282 [msg10];
  L21(r68, r69):
    st ly = r69;
    r71 = `||`(r68, r69);
    c8 = `as.logical`(r71);
    if c8 then L121() else L22();
  L39(c33, c34):
    c47 = `as.logical`(c34);
    c48 = `&&`(c33, c47);
    goto L37(c48);
  L42(r120):
    st nx = r120;
    sym20 = ldf names;
    base20 = ldf names in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L185() else L186();
  L112():
    goto L19(r61);
  L115():
    nx1 = force? nx;
    checkMissing(nx1);
    length4 = ldf length in base;
    r64 = dyn length4(nx1);
    check L116() else D30();
  L117():
    ny = ld ny;
    check L119() else D31();
  L118():
    r67 = dyn base12(<sym ny>);
    goto L21(r63, r67);
  L171():
    ax1 = force? ax;
    checkMissing(ax1);
    length6 = ldf length in base;
    r115 = dyn length6(ax1);
    check L172() else D48();
  L173():
    sym18 = ldf length;
    base18 = ldf length in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L174() else L175();
  L181():
    ax2 = ld ax;
    check L183() else D51();
  L182():
    r119 = dyn base19(<sym ax>);
    goto L42(r119);
  L227():
    msg11 = force? msg10;
    checkMissing(msg11);
    popenv;
    return msg11;
  D30():
    deopt 110 [r64];
  D31():
    deopt 113 [r63, ny];
  D48():
    deopt 197 [c26, r115];
  D51():
    deopt 208 [ax2];
  L22():
    goto L33(NULL);
  L33(r101):
    goto L34();
  L40(c41, c42, r117):
    c43 = `as.logical`(r117);
    c44 = `||`(c42, c43);
    goto L39(c41, c44);
  L43(r123):
    st ny = r123;
    sym21 = ldf length;
    base21 = ldf length in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L189() else L190();
  L116():
    goto L20(r64);
  L119():
    ny1 = force? ny;
    checkMissing(ny1);
    length5 = ldf length in base;
    r70 = dyn length5(ny1);
    check L120() else D32();
  L121():
    l = ld ay;
    c9 = `is.object`(l);
    if c9 then L123() else L124(NULL, l);
  L172():
    goto L38(c26, r115);
  L174():
    ay = ld ay;
    check L176() else D49();
  L175():
    r116 = dyn base18(<sym ay>);
    goto L40(c31, c32, r116);
  L183():
    ax3 = force? ax2;
    checkMissing(ax3);
    names2 = ldf names in base;
    r121 = dyn names2(ax3);
    check L184() else D52();
  L185():
    ay2 = ld ay;
    check L187() else D53();
  L186():
    r122 = dyn base20(<sym ay>);
    goto L43(r122);
  D32():
    deopt 116 [r63, r70];
  D49():
    deopt 200 [c31, c32, ay];
  D52():
    deopt 211 [r121];
  D53():
    deopt 215 [ay2];
  L44(r126):
    c51 = `as.logical`(r126);
    if c51 then L193() else L45();
  L120():
    goto L21(r63, r70);
  L122(r75, dx1):
    st ay = dx1;
    l3 = ld ax;
    c10 = `is.object`(l3);
    if c10 then L127() else L128(r75, l3);
  L123():
    dr = tryDispatchBuiltin.0("$<-", l, NULL);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L125() else L124(NULL, dr);
  L124(r73, l2):
    r76 = `$<-`(l2, <sym names>, NULL);
    goto L122(r73, r76);
  L176():
    ay1 = force? ay;
    checkMissing(ay1);
    length7 = ldf length in base;
    r118 = dyn length7(ay1);
    check L177() else D50();
  L184():
    goto L42(r121);
  L187():
    ay3 = force? ay2;
    checkMissing(ay3);
    names3 = ldf names in base;
    r124 = dyn names3(ay3);
    check L188() else D54();
  L189():
    nx4 = ld nx;
    check L191() else D55();
  L190():
    r125 = dyn base21(<sym nx>);
    goto L44(r125);
  D50():
    deopt 203 [c31, c32, r118];
  D54():
    deopt 218 [r124];
  D55():
    deopt 222 [nx4];
  L45():
    goto L47();
  L47():
    sym22 = ldf length;
    base22 = ldf length in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L201() else L202();
  L125():
    dx = getTryDispatchBuiltinValue(dr);
    goto L122(NULL, dx);
  L126(dx3):
    st ax = dx3;
    lx = ld lx;
    check L130() else D33();
  L127():
    dr2 = tryDispatchBuiltin.0("$<-", l3, r75);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L129() else L128(r75, dr2);
  L128(r78, l5):
    r81 = `$<-`(l5, <sym names>, r75);
    goto L126(r81);
  L177():
    goto L40(c31, c32, r118);
  L188():
    goto L43(r124);
  L191():
    nx5 = force? nx4;
    checkMissing(nx5);
    length8 = ldf length in base;
    r127 = dyn length8(nx5);
    check L192() else D56();
  L193():
    ax4 = ld ax;
    check L194() else D57();
  D33():
    deopt 127 [lx];
  D56():
    deopt 225 [r127];
  D57():
    deopt 226 [ax4];
  L48(r132):
    c53 = `as.logical`(r132);
    if c53 then L205() else L49();
  L129():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L126(dx2);
  L130():
    lx1 = force? lx;
    checkMissing(lx1);
    c11 = `as.logical`(lx1);
    if c11 then L131() else L23(c11);
  L192():
    goto L44(r127);
  L194():
    ax5 = force? ax4;
    checkMissing(ax5);
    c52 = `is.object`(ax5);
    if c52 then L195() else L196(ax5);
  L201():
    ny4 = ld ny;
    check L203() else D60();
  L202():
    r131 = dyn base22(<sym ny>);
    goto L48(r131);
  D60():
    deopt 238 [ny4];
  L23(c13):
    c17 = `as.logical`(c13);
    if c17 then L134() else L24();
  L46(dx9):
    st ax = dx9;
    goto L47();
  L49():
    goto L51();
  L51():
    all_equal = ldf `all.equal`;
    check L213() else D65();
  L131():
    ly = ld ly;
    check L132() else D34();
  L195():
    dr8 = tryDispatchBuiltin.1("[", ax5);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L197() else L196(dr8);
  L196(ax7):
    order = ldf order;
    check L198() else D58();
  L203():
    ny5 = force? ny4;
    checkMissing(ny5);
    length9 = ldf length in base;
    r133 = dyn length9(ny5);
    check L204() else D61();
  L205():
    ay4 = ld ay;
    check L206() else D62();
  D34():
    deopt 129 [c11, ly];
  D58():
    deopt 229 [ax7];
  D61():
    deopt 241 [r133];
  D62():
    deopt 242 [ay4];
  D65():
    deopt 253 [];
  L24():
    lx2 = ld lx;
    check L148() else D41();
  L29(r94):
    goto L33(r94);
  L132():
    ly1 = force? ly;
    checkMissing(ly1);
    c14 = `as.logical`(ly1);
    c15 = `&&`(c11, c14);
    goto L23(c15);
  L134():
    sym13 = ldf `is.character`;
    base13 = ldf `is.character` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L135() else L136();
  L197():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L46(dx8);
  L198():
    p14 = prom<V +>{
      nx6 = ld nx;
      nx7 = force? nx6;
      checkMissing(nx7);
      return nx7;
    };
    r129 = dyn order(p14);
    check L199() else D59();
  L204():
    goto L48(r133);
  L206():
    ay5 = force? ay4;
    checkMissing(ay5);
    c54 = `is.object`(ay5);
    if c54 then L207() else L208(ay5);
  L213():
    p16 = prom<V +>{
      ax8 = ld ax;
      ax9 = force? ax8;
      checkMissing(ax9);
      return ax9;
    };
    p17 = prom<V +>{
      ay8 = ld ay;
      ay9 = force? ay8;
      checkMissing(ay9);
      return ay9;
    };
    ddd1 = ld `...`;
    p18 = prom<V +>{
      check_attributes7 = ld `check.attributes`;
      check_attributes8 = force? check_attributes7;
      checkMissing(check_attributes8);
      return check_attributes8;
    };
    r140 = dyn all_equal[, , `...`, `check.attributes`](p16, p17, ddd1, p18);
    check L214() else D66();
  D41():
    deopt 156 [lx2];
  D59():
    deopt 231 [ax7, r129];
  D66():
    deopt 259 [r140];
  L25(r83):
    c19 = `as.logical`(r83);
    if c19 then L139() else L26();
  L50(dx12):
    st ay = dx12;
    goto L51();
  L135():
    all_equal_character = ldf `all.equal.character`;
    check L137() else D35();
  L136():
    r82 = dyn base13(<lang `<-`(m, all.equal.character(nx, ny, check.attributes=check.attributes))>);
    goto L25(r82);
  L148():
    lx3 = force? lx2;
    checkMissing(lx3);
    c21 = `as.logical`(lx3);
    if c21 then L149() else L30();
  L199():
    __ = ldf `[` in base;
    r130 = dyn __(ax7, r129);
    goto L46(r130);
  L207():
    dr10 = tryDispatchBuiltin.1("[", ay5);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L209() else L208(dr10);
  L208(ay7):
    order1 = ldf order;
    check L210() else D63();
  L214():
    st tt = r140;
    sym23 = ldf `is.character`;
    base23 = ldf `is.character` in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L215() else L216();
  D35():
    deopt 134 [];
  D63():
    deopt 245 [ay7];
  L26():
    goto L28(NULL);
  L28(r93):
    goto L29(r93);
  L30():
    sym16 = ldf c;
    base16 = ldf c in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L155() else L156();
  L52(r142):
    c56 = `as.logical`(r142);
    if c56 then L218() else L53();
  L137():
    p10 = prom<V +>{
      nx2 = ld nx;
      nx3 = force? nx2;
      checkMissing(nx3);
      return nx3;
    };
    p11 = prom<V +>{
      ny2 = ld ny;
      ny3 = force? ny2;
      checkMissing(ny3);
      return ny3;
    };
    p12 = prom<V +>{
      check_attributes3 = ld `check.attributes`;
      check_attributes4 = force? check_attributes3;
      checkMissing(check_attributes4);
      return check_attributes4;
    };
    r87 = dyn all_equal_character[, , `check.attributes`](p10, p11, p12);
    check L138() else D36();
  L139():
    sym14 = ldf c;
    base14 = ldf c in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L140() else L141();
  L149():
    sym15 = ldf c;
    base15 = ldf c in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L150() else L151();
  L209():
    dx11 = getTryDispatchBuiltinValue(dr10);
    goto L50(dx11);
  L210():
    p15 = prom<V +>{
      ny6 = ld ny;
      ny7 = force? ny6;
      checkMissing(ny7);
      return ny7;
    };
    r135 = dyn order1(p15);
    check L211() else D64();
  L215():
    tt = ld tt;
    check L217() else D67();
  L216():
    r141 = dyn base23(<sym tt>);
    goto L52(r141);
  D36():
    deopt 139 [r87];
  D64():
    deopt 247 [ay7, r135];
  D67():
    deopt 262 [tt];
  L27(r89):
    st msg = r89;
    goto L28(r89);
  L31(r96):
    st msg = r96;
    goto L29(r96);
  L32(r99):
    st msg = r99;
    goto L29(r99);
  L53():
    goto L55(NULL);
  L55(r148):
    goto L56();
  L138():
    st m = r87;
    c18 = `is.character`(r87);
    goto L25(c18);
  L140():
    msg2 = ld msg;
    check L142() else D37();
  L141():
    r88 = dyn base14(<sym msg>, <lang paste("Names:", m)>);
    goto L27(r88);
  L150():
    msg4 = ld msg;
    check L152() else D42();
  L151():
    r95 = dyn base15(<sym msg>, "names for target but not for current");
    goto L31(r95);
  L155():
    msg6 = ld msg;
    check L157() else D44();
  L156():
    r98 = dyn base16(<sym msg>, "names for current but not for target");
    goto L32(r98);
  L211():
    __1 = ldf `[` in base;
    r136 = dyn __1(ay7, r135);
    goto L50(r136);
  L217():
    tt1 = force? tt;
    checkMissing(tt1);
    c55 = `is.character`(tt1);
    goto L52(c55);
  L218():
    sym24 = ldf c;
    base24 = ldf c in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L219() else L220();
  D37():
    deopt 144 [msg2];
  D42():
    deopt 160 [msg4];
  D44():
    deopt 168 [msg6];
  L54(r144):
    st msg = r144;
    goto L55(r144);
  L142():
    msg3 = force? msg2;
    checkMissing(msg3);
    paste2 = ldf paste;
    check L143() else D38();
  L152():
    msg5 = force? msg4;
    checkMissing(msg5);
    c22 = ldf c in base;
    r97 = dyn c22(msg5, "names for target but not for current");
    check L153() else D43();
  L157():
    msg7 = force? msg6;
    checkMissing(msg7);
    c23 = ldf c in base;
    r100 = dyn c23(msg7, "names for current but not for target");
    check L158() else D45();
  L219():
    msg8 = ld msg;
    check L221() else D68();
  L220():
    r143 = dyn base24(<sym msg>, <lang paste("Attributes: <", tt, ">")>);
    goto L54(r143);
  D38():
    deopt 147 [];
  D43():
    deopt 164 [r97];
  D45():
    deopt 172 [r100];
  D68():
    deopt 267 [msg8];
  L143():
    p13 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      return m1;
    };
    r91 = dyn paste2("Names:", p13);
    check L144() else D39();
  L153():
    goto L31(r97);
  L158():
    goto L32(r100);
  L221():
    msg9 = force? msg8;
    checkMissing(msg9);
    paste3 = ldf paste;
    check L222() else D69();
  D39():
    deopt 150 [r91];
  D69():
    deopt 270 [];
  L144():
    c20 = ldf c in base;
    r92 = dyn c20(msg3, r91);
    check L145() else D40();
  L222():
    p19 = prom<V +>{
      tt2 = ld tt;
      tt3 = force? tt2;
      checkMissing(tt3);
      return tt3;
    };
    r146 = dyn paste3("Attributes: <", p19, ">");
    check L223() else D70();
  D40():
    deopt 152 [r92];
  D70():
    deopt 274 [r146];
  L145():
    goto L27(r92);
  L223():
    c57 = ldf c in base;
    r147 = dyn c57(msg9, r146);
    check L224() else D71();
  D71():
    deopt 276 [r147];
  L224():
    goto L54(r147);
  }
}