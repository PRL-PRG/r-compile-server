fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner348454353;
    st `all.equal.character` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner348454353(target, current, `...`, `check.attributes`) {
  (reg target:*, reg current:*, reg ddd:dots, reg check_attributes:*) -+> V { var target:*, var current:*, var `...`:dots?, var `check.attributes`:*, reg check_attributes_isMissing:L, reg check_attributes_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg check_attributes1:*, reg check_attributes2:V, reg c:L, reg r2:V, reg c1:L, reg stop:cls, reg gettextf:cls, reg r3:V, reg p:p(V +), reg r5:V, reg check_attributes3:*, reg check_attributes4:V, reg c2:L, reg attr_all_equal:cls, reg target1:*, reg target2:V, reg p1:p(V +), reg current1:*, reg current2:V, reg p2:p(V +), reg ddd1:dots?, reg r9:V, reg r10:V, reg data_class:cls, reg target3:*, reg target4:V, reg p3:p(V +), reg r12:V, reg data_class1:cls, reg current3:*, reg current4:V, reg p4:p(V +), reg r14:V, reg r15:V, reg c3:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg r17:V, reg msg:*, reg msg1:V, reg paste0:cls, reg data_class2:cls, reg target5:*, reg target6:V, reg p5:p(V +), reg r19:V, reg p6:p(V +), reg data_class3:cls, reg current5:*, reg current6:V, reg p7:p(V +), reg r22:V, reg p8:p(V +), reg r24:V, reg c4:cls, reg r25:V, reg msg2:*, reg msg3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r28:V, reg r29:V, reg target7:*, reg target8:V, reg length:cls, reg r30:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r31:V, reg r32:V, reg current7:*, reg current8:V, reg length1:cls, reg r33:V, reg lt:*, reg lt1:V, reg lc:*, reg lc1:V, reg r34:V, reg c5:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r35:V, reg r36:V, reg msg4:*, reg msg5:V, reg c6:V, reg r37:V, reg c7:L, reg msg6:*, reg msg7:V, reg c8:L, reg msg9:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg grep:cls, reg msg10:*, reg msg11:V, reg p9:p(V +), reg r39:V, reg r40:V, reg __:cls, reg r41:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r42:V, reg r43:V, reg msg12:*, reg msg13:V, reg paste1:cls, reg lt2:*, reg lt3:V, reg p10:p(V +), reg lc2:*, reg lc3:V, reg p11:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r46:V, reg r47:V, reg lt4:*, reg lt5:V, reg lc4:*, reg lc5:V, reg min:cls, reg r48:V, reg p12:p(V +), reg r50:V, reg c9:cls, reg r51:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r52:V, reg r53:V, reg ll:*, reg ll1:V, reg r54:I, reg target9:*, reg target10:V, reg c10:L, reg target12:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg ll2:*, reg ll3:V, reg __1:cls, reg r55:V, reg current9:*, reg current10:V, reg c11:L, reg current12:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg ll4:*, reg ll5:V, reg __2:cls, reg r56:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r57:V, reg r58:V, reg target13:*, reg target14:V, reg is_na:cls, reg r59:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r60:V, reg r61:V, reg current13:*, reg current14:V, reg is_na1:cls, reg r62:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r63:V, reg r64:V, reg nas:*, reg nas1:V, reg nasc:*, reg nasc1:V, reg r65:V, reg any:cls, reg r66:V, reg c12:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r67:V, reg r68:V, reg msg14:*, reg msg15:V, reg paste2:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r69:V, reg r70:V, reg nasc2:*, reg nasc3:V, reg sum:cls, reg r71:V, reg p13:p(V +), reg sym13:cls, reg base13:cls, reg guard13:L, reg r73:V, reg r74:V, reg nas2:*, reg nas3:V, reg sum1:cls, reg r75:V, reg p14:p(V +), reg r77:V, reg c13:cls, reg r78:V, reg msg16:*, reg msg17:V, reg nas4:*, reg nas5:V, reg r81:V, reg target15:*, reg target16:V, reg current15:*, reg current16:V, reg r82:V, reg r83:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r84:V, reg r85:V, reg ne:*, reg ne1:V, reg any1:cls, reg r86:V, reg r87:V, reg c14:L, reg c16:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r88:V, reg c19:L, reg r89:V, reg msg18:*, reg msg19:V, reg c20:V, reg c21:L, reg c22:V, reg c24:L, reg sym16:cls, reg base16:cls, reg guard16:L, reg r90:V, reg r91:V, reg ne2:*, reg ne3:V, reg sum2:cls, reg r92:V, reg r93:V, reg c25:L, reg sym17:cls, reg base17:cls, reg guard17:L, reg r94:V, reg r95:V, reg msg20:*, reg msg21:V, reg paste3:cls, reg r96:V, reg c26:cls, reg r97:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r98:V, reg r99:V, reg ne4:*, reg ne5:V, reg sum3:cls, reg r100:V, reg r101:V, reg c27:L, reg sym19:cls, reg base19:cls, reg guard19:L, reg r102:V, reg r103:V, reg msg22:*, reg msg23:V, reg paste4:cls, reg sym20:cls, reg base20:cls, reg guard20:L, reg r104:V, reg r105:V, reg ne6:*, reg ne7:V, reg sum4:cls, reg r106:V, reg p15:p(V +), reg r108:V, reg c28:cls, reg r109:V, reg msg24:*, reg msg25:V |
    mkenv;
    st target = target;
    st current = current;
    st `...` = ddd;
    check_attributes_isMissing = missing.0(check_attributes);
    if check_attributes_isMissing then L0(TRUE) else L0(check_attributes);
  L0(check_attributes_orDefault):
    st `check.attributes` = check_attributes_orDefault;
    sym = ldf `is.logical`;
    base = ldf `is.logical` in base;
    guard = `==`.4(sym, base);
    if guard then L37() else L38();
  L1(r1):
    r2 = `!`(r1);
    c1 = `as.logical`(r2);
    if c1 then L40() else L2();
  L37():
    check_attributes1 = ld `check.attributes`;
    check L39() else D0();
  L38():
    r = dyn base(<sym check.attributes>);
    goto L1(r);
  D0():
    deopt 1 [check_attributes1];
  L2():
    goto L3();
  L3():
    check_attributes3 = ld `check.attributes`;
    check L44() else D3();
  L39():
    check_attributes2 = force? check_attributes1;
    checkMissing(check_attributes2);
    c = `is.logical`(check_attributes2);
    goto L1(c);
  L40():
    stop = ldf stop;
    check L41() else D1();
  D1():
    deopt 6 [];
  D3():
    deopt 13 [check_attributes3];
  L41():
    p = prom<V +>{
      gettextf = ldf gettextf;
      r3 = dyn gettextf("'%s' must be logical", "check.attributes");
      return r3;
    };
    r5 = dyn stop[, domain](p, NA_LGL);
    check L42() else D2();
  L44():
    check_attributes4 = force? check_attributes3;
    checkMissing(check_attributes4);
    c2 = `as.logical`(check_attributes4);
    if c2 then L45() else L4();
  D2():
    deopt 10 [r5];
  L4():
    goto L5(NULL);
  L5(r10):
    st msg = r10;
    data_class = ldf `data.class`;
    check L49() else D6();
  L42():
    goto L3();
  L45():
    attr_all_equal = ldf `attr.all.equal`;
    check L46() else D4();
  D4():
    deopt 16 [];
  D6():
    deopt 25 [];
  L46():
    p1 = prom<V +>{
      target1 = ld target;
      target2 = force? target1;
      checkMissing(target2);
      return target2;
    };
    p2 = prom<V +>{
      current1 = ld current;
      current2 = force? current1;
      checkMissing(current2);
      return current2;
    };
    ddd1 = ld `...`;
    r9 = dyn attr_all_equal[, , `...`](p1, p2, ddd1);
    check L47() else D5();
  L49():
    p3 = prom<V +>{
      target3 = ld target;
      target4 = force? target3;
      checkMissing(target4);
      return target4;
    };
    r12 = dyn data_class(p3);
    check L50() else D7();
  D5():
    deopt 20 [r9];
  D7():
    deopt 27 [r12];
  L47():
    goto L5(r9);
  L50():
    data_class1 = ldf `data.class`;
    check L51() else D8();
  D8():
    deopt 28 [r12];
  L51():
    p4 = prom<V +>{
      current3 = ld current;
      current4 = force? current3;
      checkMissing(current4);
      return current4;
    };
    r14 = dyn data_class1(p4);
    check L52() else D9();
  D9():
    deopt 30 [r12, r14];
  L52():
    r15 = `!=`(r12, r14);
    c3 = `as.logical`(r15);
    if c3 then L53() else L6();
  L6():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L63() else L64();
  L53():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L54() else L55();
  L7(r17):
    st msg = r17;
    msg2 = ld msg;
    check L60() else D14();
  L9(r29):
    st lt = r29;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L67() else L68();
  L54():
    msg = ld msg;
    check L56() else D10();
  L55():
    r16 = dyn base1(<sym msg>, <lang paste0("target is ", data.class(target), ", current is ", data.class(current))>);
    goto L7(r16);
  L63():
    target7 = ld target;
    check L65() else D15();
  L64():
    r28 = dyn base2(<sym target>);
    goto L9(r28);
  D10():
    deopt 34 [msg];
  D14():
    deopt 46 [msg2];
  D15():
    deopt 53 [target7];
  L10(r32):
    st lc = r32;
    lt = ld lt;
    check L71() else D19();
  L56():
    msg1 = force? msg;
    checkMissing(msg1);
    paste0 = ldf paste0;
    check L57() else D11();
  L60():
    msg3 = force? msg2;
    checkMissing(msg3);
    popenv;
    return msg3;
  L65():
    target8 = force? target7;
    checkMissing(target8);
    length = ldf length in base;
    r30 = dyn length(target8);
    check L66() else D16();
  L67():
    current7 = ld current;
    check L69() else D17();
  L68():
    r31 = dyn base3(<sym current>);
    goto L10(r31);
  D11():
    deopt 37 [];
  D16():
    deopt 56 [r30];
  D17():
    deopt 60 [current7];
  D19():
    deopt 65 [lt];
  L57():
    p6 = prom<V +>{
      data_class2 = ldf `data.class`;
      p5 = prom<V +>{
        target5 = ld target;
        target6 = force? target5;
        checkMissing(target6);
        return target6;
      };
      r19 = dyn data_class2(p5);
      return r19;
    };
    p8 = prom<V +>{
      data_class3 = ldf `data.class`;
      p7 = prom<V +>{
        current5 = ld current;
        current6 = force? current5;
        checkMissing(current6);
        return current6;
      };
      r22 = dyn data_class3(p7);
      return r22;
    };
    r24 = dyn paste0("target is ", p6, ", current is ", p8);
    check L58() else D12();
  L66():
    goto L9(r30);
  L69():
    current8 = force? current7;
    checkMissing(current8);
    length1 = ldf length in base;
    r33 = dyn length1(current8);
    check L70() else D18();
  L71():
    lt1 = force? lt;
    checkMissing(lt1);
    lc = ld lc;
    check L72() else D20();
  D12():
    deopt 42 [r24];
  D18():
    deopt 63 [r33];
  D20():
    deopt 66 [lt1, lc];
  L58():
    c4 = ldf c in base;
    r25 = dyn c4(msg1, r24);
    check L59() else D13();
  L70():
    goto L10(r33);
  L72():
    lc1 = force? lc;
    checkMissing(lc1);
    r34 = `!=`(lt1, lc1);
    c5 = `as.logical`(r34);
    if c5 then L73() else L11();
  D13():
    deopt 44 [r25];
  L11():
    goto L20();
  L20():
    sym8 = ldf `is.na`;
    base8 = ldf `is.na` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L105() else L106();
  L59():
    goto L7(r25);
  L73():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L74() else L75();
  L12(r36):
    r37 = `!`(r36);
    c7 = `as.logical`(r37);
    if c7 then L77() else L13();
  L21(r58):
    st nas = r58;
    sym9 = ldf `is.na`;
    base9 = ldf `is.na` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L109() else L110();
  L74():
    msg4 = ld msg;
    check L76() else D21();
  L75():
    r35 = dyn base4(<sym msg>);
    goto L12(r35);
  L105():
    target13 = ld target;
    check L107() else D34();
  L106():
    r57 = dyn base8(<sym target>);
    goto L21(r57);
  D21():
    deopt 70 [msg4];
  D34():
    deopt 124 [target13];
  L13():
    goto L15();
  L15():
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L85() else L86();
  L22(r61):
    st nasc = r61;
    sym10 = ldf any;
    base10 = ldf any in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L113() else L114();
  L76():
    msg5 = force? msg4;
    checkMissing(msg5);
    c6 = `==`(msg5, NULL);
    goto L12(c6);
  L77():
    msg6 = ld msg;
    check L78() else D22();
  L107():
    target14 = force? target13;
    checkMissing(target14);
    is_na = ldf `is.na` in base;
    r59 = dyn is_na(target14);
    check L108() else D35();
  L109():
    current13 = ld current;
    check L111() else D36();
  L110():
    r60 = dyn base9(<sym current>);
    goto L22(r60);
  D22():
    deopt 74 [msg6];
  D35():
    deopt 127 [r59];
  D36():
    deopt 131 [current13];
  L16(r43):
    st msg = r43;
    sym7 = ldf seq_len;
    base7 = ldf seq_len in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L91() else L92();
  L23(r64):
    c12 = `as.logical`(r64);
    if c12 then L118() else L24();
  L78():
    msg7 = force? msg6;
    checkMissing(msg7);
    c8 = `is.object`(msg7);
    if c8 then L79() else L80(msg7);
  L85():
    msg12 = ld msg;
    check L87() else D25();
  L86():
    r42 = dyn base5(<sym msg>, <lang paste0("Lengths (", lt, ", ", lc, ") differ (string compare on first ", `<-`(ll, min(lt, lc)), ")")>);
    goto L16(r42);
  L108():
    goto L21(r59);
  L111():
    current14 = force? current13;
    checkMissing(current14);
    is_na1 = ldf `is.na` in base;
    r62 = dyn is_na1(current14);
    check L112() else D37();
  L113():
    nas = ld nas;
    check L115() else D38();
  L114():
    r63 = dyn base10(<lang `!=`(nas, nasc)>);
    goto L23(r63);
  D25():
    deopt 88 [msg12];
  D37():
    deopt 134 [r62];
  D38():
    deopt 138 [nas];
  L14(dx1):
    st msg = dx1;
    goto L15();
  L17(r53):
    st ll = r53;
    target9 = ld target;
    check L94() else D30();
  L24():
    nas4 = ld nas;
    check L128() else D46();
  L79():
    dr = tryDispatchBuiltin.1("[", msg7);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L81() else L80(dr);
  L80(msg9):
    grep = ldf grep;
    check L82() else D23();
  L87():
    msg13 = force? msg12;
    checkMissing(msg13);
    paste1 = ldf paste0;
    check L88() else D26();
  L91():
    ll = ld ll;
    check L93() else D29();
  L92():
    r52 = dyn base7(<sym ll>);
    goto L17(r52);
  L112():
    goto L22(r62);
  L115():
    nas1 = force? nas;
    checkMissing(nas1);
    nasc = ld nasc;
    check L116() else D39();
  L118():
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L119() else L120();
  D23():
    deopt 77 [msg9];
  D26():
    deopt 91 [];
  D29():
    deopt 104 [ll];
  D30():
    deopt 108 [target9];
  D39():
    deopt 139 [nas1, nasc];
  D46():
    deopt 164 [nas4];
  L25(r68):
    st msg = r68;
    msg16 = ld msg;
    check L125() else D45();
  L81():
    dx = getTryDispatchBuiltinValue(dr);
    goto L14(dx);
  L82():
    p9 = prom<V +>{
      msg10 = ld msg;
      msg11 = force? msg10;
      checkMissing(msg11);
      return msg11;
    };
    r39 = dyn grep("\\bLengths\\b", p9);
    check L83() else D24();
  L88():
    p10 = prom<V +>{
      lt2 = ld lt;
      lt3 = force? lt2;
      checkMissing(lt3);
      return lt3;
    };
    p11 = prom<V +>{
      lc2 = ld lc;
      lc3 = force? lc2;
      checkMissing(lc3);
      return lc3;
    };
    p12 = prom<V +>{
      sym6 = ldf min;
      base6 = ldf min in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r47):
      st ll = r47;
      invisible.0();
      return r47;
    L1():
      lt4 = ld lt;
      lt5 = force? lt4;
      checkMissing(lt5);
      lc4 = ld lc;
      lc5 = force? lc4;
      checkMissing(lc5);
      min = ldf min in base;
      r48 = dyn min(lt5, lc5);
      goto L0(r48);
    L2():
      r46 = dyn base6(<sym lt>, <sym lc>);
      goto L0(r46);
    };
    r50 = dyn paste1("Lengths (", p10, ", ", p11, ") differ (string compare on first ", p12, ")");
    check L89() else D27();
  L93():
    ll1 = force? ll;
    checkMissing(ll1);
    r54 = seq_len(ll1);
    goto L17(r54);
  L94():
    target10 = force? target9;
    checkMissing(target10);
    c10 = `is.object`(target10);
    if c10 then L95() else L96(target10);
  L116():
    nasc1 = force? nasc;
    checkMissing(nasc1);
    r65 = `!=`(nas1, nasc1);
    any = ldf any in base;
    r66 = dyn any(r65);
    check L117() else D40();
  L119():
    msg14 = ld msg;
    check L121() else D41();
  L120():
    r67 = dyn base11(<sym msg>, <lang paste("'is.NA' value mismatch:", sum(nasc), "in current", sum(nas), "in target")>);
    goto L25(r67);
  L128():
    nas5 = force? nas4;
    checkMissing(nas5);
    r81 = `!`(nas5);
    target15 = ld target;
    check L129() else D47();
  D24():
    deopt 80 [msg9, r39];
  D27():
    deopt 99 [r50];
  D40():
    deopt 143 [r66];
  D41():
    deopt 146 [msg14];
  D45():
    deopt 159 [msg16];
  D47():
    deopt 166 [r81, target15];
  L18(dx4):
    st target = dx4;
    current9 = ld current;
    check L99() else D32();
  L83():
    r40 = `-`(<missing>, r39);
    __ = ldf `[` in base;
    r41 = dyn __(msg9, r40);
    goto L14(r41);
  L89():
    c9 = ldf c in base;
    r51 = dyn c9(msg13, r50);
    check L90() else D28();
  L95():
    dr2 = tryDispatchBuiltin.1("[", target10);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L97() else L96(dr2);
  L96(target12):
    ll2 = ld ll;
    check L98() else D31();
  L117():
    goto L23(r66);
  L121():
    msg15 = force? msg14;
    checkMissing(msg15);
    paste2 = ldf paste;
    check L122() else D42();
  L125():
    msg17 = force? msg16;
    checkMissing(msg17);
    popenv;
    return msg17;
  L129():
    target16 = force? target15;
    checkMissing(target16);
    current15 = ld current;
    check L130() else D48();
  D28():
    deopt 101 [r51];
  D31():
    deopt 110 [target12, ll2];
  D32():
    deopt 114 [current9];
  D42():
    deopt 149 [];
  D48():
    deopt 167 [r81, target16, current15];
  L90():
    goto L16(r51);
  L97():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L18(dx3);
  L98():
    ll3 = force? ll2;
    __1 = ldf `[` in base;
    r55 = dyn __1(target12, ll3);
    goto L18(r55);
  L99():
    current10 = force? current9;
    checkMissing(current10);
    c11 = `is.object`(current10);
    if c11 then L100() else L101(current10);
  L122():
    p13 = prom<V +>{
      sym12 = ldf sum;
      base12 = ldf sum in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L1() else L2();
    L0(r70):
      return r70;
    L1():
      nasc2 = ld nasc;
      nasc3 = force? nasc2;
      checkMissing(nasc3);
      sum = ldf sum in base;
      r71 = dyn sum(nasc3);
      goto L0(r71);
    L2():
      r69 = dyn base12(<sym nasc>);
      goto L0(r69);
    };
    p14 = prom<V +>{
      sym13 = ldf sum;
      base13 = ldf sum in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r74):
      return r74;
    L1():
      nas2 = ld nas;
      nas3 = force? nas2;
      checkMissing(nas3);
      sum1 = ldf sum in base;
      r75 = dyn sum1(nas3);
      goto L0(r75);
    L2():
      r73 = dyn base13(<sym nas>);
      goto L0(r73);
    };
    r77 = dyn paste2("'is.NA' value mismatch:", p13, "in current", p14, "in target");
    check L123() else D43();
  L130():
    current16 = force? current15;
    checkMissing(current16);
    r82 = `!=`(target16, current16);
    r83 = `&&`(r81, r82);
    st ne = r83;
    sym14 = ldf any;
    base14 = ldf any in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L131() else L132();
  D43():
    deopt 155 [r77];
  L19(dx6):
    st current = dx6;
    goto L20();
  L27(r85):
    r87 = `!`(r85);
    c14 = `as.logical`(r87);
    if c14 then L135() else L28(c14);
  L100():
    dr4 = tryDispatchBuiltin.1("[", current10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L102() else L101(dr4);
  L101(current12):
    ll4 = ld ll;
    check L103() else D33();
  L123():
    c13 = ldf c in base;
    r78 = dyn c13(msg15, r77);
    check L124() else D44();
  L131():
    ne = ld ne;
    check L133() else D49();
  L132():
    r84 = dyn base14(<sym ne>);
    goto L27(r84);
  D33():
    deopt 116 [current12, ll4];
  D44():
    deopt 157 [r78];
  D49():
    deopt 174 [ne];
  L28(c16):
    c24 = `as.logical`(c16);
    if c24 then L140() else L30();
  L102():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L19(dx5);
  L103():
    ll5 = force? ll4;
    __2 = ldf `[` in base;
    r56 = dyn __2(current12, ll5);
    goto L19(r56);
  L124():
    goto L25(r78);
  L133():
    ne1 = force? ne;
    checkMissing(ne1);
    any1 = ldf any in base;
    r86 = dyn any1(ne1);
    check L134() else D50();
  L135():
    sym15 = ldf `is.null`;
    base15 = ldf `is.null` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L136() else L137();
  D50():
    deopt 177 [r86];
  L29(c19, r89):
    c21 = `as.logical`(r89);
    c22 = `&&`(c19, c21);
    goto L28(c22);
  L30():
    sym16 = ldf sum;
    base16 = ldf sum in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L142() else L143();
  L134():
    goto L27(r86);
  L136():
    msg18 = ld msg;
    check L138() else D51();
  L137():
    r88 = dyn base15(<sym msg>);
    goto L29(c14, r88);
  L140():
    popenv;
    return TRUE;
  D51():
    deopt 180 [c14, msg18];
  L31(r91):
    r93 = `==`(r91, 1);
    c25 = `as.logical`(r93);
    if c25 then L146() else L32();
  L138():
    msg19 = force? msg18;
    checkMissing(msg19);
    c20 = `==`(msg19, NULL);
    goto L29(c14, c20);
  L142():
    ne2 = ld ne;
    check L144() else D52();
  L143():
    r90 = dyn base16(<sym ne>);
    goto L31(r90);
  D52():
    deopt 188 [ne2];
  L32():
    sym18 = ldf sum;
    base18 = ldf sum in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L154() else L155();
  L144():
    ne3 = force? ne2;
    checkMissing(ne3);
    sum2 = ldf sum in base;
    r92 = dyn sum2(ne3);
    check L145() else D53();
  L146():
    sym17 = ldf c;
    base17 = ldf c in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L147() else L148();
  D53():
    deopt 191 [r92];
  L33(r95):
    popenv;
    return r95;
  L34(r99):
    r101 = `>`(r99, 1);
    c27 = `as.logical`(r101);
    if c27 then L158() else L35();
  L145():
    goto L31(r92);
  L147():
    msg20 = ld msg;
    check L149() else D54();
  L148():
    r94 = dyn base17(<sym msg>, <lang paste("1 string mismatch")>);
    goto L33(r94);
  L154():
    ne4 = ld ne;
    check L156() else D58();
  L155():
    r98 = dyn base18(<sym ne>);
    goto L34(r98);
  D54():
    deopt 196 [msg20];
  D58():
    deopt 206 [ne4];
  L35():
    msg24 = ld msg;
    check L166() else D64();
  L149():
    msg21 = force? msg20;
    checkMissing(msg21);
    paste3 = ldf paste;
    check L150() else D55();
  L156():
    ne5 = force? ne4;
    checkMissing(ne5);
    sum3 = ldf sum in base;
    r100 = dyn sum3(ne5);
    check L157() else D59();
  L158():
    sym19 = ldf c;
    base19 = ldf c in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L159() else L160();
  D55():
    deopt 199 [];
  D59():
    deopt 209 [r100];
  D64():
    deopt 223 [msg24];
  L36(r103):
    popenv;
    return r103;
  L150():
    r96 = dyn paste3("1 string mismatch");
    check L151() else D56();
  L157():
    goto L34(r100);
  L159():
    msg22 = ld msg;
    check L161() else D60();
  L160():
    r102 = dyn base19(<sym msg>, <lang paste(sum(ne), "string mismatches")>);
    goto L36(r102);
  L166():
    msg25 = force? msg24;
    checkMissing(msg25);
    popenv;
    return msg25;
  D56():
    deopt 201 [r96];
  D60():
    deopt 214 [msg22];
  L151():
    c26 = ldf c in base;
    r97 = dyn c26(msg21, r96);
    check L152() else D57();
  L161():
    msg23 = force? msg22;
    checkMissing(msg23);
    paste4 = ldf paste;
    check L162() else D61();
  D57():
    deopt 203 [r97];
  D61():
    deopt 217 [];
  L152():
    goto L33(r97);
  L162():
    p15 = prom<V +>{
      sym20 = ldf sum;
      base20 = ldf sum in base;
      guard20 = `==`.4(sym20, base20);
      if guard20 then L1() else L2();
    L0(r105):
      return r105;
    L1():
      ne6 = ld ne;
      ne7 = force? ne6;
      checkMissing(ne7);
      sum4 = ldf sum in base;
      r106 = dyn sum4(ne7);
      goto L0(r106);
    L2():
      r104 = dyn base20(<sym ne>);
      goto L0(r104);
    };
    r108 = dyn paste4(p15, "string mismatches");
    check L163() else D62();
  D62():
    deopt 220 [r108];
  L163():
    c28 = ldf c in base;
    r109 = dyn c28(msg23, r108);
    check L164() else D63();
  D63():
    deopt 222 [r109];
  L164():
    goto L36(r109);
  }
}