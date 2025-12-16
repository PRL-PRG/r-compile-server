fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner872977295;
    st `all.equal.list` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner872977295(target, current, `...`, `check.attributes`, `use.names`) {
  (reg target:*, reg current:*, reg ddd:dots, reg check_attributes:*, reg use_names:*) -+> V { var target:*, var current:*, var `...`:dots?, var `check.attributes`:*, reg check_attributes_isMissing:L, reg check_attributes_orDefault:*, var `use.names`:*, reg use_names_isMissing:L, reg use_names_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg check_attributes1:*, reg check_attributes2:V, reg c:L, reg r2:V, reg c1:L, reg stop:cls, reg gettextf:cls, reg r3:V, reg p:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg use_names1:*, reg use_names2:V, reg c2:L, reg r9:V, reg c3:L, reg stop1:cls, reg gettextf1:cls, reg r10:V, reg p1:p(V +), reg r12:V, reg check_attributes3:*, reg check_attributes4:V, reg c4:L, reg attr_all_equal:cls, reg target1:*, reg target2:V, reg p2:p(V +), reg current1:*, reg current2:V, reg p3:p(V +), reg ddd1:dots?, reg r16:V, reg r17:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg target3:*, reg target4:V, reg unclass:cls, reg r20:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg current3:*, reg current4:V, reg unclass1:cls, reg r23:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg target5:*, reg target6:V, reg is_list:cls, reg r26:V, reg r27:V, reg c5:L, reg c7:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg c10:L, reg r29:V, reg target7:*, reg target8:V, reg is_vector:cls, reg r30:V, reg r31:V, reg c11:L, reg c12:V, reg c14:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r32:V, reg r33:V, reg msg:*, reg msg1:V, reg c15:cls, reg r34:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r37:V, reg r38:V, reg current5:*, reg current6:V, reg is_list1:cls, reg r39:V, reg r40:V, reg c16:L, reg c18:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r41:V, reg c21:L, reg r42:V, reg current7:*, reg current8:V, reg is_vector1:cls, reg r43:V, reg r44:V, reg c22:L, reg c23:V, reg c25:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r45:V, reg r46:V, reg msg2:*, reg msg3:V, reg c26:cls, reg r47:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r50:V, reg r51:V, reg target9:*, reg target10:V, reg length:cls, reg r52:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r55:V, reg r56:V, reg r57:V, reg current9:*, reg current10:V, reg length1:cls, reg r58:V, reg r59:V, reg c27:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r60:V, reg r61:V, reg msg4:*, reg msg5:V, reg c28:V, reg r62:V, reg c29:L, reg msg6:*, reg msg7:V, reg c30:L, reg msg9:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg grep:cls, reg msg10:*, reg msg11:V, reg p4:p(V +), reg r64:V, reg r65:V, reg __:cls, reg r66:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r67:V, reg r68:V, reg n:*, reg n1:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r69:V, reg r70:V, reg current11:*, reg current12:V, reg length2:cls, reg r71:V, reg min:cls, reg r72:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r73:V, reg r74:V, reg msg12:*, reg msg13:V, reg paste:cls, reg n2:*, reg n3:V, reg p5:p(V +), reg r76:V, reg c31:cls, reg r77:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r79:V, reg r80:V, reg n4:*, reg n5:V, reg r81:I, reg use_names3:*, reg use_names4:V, reg c32:L, reg sym17:cls, reg base17:cls, reg guard17:L, reg r82:V, reg r83:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r84:V, reg r85:V, reg target11:*, reg target12:V, reg names:cls, reg r86:V, reg c33:L, reg r88:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg iseq:*, reg iseq1:V, reg __1:cls, reg r89:V, reg length3:cls, reg r90:V, reg n6:*, reg n7:V, reg r91:V, reg c34:L, reg c36:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r92:V, reg c39:L, reg r93:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r94:V, reg c42:L, reg r95:V, reg current13:*, reg current14:V, reg names1:cls, reg r96:V, reg c43:L, reg c45:L, reg r98:V, reg dr4:V, reg dc2:L, reg dx5:V, reg c47:L, reg dx6:V, reg iseq2:*, reg iseq3:V, reg __2:cls, reg r99:V, reg length4:cls, reg r100:V, reg n8:*, reg n9:V, reg r101:V, reg c48:L, reg c49:V, reg iseq4:*, reg iseq5:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c52:L, reg x:V, reg all_equal:cls, reg target13:*, reg target14:V, reg c53:L, reg target16:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg i5:*, reg i6:V, reg __3:cls, reg r102:V, reg p6:p(V +), reg current15:*, reg current16:V, reg c54:L, reg current18:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg i7:*, reg i8:V, reg __4:cls, reg r104:V, reg p7:p(V +), reg check_attributes5:*, reg check_attributes6:V, reg p8:p(V +), reg use_names5:*, reg use_names6:V, reg p9:p(V +), reg ddd2:dots?, reg r108:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r109:V, reg i11:I, reg r110:V, reg mi:*, reg mi1:V, reg c55:L, reg c56:L, reg sym22:cls, reg base22:cls, reg guard22:L, reg r111:V, reg i16:I, reg r112:V, reg msg14:*, reg msg15:V, reg paste1:cls, reg use_names7:*, reg use_names8:V, reg c57:L, reg c59:V, reg nt:*, reg nt1:V, reg c60:L, reg c62:L, reg nt3:V, reg dr10:V, reg dc5:L, reg dx11:V, reg c64:L, reg dx12:V, reg i17:*, reg i18:V, reg __5:cls, reg r113:V, reg nc:*, reg nc1:V, reg c65:L, reg c67:L, reg dx14:V, reg nc3:V, reg dr12:V, reg dc6:L, reg dx16:V, reg c69:L, reg dx17:V, reg dx18:V, reg i19:*, reg i20:V, reg __6:cls, reg r114:V, reg r115:V, reg c70:L, reg c71:V, reg c73:L, reg dQuote:cls, reg nt4:*, reg nt5:V, reg c74:L, reg nt7:V, reg dr14:V, reg dc7:L, reg dx19:V, reg dx20:V, reg i21:*, reg i22:V, reg __7:cls, reg r116:V, reg p10:p(V +), reg r118:V, reg i23:*, reg i24:V, reg p11:p(V +), reg mi2:*, reg mi3:V, reg p12:p(V +), reg r121:V, reg c75:cls, reg r122:V, reg i25:I, reg sym23:cls, reg base23:cls, reg guard23:L, reg r124:V, reg r125:V, reg msg16:*, reg msg17:V, reg c76:V, reg c77:L, reg msg18:*, reg msg19:V |
    mkenv;
    st target = target;
    st current = current;
    st `...` = ddd;
    check_attributes_isMissing = missing.0(check_attributes);
    if check_attributes_isMissing then L0(TRUE) else L0(check_attributes);
  L0(check_attributes_orDefault):
    st `check.attributes` = check_attributes_orDefault;
    use_names_isMissing = missing.0(use_names);
    if use_names_isMissing then L1(TRUE) else L1(use_names);
  L1(use_names_orDefault):
    st `use.names` = use_names_orDefault;
    sym = ldf `is.logical`;
    base = ldf `is.logical` in base;
    guard = `==`.4(sym, base);
    if guard then L53() else L54();
  L2(r1):
    r2 = `!`(r1);
    c1 = `as.logical`(r2);
    if c1 then L56() else L3();
  L53():
    check_attributes1 = ld `check.attributes`;
    check L55() else D0();
  L54():
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
    if guard1 then L60() else L61();
  L55():
    check_attributes2 = force? check_attributes1;
    checkMissing(check_attributes2);
    c = `is.logical`(check_attributes2);
    goto L2(c);
  L56():
    stop = ldf stop;
    check L57() else D1();
  D1():
    deopt 6 [];
  L5(r8):
    r9 = `!`(r8);
    c3 = `as.logical`(r9);
    if c3 then L63() else L6();
  L57():
    p = prom<V +>{
      gettextf = ldf gettextf;
      r3 = dyn gettextf("'%s' must be logical", "check.attributes");
      return r3;
    };
    r5 = dyn stop[, domain](p, NA_LGL);
    check L58() else D2();
  L60():
    use_names1 = ld `use.names`;
    check L62() else D3();
  L61():
    r7 = dyn base1(<sym use.names>);
    goto L5(r7);
  D2():
    deopt 10 [r5];
  D3():
    deopt 14 [use_names1];
  L6():
    goto L7();
  L7():
    check_attributes3 = ld `check.attributes`;
    check L67() else D6();
  L58():
    goto L4();
  L62():
    use_names2 = force? use_names1;
    checkMissing(use_names2);
    c2 = `is.logical`(use_names2);
    goto L5(c2);
  L63():
    stop1 = ldf stop;
    check L64() else D4();
  D4():
    deopt 19 [];
  D6():
    deopt 26 [check_attributes3];
  L64():
    p1 = prom<V +>{
      gettextf1 = ldf gettextf;
      r10 = dyn gettextf1("'%s' must be logical", "use.names");
      return r10;
    };
    r12 = dyn stop1[, domain](p1, NA_LGL);
    check L65() else D5();
  L67():
    check_attributes4 = force? check_attributes3;
    checkMissing(check_attributes4);
    c4 = `as.logical`(check_attributes4);
    if c4 then L68() else L8();
  D5():
    deopt 23 [r12];
  L8():
    goto L9(NULL);
  L9(r17):
    st msg = r17;
    sym2 = ldf unclass;
    base2 = ldf unclass in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L72() else L73();
  L65():
    goto L7();
  L68():
    attr_all_equal = ldf `attr.all.equal`;
    check L69() else D7();
  D7():
    deopt 29 [];
  L10(r19):
    st target = r19;
    sym3 = ldf unclass;
    base3 = ldf unclass in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L76() else L77();
  L69():
    p2 = prom<V +>{
      target1 = ld target;
      target2 = force? target1;
      checkMissing(target2);
      return target2;
    };
    p3 = prom<V +>{
      current1 = ld current;
      current2 = force? current1;
      checkMissing(current2);
      return current2;
    };
    ddd1 = ld `...`;
    r16 = dyn attr_all_equal[, , `...`](p2, p3, ddd1);
    check L70() else D8();
  L72():
    target3 = ld target;
    check L74() else D9();
  L73():
    r18 = dyn base2(<sym target>);
    goto L10(r18);
  D8():
    deopt 33 [r16];
  D9():
    deopt 39 [target3];
  L11(r22):
    st current = r22;
    sym4 = ldf `is.list`;
    base4 = ldf `is.list` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L80() else L81();
  L70():
    goto L9(r16);
  L74():
    target4 = force? target3;
    checkMissing(target4);
    unclass = ldf unclass in base;
    r20 = dyn unclass(target4);
    check L75() else D10();
  L76():
    current3 = ld current;
    check L78() else D11();
  L77():
    r21 = dyn base3(<sym current>);
    goto L11(r21);
  D10():
    deopt 42 [r20];
  D11():
    deopt 46 [current3];
  L12(r25):
    r27 = `!`(r25);
    c5 = `as.logical`(r27);
    if c5 then L84() else L13(c5);
  L75():
    goto L10(r20);
  L78():
    current4 = force? current3;
    checkMissing(current4);
    unclass1 = ldf unclass in base;
    r23 = dyn unclass1(current4);
    check L79() else D12();
  L80():
    target5 = ld target;
    check L82() else D13();
  L81():
    r24 = dyn base4(<sym target>);
    goto L12(r24);
  D12():
    deopt 49 [r23];
  D13():
    deopt 53 [target5];
  L13(c7):
    c14 = `as.logical`(c7);
    if c14 then L90() else L15();
  L79():
    goto L11(r23);
  L82():
    target6 = force? target5;
    checkMissing(target6);
    is_list = ldf `is.list` in base;
    r26 = dyn is_list(target6);
    check L83() else D14();
  L84():
    sym5 = ldf `is.vector`;
    base5 = ldf `is.vector` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L85() else L86();
  D14():
    deopt 56 [r26];
  L14(c10, r29):
    r31 = `!`(r29);
    c11 = `as.logical`(r31);
    c12 = `&&`(c10, c11);
    goto L13(c12);
  L15():
    sym7 = ldf `is.list`;
    base7 = ldf `is.list` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L97() else L98();
  L83():
    goto L12(r26);
  L85():
    target7 = ld target;
    check L87() else D15();
  L86():
    r28 = dyn base5(<sym target>);
    goto L14(c5, r28);
  L90():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L91() else L92();
  D15():
    deopt 60 [c5, target7];
  L16(r33):
    popenv;
    return r33;
  L18(r38):
    r40 = `!`(r38);
    c16 = `as.logical`(r40);
    if c16 then L101() else L19(c16);
  L87():
    target8 = force? target7;
    checkMissing(target8);
    is_vector = ldf `is.vector` in base;
    r30 = dyn is_vector(target8, "any");
    check L88() else D16();
  L91():
    msg = ld msg;
    check L93() else D17();
  L92():
    r32 = dyn base6(<sym msg>, "target is not list-like");
    goto L16(r32);
  L97():
    current5 = ld current;
    check L99() else D19();
  L98():
    r37 = dyn base7(<sym current>);
    goto L18(r37);
  D16():
    deopt 64 [c5, r30];
  D17():
    deopt 69 [msg];
  D19():
    deopt 79 [current5];
  L19(c18):
    c25 = `as.logical`(c18);
    if c25 then L107() else L21();
  L88():
    goto L14(c5, r30);
  L93():
    msg1 = force? msg;
    checkMissing(msg1);
    c15 = ldf c in base;
    r34 = dyn c15(msg1, "target is not list-like");
    check L94() else D18();
  L99():
    current6 = force? current5;
    checkMissing(current6);
    is_list1 = ldf `is.list` in base;
    r39 = dyn is_list1(current6);
    check L100() else D20();
  L101():
    sym8 = ldf `is.vector`;
    base8 = ldf `is.vector` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L102() else L103();
  D18():
    deopt 73 [r34];
  D20():
    deopt 82 [r39];
  L20(c21, r42):
    r44 = `!`(r42);
    c22 = `as.logical`(r44);
    c23 = `&&`(c21, c22);
    goto L19(c23);
  L21():
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L114() else L115();
  L94():
    goto L16(r34);
  L100():
    goto L18(r39);
  L102():
    current7 = ld current;
    check L104() else D21();
  L103():
    r41 = dyn base8(<sym current>);
    goto L20(c16, r41);
  L107():
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L108() else L109();
  D21():
    deopt 86 [c16, current7];
  L22(r46):
    popenv;
    return r46;
  L24(r51):
    st n = r51;
    sym11 = ldf length;
    base11 = ldf length in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L118() else L119();
  L104():
    current8 = force? current7;
    checkMissing(current8);
    is_vector1 = ldf `is.vector` in base;
    r43 = dyn is_vector1(current8, "any");
    check L105() else D22();
  L108():
    msg2 = ld msg;
    check L110() else D23();
  L109():
    r45 = dyn base9(<sym msg>, "current is not list-like");
    goto L22(r45);
  L114():
    target9 = ld target;
    check L116() else D25();
  L115():
    r50 = dyn base10(<sym target>);
    goto L24(r50);
  D22():
    deopt 90 [c16, r43];
  D23():
    deopt 95 [msg2];
  D25():
    deopt 105 [target9];
  L25(r56, r57):
    r59 = `!=`(r56, r57);
    c27 = `as.logical`(r59);
    if c27 then L122() else L26();
  L105():
    goto L20(c16, r43);
  L110():
    msg3 = force? msg2;
    checkMissing(msg3);
    c26 = ldf c in base;
    r47 = dyn c26(msg3, "current is not list-like");
    check L111() else D24();
  L116():
    target10 = force? target9;
    checkMissing(target10);
    length = ldf length in base;
    r52 = dyn length(target10);
    check L117() else D26();
  L118():
    current9 = ld current;
    check L120() else D27();
  L119():
    r55 = dyn base11(<sym current>);
    goto L25(r51, r55);
  D24():
    deopt 99 [r47];
  D26():
    deopt 108 [r52];
  D27():
    deopt 111 [r51, current9];
  L26():
    goto L34();
  L34():
    sym16 = ldf seq_len;
    base16 = ldf seq_len in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L149() else L150();
  L111():
    goto L22(r47);
  L117():
    goto L24(r52);
  L120():
    current10 = force? current9;
    checkMissing(current10);
    length1 = ldf length in base;
    r58 = dyn length1(current10);
    check L121() else D28();
  L122():
    sym12 = ldf `is.null`;
    base12 = ldf `is.null` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L123() else L124();
  D28():
    deopt 114 [r51, r58];
  L27(r61):
    r62 = `!`(r61);
    c29 = `as.logical`(r62);
    if c29 then L126() else L28();
  L35(r80):
    st iseq = r80;
    use_names3 = ld `use.names`;
    check L152() else D42();
  L121():
    goto L25(r51, r58);
  L123():
    msg4 = ld msg;
    check L125() else D29();
  L124():
    r60 = dyn base12(<sym msg>);
    goto L27(r60);
  L149():
    n4 = ld n;
    check L151() else D41();
  L150():
    r79 = dyn base16(<sym n>);
    goto L35(r79);
  D29():
    deopt 117 [msg4];
  D41():
    deopt 162 [n4];
  D42():
    deopt 166 [use_names3];
  L28():
    goto L30();
  L30():
    sym13 = ldf min;
    base13 = ldf min in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L134() else L135();
  L125():
    msg5 = force? msg4;
    checkMissing(msg5);
    c28 = `==`(msg5, NULL);
    goto L27(c28);
  L126():
    msg6 = ld msg;
    check L127() else D30();
  L151():
    n5 = force? n4;
    checkMissing(n5);
    r81 = seq_len(n5);
    goto L35(r81);
  L152():
    use_names4 = force? use_names3;
    checkMissing(use_names4);
    c32 = `as.logical`(use_names4);
    if c32 then L153() else L36();
  D30():
    deopt 121 [msg6];
  L31(r68):
    st n = r68;
    sym15 = ldf c;
    base15 = ldf c in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L142() else L143();
  L36():
    goto L44();
  L44():
    iseq4 = ld iseq;
    check L181() else D53();
  L127():
    msg7 = force? msg6;
    checkMissing(msg7);
    c30 = `is.object`(msg7);
    if c30 then L128() else L129(msg7);
  L134():
    n = ld n;
    check L136() else D33();
  L135():
    r67 = dyn base13(<sym n>, <lang length(current)>);
    goto L31(r67);
  L153():
    sym17 = ldf length;
    base17 = ldf length in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L154() else L155();
  D33():
    deopt 135 [n];
  D53():
    deopt 204 [iseq4];
  L29(dx1):
    st msg = dx1;
    goto L30();
  L33(r74):
    st msg = r74;
    goto L34();
  L37(r83):
    n6 = ld n;
    check L165() else D47();
  L128():
    dr = tryDispatchBuiltin.1("[", msg7);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L130() else L129(dr);
  L129(msg9):
    grep = ldf grep;
    check L131() else D31();
  L136():
    n1 = force? n;
    checkMissing(n1);
    sym14 = ldf length;
    base14 = ldf length in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L137() else L138();
  L142():
    msg12 = ld msg;
    check L144() else D37();
  L143():
    r73 = dyn base15(<sym msg>, <lang paste("Length mismatch: comparison on first", n, "components")>);
    goto L33(r73);
  L154():
    sym18 = ldf names;
    base18 = ldf names in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L156() else L157();
  L155():
    r82 = dyn base17(<lang `<-`(nt, `[`(names(target), iseq))>);
    goto L37(r82);
  L181():
    iseq5 = force? iseq4;
    checkMissing(iseq5);
    s = toForSeq(iseq5);
    l = length(s);
    i = 0;
    goto L45(i);
  D31():
    deopt 124 [msg9];
  D37():
    deopt 148 [msg12];
  D47():
    deopt 181 [r83, n6];
  L32(r70):
    min = ldf min in base;
    r72 = dyn min(n1, r70);
    check L141() else D36();
  L38(r85):
    c33 = `is.object`(r85);
    if c33 then L160() else L161(r85);
  L45(i1):
    i2 = `+`.1(i1, 1);
    c52 = `<`.1(l, i2);
    if c52 then L182() else L50();
  L130():
    dx = getTryDispatchBuiltinValue(dr);
    goto L29(dx);
  L131():
    p4 = prom<V +>{
      msg10 = ld msg;
      msg11 = force? msg10;
      checkMissing(msg11);
      return msg11;
    };
    r64 = dyn grep("\\bLengths\\b", p4);
    check L132() else D32();
  L137():
    current11 = ld current;
    check L139() else D34();
  L138():
    r69 = dyn base14(<sym current>);
    goto L32(r69);
  L144():
    msg13 = force? msg12;
    checkMissing(msg13);
    paste = ldf paste;
    check L145() else D38();
  L156():
    target11 = ld target;
    check L158() else D43();
  L157():
    r84 = dyn base18(<sym target>);
    goto L38(r84);
  L165():
    n7 = force? n6;
    checkMissing(n7);
    r91 = `==`(r83, n7);
    c34 = `as.logical`(r91);
    if c34 then L166() else L40(c34);
  D32():
    deopt 127 [msg9, r64];
  D34():
    deopt 139 [current11];
  D36():
    deopt 144 [r72];
  D38():
    deopt 151 [];
  D43():
    deopt 172 [target11];
  L39(dx4):
    st nt = dx4;
    length3 = ldf length in base;
    r90 = dyn length3(dx4);
    check L164() else D46();
  L40(c36):
    st `use.names` = c36;
    goto L44();
  L50():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    all_equal = ldf `all.equal`;
    check L183() else D54();
  L132():
    r65 = `-`(<missing>, r64);
    __ = ldf `[` in base;
    r66 = dyn __(msg9, r65);
    goto L29(r66);
  L139():
    current12 = force? current11;
    checkMissing(current12);
    length2 = ldf length in base;
    r71 = dyn length2(current12);
    check L140() else D35();
  L141():
    goto L31(r72);
  L145():
    p5 = prom<V +>{
      n2 = ld n;
      n3 = force? n2;
      checkMissing(n3);
      return n3;
    };
    r76 = dyn paste("Length mismatch: comparison on first", p5, "components");
    check L146() else D39();
  L158():
    target12 = force? target11;
    checkMissing(target12);
    names = ldf names in base;
    r86 = dyn names(target12);
    check L159() else D44();
  L160():
    dr2 = tryDispatchBuiltin.1("[", r85);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L162() else L161(dr2);
  L161(r88):
    iseq = ld iseq;
    check L163() else D45();
  L166():
    sym19 = ldf length;
    base19 = ldf length in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L167() else L168();
  L182():
    sym23 = ldf `is.null`;
    base23 = ldf `is.null` in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L196() else L197();
  D35():
    deopt 142 [r71];
  D39():
    deopt 155 [r76];
  D44():
    deopt 175 [r86];
  D45():
    deopt 176 [r88, iseq];
  D46():
    deopt 181 [r90];
  D54():
    deopt 207 [i2];
  L41(c39, r93):
    n8 = ld n;
    check L178() else D52();
  L51(r125):
    c77 = `as.logical`(r125);
    if c77 then L199() else L52();
  L140():
    goto L32(r71);
  L146():
    c31 = ldf c in base;
    r77 = dyn c31(msg13, r76);
    check L147() else D40();
  L159():
    goto L38(r86);
  L162():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L39(dx3);
  L163():
    iseq1 = force? iseq;
    __1 = ldf `[` in base;
    r89 = dyn __1(r88, iseq1);
    goto L39(r89);
  L164():
    goto L37(r90);
  L167():
    sym20 = ldf names;
    base20 = ldf names in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L169() else L170();
  L168():
    r92 = dyn base19(<lang `<-`(nc, `[`(names(current), iseq))>);
    goto L41(c34, r92);
  L183():
    p6 = prom<V +>{
      target13 = ld target;
      target14 = force? target13;
      checkMissing(target14);
      c53 = `is.object`(target14);
      if c53 then L1() else L2(target14);
    L0(dx8):
      return dx8;
    L1():
      dr6 = tryDispatchBuiltin.1("[[", target14);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(target16):
      i5 = ld i;
      i6 = force? i5;
      __3 = ldf `[[` in base;
      r102 = dyn __3(target16, i6);
      goto L0(r102);
    L3():
      dx7 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx7);
    };
    p7 = prom<V +>{
      current15 = ld current;
      current16 = force? current15;
      checkMissing(current16);
      c54 = `is.object`(current16);
      if c54 then L1() else L2(current16);
    L0(dx10):
      return dx10;
    L1():
      dr8 = tryDispatchBuiltin.1("[[", current16);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(current18):
      i7 = ld i;
      i8 = force? i7;
      __4 = ldf `[[` in base;
      r104 = dyn __4(current18, i8);
      goto L0(r104);
    L3():
      dx9 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx9);
    };
    p8 = prom<V +>{
      check_attributes5 = ld `check.attributes`;
      check_attributes6 = force? check_attributes5;
      checkMissing(check_attributes6);
      return check_attributes6;
    };
    p9 = prom<V +>{
      use_names5 = ld `use.names`;
      use_names6 = force? use_names5;
      checkMissing(use_names6);
      return use_names6;
    };
    ddd2 = ld `...`;
    r108 = dyn all_equal[, , `check.attributes`, `use.names`, `...`](p6, p7, p8, p9, ddd2);
    check L184() else D55();
  L196():
    msg16 = ld msg;
    check L198() else D61();
  L197():
    r124 = dyn base23(<sym msg>);
    goto L51(r124);
  D40():
    deopt 157 [r77];
  D52():
    deopt 197 [c39, r93, n8];
  D55():
    deopt 215 [i2, r108];
  D61():
    deopt 241 [msg16];
  L42(c42, r95):
    c43 = `is.object`(r95);
    if c43 then L173() else L174(c42, r95);
  L52():
    msg18 = ld msg;
    check L201() else D62();
  L147():
    goto L33(r77);
  L169():
    current13 = ld current;
    check L171() else D48();
  L170():
    r94 = dyn base20(<sym current>);
    goto L42(c34, r94);
  L178():
    n9 = force? n8;
    checkMissing(n9);
    r101 = `==`(r93, n9);
    c48 = `as.logical`(r101);
    c49 = `&&`(c39, c48);
    goto L40(c49);
  L184():
    st mi = r108;
    sym21 = ldf `is.character`;
    base21 = ldf `is.character` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L185() else L186();
  L198():
    msg17 = force? msg16;
    checkMissing(msg17);
    c76 = `==`(msg17, NULL);
    goto L51(c76);
  L199():
    popenv;
    return TRUE;
  D48():
    deopt 188 [c34, current13];
  D62():
    deopt 246 [msg18];
  L43(c47, dx6):
    st nc = dx6;
    length4 = ldf length in base;
    r100 = dyn length4(dx6);
    check L177() else D51();
  L46(i11, r110):
    c56 = `as.logical`(r110);
    if c56 then L188() else L47();
  L171():
    current14 = force? current13;
    checkMissing(current14);
    names1 = ldf names in base;
    r96 = dyn names1(current14);
    check L172() else D49();
  L173():
    dr4 = tryDispatchBuiltin.1("[", r95);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L175() else L174(c42, dr4);
  L174(c45, r98):
    iseq2 = ld iseq;
    check L176() else D50();
  L185():
    mi = ld mi;
    check L187() else D56();
  L186():
    r109 = dyn base21(<sym mi>);
    goto L46(i2, r109);
  L201():
    msg19 = force? msg18;
    checkMissing(msg19);
    popenv;
    return msg19;
  D49():
    deopt 191 [c34, r96];
  D50():
    deopt 192 [c45, r98, iseq2];
  D51():
    deopt 197 [c47, r100];
  D56():
    deopt 218 [i2, mi];
  L47():
    goto L49(i11);
  L49(i25):
    goto L45(i25);
  L172():
    goto L42(c34, r96);
  L175():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L43(c42, dx5);
  L176():
    iseq3 = force? iseq2;
    __2 = ldf `[` in base;
    r99 = dyn __2(r98, iseq3);
    goto L43(c45, r99);
  L177():
    goto L41(c47, r100);
  L187():
    mi1 = force? mi;
    checkMissing(mi1);
    c55 = `is.character`(mi1);
    goto L46(i2, c55);
  L188():
    sym22 = ldf c;
    base22 = ldf c in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L189() else L190();
  L48(i16, r112):
    st msg = r112;
    goto L49(i16);
  L189():
    msg14 = ld msg;
    check L191() else D57();
  L190():
    r111 = dyn base22(<sym msg>, <lang paste0("Component ", if(`&&`(use.names, `==`(`[`(nt, i), `[`(nc, i))), dQuote(`[`(nt, i)), i), ": ", mi)>);
    goto L48(i11, r111);
  D57():
    deopt 223 [i11, msg14];
  L191():
    msg15 = force? msg14;
    checkMissing(msg15);
    paste1 = ldf paste0;
    check L192() else D58();
  D58():
    deopt 226 [i11];
  L192():
    p11 = prom<V +>{
      use_names7 = ld `use.names`;
      use_names8 = force? use_names7;
      checkMissing(use_names8);
      c57 = `as.logical`(use_names8);
      if c57 then L4() else L0(c57);
    L0(c59):
      c73 = `as.logical`(c59);
      if c73 then L12() else L3();
    L4():
      nt = ld nt;
      nt1 = force? nt;
      checkMissing(nt1);
      c60 = `is.object`(nt1);
      if c60 then L5() else L6(c57, nt1);
    L1(c64, dx12):
      nc = ld nc;
      nc1 = force? nc;
      checkMissing(nc1);
      c65 = `is.object`(nc1);
      if c65 then L8() else L9(c64, dx12, nc1);
    L3():
      i23 = ld i;
      i24 = force? i23;
      checkMissing(i24);
      return i24;
    L5():
      dr10 = tryDispatchBuiltin.1("[", nt1);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L7() else L6(c57, dr10);
    L6(c62, nt3):
      i17 = ld i;
      i18 = force? i17;
      __5 = ldf `[` in base;
      r113 = dyn __5(nt3, i18);
      goto L1(c62, r113);
    L12():
      dQuote = ldf dQuote;
      p10 = prom<V +>{
        nt4 = ld nt;
        nt5 = force? nt4;
        checkMissing(nt5);
        c74 = `is.object`(nt5);
        if c74 then L1() else L2(nt5);
      L0(dx20):
        return dx20;
      L1():
        dr14 = tryDispatchBuiltin.1("[", nt5);
        dc7 = getTryDispatchBuiltinDispatched(dr14);
        if dc7 then L3() else L2(dr14);
      L2(nt7):
        i21 = ld i;
        i22 = force? i21;
        __7 = ldf `[` in base;
        r116 = dyn __7(nt7, i22);
        goto L0(r116);
      L3():
        dx19 = getTryDispatchBuiltinValue(dr14);
        goto L0(dx19);
      };
      r118 = dyn dQuote(p10);
      return r118;
    L2(c69, dx17, dx18):
      r115 = `==`(dx17, dx18);
      c70 = `as.logical`(r115);
      c71 = `&&`(c69, c70);
      goto L0(c71);
    L7():
      dx11 = getTryDispatchBuiltinValue(dr10);
      goto L1(c57, dx11);
    L8():
      dr12 = tryDispatchBuiltin.1("[", nc1);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L10() else L9(c64, dx12, dr12);
    L9(c67, dx14, nc3):
      i19 = ld i;
      i20 = force? i19;
      __6 = ldf `[` in base;
      r114 = dyn __6(nc3, i20);
      goto L2(c67, dx14, r114);
    L10():
      dx16 = getTryDispatchBuiltinValue(dr12);
      goto L2(c64, dx12, dx16);
    };
    p12 = prom<V +>{
      mi2 = ld mi;
      mi3 = force? mi2;
      checkMissing(mi3);
      return mi3;
    };
    r121 = dyn paste1("Component ", p11, ": ", p12);
    check L193() else D59();
  D59():
    deopt 231 [i11, r121];
  L193():
    c75 = ldf c in base;
    r122 = dyn c75(msg15, r121);
    check L194() else D60();
  D60():
    deopt 233 [i11, r122];
  L194():
    goto L48(i11, r122);
  }
}