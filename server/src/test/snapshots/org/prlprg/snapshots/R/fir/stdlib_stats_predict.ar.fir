fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4122371362;
    st `predict.ar` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4122371362(object, newdata, `n.ahead`, `se.fit`, `...`) {
  (reg object:*, reg newdata:*, reg n_ahead:*, reg se_fit:*, reg ddd:dots) -+> V { var object:*, var newdata:*, var `n.ahead`:*, reg n_ahead_isMissing:L, reg n_ahead_orDefault:*, var `se.fit`:*, reg se_fit_isMissing:L, reg se_fit_orDefault:*, var `...`:dots?, reg n_ahead1:*, reg n_ahead2:V, reg r:V, reg c:L, reg stop:cls, reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg missing:cls, reg r5:V, reg c1:L, reg eval_parent:cls, reg str2lang:cls, reg object1:*, reg object2:V, reg c2:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r6:V, reg p:p(V +), reg r8:V, reg p1:p(V +), reg r10:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg object5:*, reg object6:V, reg c3:L, reg object8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r13:V, reg c4:L, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg r14:V, reg c5:V, reg r15:V, reg c6:L, reg eval_parent1:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg call:cls, reg r18:V, reg p2:p(V +), reg r20:V, reg r21:V, reg NCOL:cls, reg newdata1:*, reg newdata2:V, reg p3:p(V +), reg r24:V, reg object9:*, reg object10:V, reg c7:L, reg object12:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg r25:V, reg object13:*, reg object14:V, reg c8:L, reg object16:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg r26:V, reg tsp:cls, reg as_ts:cls, reg newdata3:*, reg newdata4:V, reg p4:p(V +), reg r28:V, reg p5:p(V +), reg r30:V, reg c9:L, reg r32:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg __:cls, reg r33:V, reg deltat:cls, reg newdata5:*, reg newdata6:V, reg p6:p(V +), reg r35:V, reg frequency:cls, reg newdata7:*, reg newdata8:V, reg p7:p(V +), reg r37:V, reg l:*, reg tsp__:cls, reg r38:V, reg l1:*, reg class__:cls, reg r39:V, reg NCOL1:cls, reg ar:*, reg ar1:V, reg p8:p(V +), reg r41:V, reg nser:*, reg nser1:V, reg r42:V, reg c10:L, reg stop1:cls, reg r43:V, reg NROW:cls, reg newdata9:*, reg newdata10:V, reg p9:p(V +), reg r46:V, reg nser2:*, reg nser3:V, reg r47:V, reg c11:L, reg ____:cls, reg object17:*, reg object18:V, reg c12:L, reg object20:V, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg r48:V, reg p10:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r50:V, reg r51:V, reg nser4:*, reg nser5:V, reg rep_int:cls, reg r52:V, reg p11:p(V +), reg r54:V, reg rbind:cls, reg sweep:cls, reg newdata11:*, reg newdata12:V, reg p12:p(V +), reg object21:*, reg object22:V, reg c13:L, reg object24:V, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg r56:V, reg p13:p(V +), reg r58:V, reg p14:p(V +), reg matrix:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r60:V, reg r61:V, reg nser6:*, reg nser7:V, reg rep_int1:cls, reg r62:V, reg p15:p(V +), reg n_ahead3:*, reg n_ahead4:V, reg p16:p(V +), reg nser8:*, reg nser9:V, reg p17:p(V +), reg r66:V, reg p18:p(V +), reg r68:V, reg p19:*, reg p20:V, reg c14:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r69:V, reg r70:V, reg n_ahead5:*, reg n_ahead6:V, reg r71:I, reg s:V, reg l2:I, reg i:I, reg i1:I, reg i2:I, reg c15:L, reg x:V, reg ar2:*, reg ar3:V, reg c16:L, reg i6:I, reg dr16:V, reg dc8:L, reg dx18:V, reg i8:I, reg dx19:V, reg __1:cls, reg r72:V, reg x1:*, reg x2:V, reg c17:L, reg i10:I, reg x4:V, reg dr18:V, reg dc9:L, reg dx20:V, reg i12:I, reg dx21:V, reg n:*, reg n1:V, reg i13:*, reg i14:V, reg r73:V, reg r74:V, reg __2:cls, reg r75:V, reg ___:cls, reg r76:V, reg xint:*, reg xint1:V, reg r77:V, reg l3:*, reg c18:L, reg i16:I, reg r79:V, reg l5:*, reg dr20:V, reg dc10:L, reg dx22:V, reg i18:I, reg dx23:V, reg n2:*, reg n3:V, reg i19:*, reg i20:V, reg r82:V, reg ___1:cls, reg r83:V, reg p21:*, reg p22:V, reg r84:V, reg c19:L, reg p23:*, reg p24:V, reg r85:V, reg s1:V, reg l6:I, reg i23:I, reg i24:I, reg i25:I, reg i26:I, reg c20:L, reg x5:V, reg x6:*, reg x7:V, reg c21:L, reg i33:I, reg i34:I, reg x9:V, reg dr22:V, reg dc11:L, reg dx24:V, reg i37:I, reg i38:I, reg dx25:V, reg n4:*, reg n5:V, reg i39:*, reg i40:V, reg r86:V, reg __3:cls, reg r87:V, reg ar6:*, reg ar7:V, reg c22:L, reg i43:I, reg i44:I, reg dx27:V, reg ar9:V, reg dr24:V, reg dc12:L, reg dx29:V, reg i47:I, reg i48:I, reg dx30:V, reg dx31:V, reg j:*, reg j1:V, reg __4:cls, reg r88:V, reg x10:*, reg x11:V, reg c23:L, reg i51:I, reg i52:I, reg dx33:V, reg x13:V, reg dr26:V, reg dc13:L, reg dx35:V, reg i55:I, reg i56:I, reg dx36:V, reg dx37:V, reg n6:*, reg n7:V, reg i57:*, reg i58:V, reg r89:V, reg j2:*, reg j3:V, reg r90:V, reg __5:cls, reg r91:V, reg ___2:cls, reg r92:V, reg r93:V, reg l7:*, reg c24:L, reg i61:I, reg i62:I, reg r95:V, reg l9:*, reg dr28:V, reg dc14:L, reg dx38:V, reg i65:I, reg i66:I, reg dx39:V, reg n8:*, reg n9:V, reg i67:*, reg i68:V, reg r98:V, reg ___3:cls, reg r99:V, reg i69:I, reg x14:*, reg x15:V, reg c25:L, reg x17:V, reg dr30:V, reg dc15:L, reg dx40:V, reg dx41:V, reg n10:*, reg n11:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r100:V, reg n14:V, reg r101:V, reg n_ahead7:*, reg n_ahead8:V, reg r102:I, reg r103:V, reg __6:cls, reg r104:V, reg dx42:V, reg matrix1:cls, reg xint2:*, reg xint3:V, reg p25:p(V +), reg n_ahead9:*, reg n_ahead10:V, reg p26:p(V +), reg nser10:*, reg nser11:V, reg p27:p(V +), reg r108:V, reg pred:*, reg pred1:V, reg matrix2:cls, reg object25:*, reg object26:V, reg c26:L, reg object28:V, reg dr32:V, reg dc16:L, reg dx43:V, reg dx44:V, reg r109:V, reg p28:p(V +), reg n_ahead11:*, reg n_ahead12:V, reg p29:p(V +), reg nser12:*, reg nser13:V, reg p30:p(V +), reg r113:V, reg r114:V, reg colnames:cls, reg object29:*, reg object30:V, reg c27:L, reg object32:V, reg dr34:V, reg dc17:L, reg dx45:V, reg dx46:V, reg r115:V, reg p31:p(V +), reg r117:V, reg l10:*, reg colnames__:cls, reg r118:V, reg se_fit1:*, reg se_fit2:V, reg c28:L, reg warning:cls, reg r119:V, reg matrix3:cls, reg n_ahead13:*, reg n_ahead14:V, reg p32:p(V +), reg nser14:*, reg nser15:V, reg p33:p(V +), reg r122:V, reg r123:V, reg ____1:cls, reg object33:*, reg object34:V, reg c29:L, reg object36:V, reg dr36:V, reg dc18:L, reg dx47:V, reg dx48:V, reg r125:V, reg p34:p(V +), reg r127:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r128:V, reg r129:V, reg newdata13:*, reg newdata14:V, reg object37:*, reg object38:V, reg c30:L, reg newdata16:V, reg object40:V, reg dr38:V, reg dc19:L, reg dx49:V, reg newdata18:V, reg dx50:V, reg r130:V, reg r131:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r132:V, reg r133:V, reg n_ahead15:*, reg n_ahead16:V, reg rep_int2:cls, reg r134:V, reg c31:cls, reg r135:V, reg p35:*, reg p36:V, reg c32:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r136:V, reg r137:V, reg n_ahead17:*, reg n_ahead18:V, reg r138:I, reg s2:V, reg l11:I, reg i71:I, reg i72:I, reg i73:I, reg c33:L, reg x21:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r139:V, reg i78:I, reg r140:V, reg ar10:*, reg ar11:V, reg x22:*, reg x23:V, reg c34:L, reg i80:I, reg ar13:V, reg x25:V, reg dr40:V, reg dc20:L, reg dx51:V, reg i82:I, reg ar15:V, reg dx52:V, reg n15:*, reg n16:V, reg i83:*, reg i84:V, reg r141:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r144:V, reg i87:I, reg ar18:V, reg x28:V, reg r145:V, reg r146:V, reg p37:*, reg p38:V, reg r147:I, reg r148:V, reg __7:cls, reg r149:V, reg r150:V, reg sum:cls, reg r151:V, reg xint4:*, reg xint5:V, reg r152:V, reg l12:*, reg c35:L, reg i89:I, reg r154:V, reg l14:*, reg dr42:V, reg dc21:L, reg dx53:V, reg i91:I, reg dx54:V, reg n17:*, reg n18:V, reg i92:*, reg i93:V, reg r157:V, reg ___4:cls, reg r158:V, reg x29:*, reg x30:V, reg c36:L, reg x32:V, reg dr44:V, reg dc22:L, reg dx55:V, reg dx56:V, reg n19:*, reg n20:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r159:V, reg x35:V, reg n23:V, reg r160:V, reg n_ahead19:*, reg n_ahead20:V, reg r161:I, reg r162:V, reg __8:cls, reg r163:V, reg se_fit3:*, reg se_fit4:V, reg c37:L, reg sym13:cls, reg base13:cls, reg guard13:L, reg r164:V, reg r165:V, reg C_ar2ma:*, reg C_ar2ma1:V, reg ar19:*, reg ar20:V, reg n_ahead21:*, reg n_ahead22:V, reg r166:V, reg vargs:dots, reg r167:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r168:V, reg r169:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r170:V, reg r171:V, reg psi:*, reg psi1:V, reg r172:V, reg c38:cls, reg r173:V, reg cumsum:cls, reg r174:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r175:V, reg r176:V, reg object41:*, reg object42:V, reg c39:L, reg object44:V, reg dr46:V, reg dc23:L, reg dx57:V, reg dx58:V, reg r177:V, reg vars:*, reg vars1:V, reg r178:V, reg r179:V, reg c40:L, reg r181:V, reg dr48:V, reg dc24:L, reg dx59:V, reg dx60:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r184:V, reg r185:V, reg r186:V, reg n_ahead23:*, reg n_ahead24:V, reg r187:I, reg __9:cls, reg r188:V, reg dx61:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r189:V, reg r190:V, reg xint6:*, reg xint7:V, reg n_ahead25:*, reg n_ahead26:V, reg rep_int3:cls, reg r191:V, reg se_fit5:*, reg se_fit6:V, reg c41:L, reg sym19:cls, reg base19:cls, reg guard19:L, reg r192:V, reg r193:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r194:V, reg r195:V, reg object45:*, reg object46:V, reg c42:L, reg object48:V, reg dr50:V, reg dc25:L, reg dx63:V, reg dx64:V, reg r196:V, reg r197:V, reg n_ahead27:*, reg n_ahead28:V, reg rep_int4:cls, reg r198:V, reg pred2:*, reg pred3:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r199:V, reg pred6:V, reg r200:V, reg object49:*, reg object50:V, reg c43:L, reg pred8:V, reg object52:V, reg dr52:V, reg dc26:L, reg dx65:V, reg pred10:V, reg dx66:V, reg r201:V, reg n_ahead29:*, reg n_ahead30:V, reg rep_int5:cls, reg r202:V, reg r203:V, reg ts:cls, reg pred11:*, reg pred12:V, reg p39:p(V +), reg st:*, reg st1:V, reg dt:*, reg dt1:V, reg r205:V, reg p40:p(V +), reg xfreq:*, reg xfreq1:V, reg p41:p(V +), reg r208:V, reg se_fit7:*, reg se_fit8:V, reg c44:L, reg sym22:cls, reg base22:cls, reg guard22:L, reg r209:V, reg r210:V, reg pred13:*, reg pred14:V, reg ts1:cls, reg se:*, reg se1:V, reg p42:p(V +), reg st2:*, reg st3:V, reg dt2:*, reg dt3:V, reg r212:V, reg p43:p(V +), reg xfreq2:*, reg xfreq3:V, reg p44:p(V +), reg r215:V, reg list:cls, reg r216:V, reg pred15:*, reg pred16:V |
    mkenv;
    st object = object;
    st newdata = newdata;
    n_ahead_isMissing = missing.0(n_ahead);
    if n_ahead_isMissing then L0(1) else L0(n_ahead);
  L0(n_ahead_orDefault):
    st `n.ahead` = n_ahead_orDefault;
    se_fit_isMissing = missing.0(se_fit);
    if se_fit_isMissing then L1(TRUE) else L1(se_fit);
  L1(se_fit_orDefault):
    st `se.fit` = se_fit_orDefault;
    st `...` = ddd;
    n_ahead1 = ld `n.ahead`;
    check L63() else D0();
  D0():
    deopt 0 [n_ahead1];
  L63():
    n_ahead2 = force? n_ahead1;
    checkMissing(n_ahead2);
    r = `<`(n_ahead2, 1);
    c = `as.logical`(r);
    if c then L64() else L2();
  L2():
    goto L3();
  L3():
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L68() else L69();
  L64():
    stop = ldf stop;
    check L65() else D1();
  D1():
    deopt 5 [];
  L4(r4):
    c1 = `as.logical`(r4);
    if c1 then L70() else L5();
  L65():
    r1 = dyn stop("'n.ahead' must be at least 1");
    check L66() else D2();
  L68():
    missing = ldf missing in base;
    r5 = dyn missing(<sym newdata>);
    goto L4(r5);
  L69():
    r3 = dyn base(<sym newdata>);
    goto L4(r3);
  D2():
    deopt 7 [r1];
  L5():
    goto L9();
  L9():
    NCOL = ldf NCOL;
    check L89() else D8();
  L66():
    goto L3();
  L70():
    eval_parent = ldf `eval.parent`;
    check L71() else D3();
  D3():
    deopt 14 [];
  D8():
    deopt 36 [];
  L71():
    p1 = prom<V +>{
      str2lang = ldf str2lang;
      p = prom<V +>{
        object1 = ld object;
        object2 = force? object1;
        checkMissing(object2);
        c2 = `is.object`(object2);
        if c2 then L1() else L2(object2);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("$", object2);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(object4):
        r6 = `$`(object4, <sym series>);
        goto L0(r6);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r8 = dyn str2lang(p);
      return r8;
    };
    r10 = dyn eval_parent(p1);
    check L72() else D4();
  L89():
    p3 = prom<V +>{
      newdata1 = ld newdata;
      newdata2 = force? newdata1;
      checkMissing(newdata2);
      return newdata2;
    };
    r24 = dyn NCOL(p3);
    check L90() else D9();
  D4():
    deopt 16 [r10];
  D9():
    deopt 38 [r24];
  L72():
    st newdata = r10;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L73() else L74();
  L90():
    st nser = r24;
    object9 = ld object;
    check L91() else D10();
  D10():
    deopt 40 [object9];
  L6(r12):
    r15 = `!`(r12);
    c6 = `as.logical`(r15);
    if c6 then L84() else L7();
  L73():
    object5 = ld object;
    check L75() else D5();
  L74():
    r11 = dyn base1(<lang `<-`(nas, `$`(`$`(object, call), na.action))>);
    goto L6(r11);
  L91():
    object10 = force? object9;
    checkMissing(object10);
    c7 = `is.object`(object10);
    if c7 then L93() else L94(object10);
  D5():
    deopt 19 [object5];
  L7():
    goto L8(NULL);
  L8(r21):
    goto L9();
  L75():
    object6 = force? object5;
    checkMissing(object6);
    c3 = `is.object`(object6);
    if c3 then L77() else L78(object6);
  L84():
    eval_parent1 = ldf `eval.parent`;
    check L85() else D6();
  L92(dx9):
    st ar = dx9;
    object13 = ld object;
    check L96() else D11();
  L93():
    dr6 = tryDispatchBuiltin.1("$", object10);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L95() else L94(dr6);
  L94(object12):
    r25 = `$`(object12, <sym ar>);
    goto L92(r25);
  D6():
    deopt 27 [];
  D11():
    deopt 44 [object13];
  L76(dx3):
    c4 = `is.object`(dx3);
    if c4 then L81() else L82(dx3);
  L77():
    dr2 = tryDispatchBuiltin.1("$", object6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L79() else L78(dr2);
  L78(object8):
    r13 = `$`(object8, <sym call>);
    goto L76(r13);
  L85():
    p2 = prom<V +>{
      sym2 = ldf call;
      base2 = ldf call in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r17):
      return r17;
    L1():
      call = ldf call in base;
      r18 = dyn call(<sym nas>, <sym newdata>);
      goto L0(r18);
    L2():
      r16 = dyn base2(<sym nas>, <sym newdata>);
      goto L0(r16);
    };
    r20 = dyn eval_parent1(p2);
    check L86() else D7();
  L95():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L92(dx8);
  L96():
    object14 = force? object13;
    checkMissing(object14);
    c8 = `is.object`(object14);
    if c8 then L98() else L99(object14);
  D7():
    deopt 29 [r20];
  L79():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L76(dx2);
  L80(dx7):
    st nas = dx7;
    c5 = `==`(dx7, NULL);
    goto L6(c5);
  L81():
    dr4 = tryDispatchBuiltin.1("$", dx3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L83() else L82(dr4);
  L82(dx5):
    r14 = `$`(dx5, <sym na.action>);
    goto L80(r14);
  L86():
    st newdata = r20;
    goto L8(r20);
  L97(dx11):
    st p = dx11;
    tsp = ldf tsp;
    check L101() else D12();
  L98():
    dr8 = tryDispatchBuiltin.1("$", object14);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L100() else L99(dr8);
  L99(object16):
    r26 = `$`(object16, <sym order>);
    goto L97(r26);
  D12():
    deopt 49 [];
  L83():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L80(dx6);
  L100():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L97(dx10);
  L101():
    p5 = prom<V +>{
      as_ts = ldf `as.ts`;
      p4 = prom<V +>{
        newdata3 = ld newdata;
        newdata4 = force? newdata3;
        checkMissing(newdata4);
        return newdata4;
      };
      r28 = dyn as_ts(p4);
      return r28;
    };
    r30 = dyn tsp(p5);
    check L102() else D13();
  D13():
    deopt 51 [r30];
  L102():
    c9 = `is.object`(r30);
    if c9 then L103() else L104(r30);
  L10(dx13):
    st st = dx13;
    deltat = ldf deltat;
    check L106() else D14();
  L103():
    dr10 = tryDispatchBuiltin.1("[", r30);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L105() else L104(dr10);
  L104(r32):
    __ = ldf `[` in base;
    r33 = dyn __(r32, 2);
    goto L10(r33);
  D14():
    deopt 57 [];
  L105():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L10(dx12);
  L106():
    p6 = prom<V +>{
      newdata5 = ld newdata;
      newdata6 = force? newdata5;
      checkMissing(newdata6);
      return newdata6;
    };
    r35 = dyn deltat(p6);
    check L107() else D15();
  D15():
    deopt 59 [r35];
  L107():
    st dt = r35;
    frequency = ldf frequency;
    check L108() else D16();
  D16():
    deopt 62 [];
  L108():
    p7 = prom<V +>{
      newdata7 = ld newdata;
      newdata8 = force? newdata7;
      checkMissing(newdata8);
      return newdata8;
    };
    r37 = dyn frequency(p7);
    check L109() else D17();
  D17():
    deopt 64 [r37];
  L109():
    st xfreq = r37;
    l = ld newdata;
    tsp__ = ldf `tsp<-`;
    check L110() else D18();
  D18():
    deopt 69 [NULL, l, NULL];
  L110():
    r38 = dyn tsp__(l, NULL, NULL);
    check L111() else D19();
  D19():
    deopt 71 [NULL, r38];
  L111():
    st newdata = r38;
    l1 = ld newdata;
    class__ = ldf `class<-`;
    check L112() else D20();
  D20():
    deopt 76 [NULL, l1, NULL];
  L112():
    r39 = dyn class__(l1, NULL, NULL);
    check L113() else D21();
  D21():
    deopt 78 [NULL, r39];
  L113():
    st newdata = r39;
    NCOL1 = ldf NCOL;
    check L114() else D22();
  D22():
    deopt 81 [];
  L114():
    p8 = prom<V +>{
      ar = ld ar;
      ar1 = force? ar;
      checkMissing(ar1);
      return ar1;
    };
    r41 = dyn NCOL1(p8);
    check L115() else D23();
  D23():
    deopt 83 [r41];
  L115():
    nser = ld nser;
    check L116() else D24();
  D24():
    deopt 83 [r41, nser];
  L116():
    nser1 = force? nser;
    checkMissing(nser1);
    r42 = `!=`(r41, nser1);
    c10 = `as.logical`(r42);
    if c10 then L117() else L11();
  L11():
    goto L12();
  L12():
    NROW = ldf NROW;
    check L121() else D27();
  L117():
    stop1 = ldf stop;
    check L118() else D25();
  D25():
    deopt 87 [];
  D27():
    deopt 93 [];
  L118():
    r43 = dyn stop1("number of series in 'object' and 'newdata' do not match");
    check L119() else D26();
  L121():
    p9 = prom<V +>{
      newdata9 = ld newdata;
      newdata10 = force? newdata9;
      checkMissing(newdata10);
      return newdata10;
    };
    r46 = dyn NROW(p9);
    check L122() else D28();
  D26():
    deopt 89 [r43];
  D28():
    deopt 95 [r46];
  L119():
    goto L12();
  L122():
    st n = r46;
    nser2 = ld nser;
    check L123() else D29();
  D29():
    deopt 97 [nser2];
  L123():
    nser3 = force? nser2;
    checkMissing(nser3);
    r47 = `>`(nser3, 1);
    c11 = `as.logical`(r47);
    if c11 then L124() else L13();
  L13():
    ____1 = ldf `%||%`;
    check L207() else D75();
  L34():
    ts = ldf ts;
    check L314() else D117();
  L124():
    ____ = ldf `%||%`;
    check L125() else D30();
  D30():
    deopt 102 [];
  D75():
    deopt 263 [];
  D117():
    deopt 408 [];
  L125():
    p10 = prom<V +>{
      object17 = ld object;
      object18 = force? object17;
      checkMissing(object18);
      c12 = `is.object`(object18);
      if c12 then L1() else L2(object18);
    L0(dx15):
      return dx15;
    L1():
      dr12 = tryDispatchBuiltin.1("$", object18);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(object20):
      r48 = `$`(object20, <sym x.intercept>);
      goto L0(r48);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx14);
    };
    p11 = prom<V +>{
      sym3 = ldf `rep.int`;
      base3 = ldf `rep.int` in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r51):
      return r51;
    L1():
      nser4 = ld nser;
      nser5 = force? nser4;
      checkMissing(nser5);
      rep_int = ldf `rep.int` in base;
      r52 = dyn rep_int(0.0, nser5);
      goto L0(r52);
    L2():
      r50 = dyn base3(0.0, <sym nser>);
      goto L0(r50);
    };
    r54 = dyn ____(p10, p11);
    check L126() else D31();
  L207():
    p34 = prom<V +>{
      object33 = ld object;
      object34 = force? object33;
      checkMissing(object34);
      c29 = `is.object`(object34);
      if c29 then L1() else L2(object34);
    L0(dx48):
      return dx48;
    L1():
      dr36 = tryDispatchBuiltin.1("$", object34);
      dc18 = getTryDispatchBuiltinDispatched(dr36);
      if dc18 then L3() else L2(dr36);
    L2(object36):
      r125 = `$`(object36, <sym x.intercept>);
      goto L0(r125);
    L3():
      dx47 = getTryDispatchBuiltinValue(dr36);
      goto L0(dx47);
    };
    r127 = dyn ____1(p34, 0.0);
    check L208() else D76();
  L314():
    p39 = prom<V +>{
      pred11 = ld pred;
      pred12 = force? pred11;
      checkMissing(pred12);
      return pred12;
    };
    p40 = prom<V +>{
      st = ld st;
      st1 = force? st;
      checkMissing(st1);
      dt = ld dt;
      dt1 = force? dt;
      checkMissing(dt1);
      r205 = `+`(st1, dt1);
      return r205;
    };
    p41 = prom<V +>{
      xfreq = ld xfreq;
      xfreq1 = force? xfreq;
      checkMissing(xfreq1);
      return xfreq1;
    };
    r208 = dyn ts[, start, frequency](p39, p40, p41);
    check L315() else D118();
  D31():
    deopt 105 [r54];
  D76():
    deopt 266 [r127];
  D118():
    deopt 414 [r208];
  L126():
    st xint = r54;
    rbind = ldf rbind;
    check L127() else D32();
  L208():
    st xint = r127;
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L209() else L210();
  L315():
    st pred = r208;
    se_fit7 = ld `se.fit`;
    check L316() else D119();
  D32():
    deopt 108 [];
  D119():
    deopt 416 [se_fit7];
  L35(r129):
    st x = r129;
    p35 = ld p;
    check L222() else D82();
  L127():
    p14 = prom<V +>{
      sweep = ldf sweep;
      p12 = prom<V +>{
        newdata11 = ld newdata;
        newdata12 = force? newdata11;
        checkMissing(newdata12);
        return newdata12;
      };
      p13 = prom<V +>{
        object21 = ld object;
        object22 = force? object21;
        checkMissing(object22);
        c13 = `is.object`(object22);
        if c13 then L1() else L2(object22);
      L0(dx17):
        return dx17;
      L1():
        dr14 = tryDispatchBuiltin.1("$", object22);
        dc7 = getTryDispatchBuiltinDispatched(dr14);
        if dc7 then L3() else L2(dr14);
      L2(object24):
        r56 = `$`(object24, <sym x.mean>);
        goto L0(r56);
      L3():
        dx16 = getTryDispatchBuiltinValue(dr14);
        goto L0(dx16);
      };
      r58 = dyn sweep[, , , `check.margin`](p12, 2, p13, FALSE);
      return r58;
    };
    p18 = prom<V +>{
      matrix = ldf matrix;
      p15 = prom<V +>{
        sym4 = ldf `rep.int`;
        base4 = ldf `rep.int` in base;
        guard4 = `==`.4(sym4, base4);
        if guard4 then L1() else L2();
      L0(r61):
        return r61;
      L1():
        nser6 = ld nser;
        nser7 = force? nser6;
        checkMissing(nser7);
        rep_int1 = ldf `rep.int` in base;
        r62 = dyn rep_int1(0.0, nser7);
        goto L0(r62);
      L2():
        r60 = dyn base4(0.0, <sym nser>);
        goto L0(r60);
      };
      p16 = prom<V +>{
        n_ahead3 = ld `n.ahead`;
        n_ahead4 = force? n_ahead3;
        checkMissing(n_ahead4);
        return n_ahead4;
      };
      p17 = prom<V +>{
        nser8 = ld nser;
        nser9 = force? nser8;
        checkMissing(nser9);
        return nser9;
      };
      r66 = dyn matrix[, , , byrow](p15, p16, p17, TRUE);
      return r66;
    };
    r68 = dyn rbind(p14, p18);
    check L128() else D33();
  L209():
    newdata13 = ld newdata;
    check L211() else D77();
  L210():
    r128 = dyn base7(<lang `-`(newdata, `$`(object, x.mean))>, <lang rep.int(0.0, n.ahead)>);
    goto L35(r128);
  L316():
    se_fit8 = force? se_fit7;
    checkMissing(se_fit8);
    c44 = `as.logical`(se_fit8);
    if c44 then L317() else L61();
  D33():
    deopt 111 [r68];
  D77():
    deopt 270 [newdata13];
  D82():
    deopt 285 [p35];
  L61():
    pred15 = ld pred;
    check L325() else D124();
  L128():
    st x = r68;
    p19 = ld p;
    check L129() else D34();
  L211():
    newdata14 = force? newdata13;
    checkMissing(newdata14);
    object37 = ld object;
    check L212() else D78();
  L222():
    p36 = force? p35;
    checkMissing(p36);
    c32 = `as.logical`(p36);
    if c32 then L223() else L37();
  L317():
    sym22 = ldf list;
    base22 = ldf list in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L318() else L319();
  D34():
    deopt 113 [p19];
  D78():
    deopt 271 [newdata14, object37];
  D124():
    deopt 434 [pred15];
  L37():
    sym18 = ldf `rep.int`;
    base18 = ldf `rep.int` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L285() else L286();
  L55():
    pred2 = ld pred;
    check L304() else D113();
  L62(r210):
    popenv;
    return r210;
  L129():
    p20 = force? p19;
    checkMissing(p20);
    c14 = `as.logical`(p20);
    if c14 then L130() else L14();
  L212():
    object38 = force? object37;
    checkMissing(object38);
    c30 = `is.object`(object38);
    if c30 then L214() else L215(newdata14, object38);
  L223():
    sym9 = ldf seq_len;
    base9 = ldf seq_len in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L224() else L225();
  L318():
    pred13 = ld pred;
    check L320() else D120();
  L319():
    r209 = dyn base22[pred, se](<sym pred>, <lang ts(se, start=`+`(st, dt), frequency=xfreq)>);
    goto L62(r209);
  L325():
    pred16 = force? pred15;
    checkMissing(pred16);
    popenv;
    return pred16;
  D113():
    deopt 395 [pred2];
  D120():
    deopt 420 [pred13];
  L14():
    matrix1 = ldf matrix;
    check L190() else D61();
  L31(dx42):
    st pred = dx42;
    pred = ld pred;
    check L192() else D63();
  L38(r137):
    s2 = toForSeq(r137);
    l11 = length(s2);
    i71 = 0;
    goto L39(i71);
  L56(r190):
    st pred = r190;
    se_fit5 = ld `se.fit`;
    check L290() else D109();
  L130():
    sym5 = ldf seq_len;
    base5 = ldf seq_len in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L131() else L132();
  L213(newdata18, dx50):
    r131 = `-`(newdata18, dx50);
    sym8 = ldf `rep.int`;
    base8 = ldf `rep.int` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L217() else L218();
  L214():
    dr38 = tryDispatchBuiltin.1("$", object38);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L216() else L215(newdata14, dr38);
  L215(newdata16, object40):
    r130 = `$`(object40, <sym x.mean>);
    goto L213(newdata16, r130);
  L224():
    n_ahead17 = ld `n.ahead`;
    check L226() else D83();
  L225():
    r136 = dyn base9(<sym n.ahead>);
    goto L38(r136);
  L285():
    xint6 = ld xint;
    check L287() else D106();
  L286():
    r189 = dyn base18(<sym xint>, <sym n.ahead>);
    goto L56(r189);
  L304():
    pred3 = force? pred2;
    checkMissing(pred3);
    sym21 = ldf `rep.int`;
    base21 = ldf `rep.int` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L305() else L306();
  L320():
    pred14 = force? pred13;
    checkMissing(pred14);
    ts1 = ldf ts;
    check L321() else D121();
  D61():
    deopt 219 [];
  D63():
    deopt 227 [pred];
  D83():
    deopt 288 [n_ahead17];
  D106():
    deopt 372 [xint6];
  D109():
    deopt 379 [se_fit5];
  D121():
    deopt 424 [];
  L15(r70):
    s = toForSeq(r70);
    l2 = length(s);
    i = 0;
    goto L16(i);
  L36(r133):
    c31 = ldf c in base;
    r135 = dyn c31(r131, r133);
    check L221() else D81();
  L39(i72):
    i73 = `+`.1(i72, 1);
    c33 = `<`.1(l11, i73);
    if c33 then L227() else L44();
  L60(pred6, r200):
    r203 = `+`(pred6, r200);
    st pred = r203;
    goto L34();
  L131():
    n_ahead5 = ld `n.ahead`;
    check L133() else D35();
  L132():
    r69 = dyn base5(<sym n.ahead>);
    goto L15(r69);
  L190():
    p25 = prom<V +>{
      xint2 = ld xint;
      xint3 = force? xint2;
      checkMissing(xint3);
      return xint3;
    };
    p26 = prom<V +>{
      n_ahead9 = ld `n.ahead`;
      n_ahead10 = force? n_ahead9;
      checkMissing(n_ahead10);
      return n_ahead10;
    };
    p27 = prom<V +>{
      nser10 = ld nser;
      nser11 = force? nser10;
      checkMissing(nser11);
      return nser11;
    };
    r108 = dyn matrix1[, , , byrow](p25, p26, p27, TRUE);
    check L191() else D62();
  L192():
    pred1 = force? pred;
    checkMissing(pred1);
    matrix2 = ldf matrix;
    check L193() else D64();
  L216():
    dx49 = getTryDispatchBuiltinValue(dr38);
    goto L213(newdata14, dx49);
  L217():
    n_ahead15 = ld `n.ahead`;
    check L219() else D79();
  L218():
    r132 = dyn base8(0.0, <sym n.ahead>);
    goto L36(r132);
  L226():
    n_ahead18 = force? n_ahead17;
    checkMissing(n_ahead18);
    r138 = seq_len(n_ahead18);
    goto L38(r138);
  L287():
    xint7 = force? xint6;
    checkMissing(xint7);
    n_ahead25 = ld `n.ahead`;
    check L288() else D107();
  L290():
    se_fit6 = force? se_fit5;
    checkMissing(se_fit6);
    c41 = `as.logical`(se_fit6);
    if c41 then L291() else L57();
  L305():
    object49 = ld object;
    check L307() else D114();
  L306():
    r199 = dyn base21(<lang `$`(object, x.mean)>, <sym n.ahead>);
    goto L60(pred3, r199);
  L321():
    p42 = prom<V +>{
      se = ld se;
      se1 = force? se;
      checkMissing(se1);
      return se1;
    };
    p43 = prom<V +>{
      st2 = ld st;
      st3 = force? st2;
      checkMissing(st3);
      dt2 = ld dt;
      dt3 = force? dt2;
      checkMissing(dt3);
      r212 = `+`(st3, dt3);
      return r212;
    };
    p44 = prom<V +>{
      xfreq2 = ld xfreq;
      xfreq3 = force? xfreq2;
      checkMissing(xfreq3);
      return xfreq3;
    };
    r215 = dyn ts1[, start, frequency](p42, p43, p44);
    check L322() else D122();
  D35():
    deopt 116 [n_ahead5];
  D62():
    deopt 225 [r108];
  D64():
    deopt 229 [pred1];
  D79():
    deopt 278 [n_ahead15];
  D81():
    deopt 283 [r135];
  D107():
    deopt 374 [n_ahead25];
  D114():
    deopt 398 [pred3, object49];
  D122():
    deopt 430 [r215];
  L16(i1):
    i2 = `+`.1(i1, 1);
    c15 = `<`.1(l2, i2);
    if c15 then L134() else L28();
  L44():
    x21 = `[[`(s2, i73, NULL, TRUE);
    st i = x21;
    sym10 = ldf sum;
    base10 = ldf sum in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L228() else L229();
  L57():
    goto L55();
  L133():
    n_ahead6 = force? n_ahead5;
    checkMissing(n_ahead6);
    r71 = seq_len(n_ahead6);
    goto L15(r71);
  L191():
    goto L31(r108);
  L193():
    p28 = prom<V +>{
      object25 = ld object;
      object26 = force? object25;
      checkMissing(object26);
      c26 = `is.object`(object26);
      if c26 then L1() else L2(object26);
    L0(dx44):
      return dx44;
    L1():
      dr32 = tryDispatchBuiltin.1("$", object26);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L3() else L2(dr32);
    L2(object28):
      r109 = `$`(object28, <sym x.mean>);
      goto L0(r109);
    L3():
      dx43 = getTryDispatchBuiltinValue(dr32);
      goto L0(dx43);
    };
    p29 = prom<V +>{
      n_ahead11 = ld `n.ahead`;
      n_ahead12 = force? n_ahead11;
      checkMissing(n_ahead12);
      return n_ahead12;
    };
    p30 = prom<V +>{
      nser12 = ld nser;
      nser13 = force? nser12;
      checkMissing(nser13);
      return nser13;
    };
    r113 = dyn matrix2[, , , byrow](p28, p29, p30, TRUE);
    check L194() else D65();
  L219():
    n_ahead16 = force? n_ahead15;
    checkMissing(n_ahead16);
    rep_int2 = ldf `rep.int` in base;
    r134 = dyn rep_int2(0.0, n_ahead16);
    check L220() else D80();
  L221():
    goto L35(r135);
  L227():
    x29 = ld x;
    check L247() else D93();
  L288():
    n_ahead26 = force? n_ahead25;
    checkMissing(n_ahead26);
    rep_int3 = ldf `rep.int` in base;
    r191 = dyn rep_int3(xint7, n_ahead26);
    check L289() else D108();
  L291():
    sym19 = ldf `rep.int`;
    base19 = ldf `rep.int` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L292() else L293();
  L307():
    object50 = force? object49;
    checkMissing(object50);
    c43 = `is.object`(object50);
    if c43 then L309() else L310(pred3, object50);
  L322():
    list = ldf list in base;
    r216 = dyn list(pred14, r215);
    check L323() else D123();
  D65():
    deopt 235 [pred1, r113];
  D80():
    deopt 281 [r134];
  D93():
    deopt 320 [x29];
  D108():
    deopt 377 [r191];
  D123():
    deopt 433 [r216];
  L28():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    ar2 = ld ar;
    check L135() else D36();
  L40(i78, r140):
    xint4 = ld xint;
    check L241() else D90();
  L58(r193):
    st se = r193;
    goto L55();
  L134():
    x14 = ld x;
    check L181() else D58();
  L194():
    r114 = `+`(pred1, r113);
    st pred = r114;
    colnames = ldf colnames;
    check L195() else D66();
  L220():
    goto L36(r134);
  L228():
    ar10 = ld ar;
    check L230() else D84();
  L229():
    r139 = dyn base10(<lang `*`(ar, `[`(x, `-`(`+`(n, i), seq_len(p))))>);
    goto L40(i73, r139);
  L247():
    x30 = force? x29;
    checkMissing(x30);
    c36 = `is.object`(x30);
    if c36 then L248() else L249(x30);
  L289():
    goto L56(r191);
  L292():
    sym20 = ldf sqrt;
    base20 = ldf sqrt in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L294() else L295();
  L293():
    r192 = dyn base19(<lang sqrt(`$`(object, var.pred))>, <sym n.ahead>);
    goto L58(r192);
  L308(pred10, dx66):
    n_ahead29 = ld `n.ahead`;
    check L312() else D115();
  L309():
    dr52 = tryDispatchBuiltin.1("$", object50);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L311() else L310(pred3, dr52);
  L310(pred8, object52):
    r201 = `$`(object52, <sym x.mean>);
    goto L308(pred8, r201);
  L323():
    goto L62(r216);
  D36():
    deopt 120 [i2, ar2];
  D58():
    deopt 207 [x14];
  D66():
    deopt 239 [];
  D84():
    deopt 293 [i73, ar10];
  D90():
    deopt 307 [i78, r140, xint4];
  D115():
    deopt 401 [pred10, n_ahead29];
  L45(dx56):
    st pred = dx56;
    se_fit3 = ld `se.fit`;
    check L255() else D96();
  L59(r195):
    n_ahead27 = ld `n.ahead`;
    check L301() else D111();
  L135():
    ar3 = force? ar2;
    checkMissing(ar3);
    c16 = `is.object`(ar3);
    if c16 then L136() else L137(i2);
  L181():
    x15 = force? x14;
    checkMissing(x15);
    c25 = `is.object`(x15);
    if c25 then L182() else L183(x15);
  L195():
    p31 = prom<V +>{
      object29 = ld object;
      object30 = force? object29;
      checkMissing(object30);
      c27 = `is.object`(object30);
      if c27 then L1() else L2(object30);
    L0(dx46):
      return dx46;
    L1():
      dr34 = tryDispatchBuiltin.1("$", object30);
      dc17 = getTryDispatchBuiltinDispatched(dr34);
      if dc17 then L3() else L2(dr34);
    L2(object32):
      r115 = `$`(object32, <sym var.pred>);
      goto L0(r115);
    L3():
      dx45 = getTryDispatchBuiltinValue(dr34);
      goto L0(dx45);
    };
    r117 = dyn colnames(p31);
    check L196() else D67();
  L230():
    ar11 = force? ar10;
    checkMissing(ar11);
    x22 = ld x;
    check L231() else D85();
  L241():
    xint5 = force? xint4;
    checkMissing(xint5);
    r152 = `+`(r140, xint5);
    l12 = ld x;
    c35 = `is.object`(l12);
    if c35 then L242() else L243(i78, r152, l12);
  L248():
    dr44 = tryDispatchBuiltin.1("[", x30);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L250() else L249(dr44);
  L249(x32):
    n19 = ld n;
    check L251() else D94();
  L294():
    object45 = ld object;
    check L296() else D110();
  L295():
    r194 = dyn base20(<lang `$`(object, var.pred)>);
    goto L59(r194);
  L311():
    dx65 = getTryDispatchBuiltinValue(dr52);
    goto L308(pred3, dx65);
  L312():
    n_ahead30 = force? n_ahead29;
    checkMissing(n_ahead30);
    rep_int5 = ldf `rep.int` in base;
    r202 = dyn rep_int5(dx66, n_ahead30);
    check L313() else D116();
  D67():
    deopt 241 [r117];
  D85():
    deopt 294 [i73, ar11, x22];
  D94():
    deopt 322 [x32, n19];
  D96():
    deopt 330 [se_fit3];
  D110():
    deopt 384 [object45];
  D111():
    deopt 388 [n_ahead27];
  D116():
    deopt 404 [pred10, r202];
  L17(i8, dx19):
    x1 = ld x;
    check L139() else D37();
  L29(dx41):
    goto L31(dx41);
  L43(i91, dx54):
    st x = dx54;
    goto L39(i91);
  L136():
    dr16 = tryDispatchBuiltin.1("[", ar3);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L138() else L137(i2);
  L137(i6):
    __1 = ldf `[` in base;
    r72 = dyn __1(ar3, 1, <missing>, <missing>);
    goto L17(i6, r72);
  L182():
    dr30 = tryDispatchBuiltin.1("[", x15);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L184() else L183(dr30);
  L183(x17):
    n10 = ld n;
    check L185() else D59();
  L196():
    l10 = ld pred;
    colnames__ = ldf `colnames<-`;
    check L197() else D68();
  L231():
    x23 = force? x22;
    checkMissing(x23);
    c34 = `is.object`(x23);
    if c34 then L232() else L233(i73, ar11, x23);
  L242():
    dr42 = tryDispatchBuiltin.0("[<-", l12, r152);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L244() else L243(i78, r152, dr42);
  L243(i89, r154, l14):
    n17 = ld n;
    check L245() else D91();
  L250():
    dx55 = getTryDispatchBuiltinValue(dr44);
    goto L45(dx55);
  L251():
    n20 = force? n19;
    checkMissing(n20);
    sym12 = ldf seq_len;
    base12 = ldf seq_len in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L252() else L253();
  L255():
    se_fit4 = force? se_fit3;
    checkMissing(se_fit4);
    c37 = `as.logical`(se_fit4);
    if c37 then L256() else L47();
  L296():
    object46 = force? object45;
    checkMissing(object46);
    c42 = `is.object`(object46);
    if c42 then L298() else L299(object46);
  L301():
    n_ahead28 = force? n_ahead27;
    checkMissing(n_ahead28);
    rep_int4 = ldf `rep.int` in base;
    r198 = dyn rep_int4(r195, n_ahead28);
    check L302() else D112();
  L313():
    goto L60(pred10, r202);
  D37():
    deopt 127 [i8, x1];
  D59():
    deopt 209 [x17, n10];
  D68():
    deopt 243 [r117, l10, r117];
  D91():
    deopt 311 [i89, r154, l14, r152, n17];
  D112():
    deopt 391 [r198];
  L41(i82, ar15, dx52):
    r150 = `*`(ar15, dx52);
    sum = ldf sum in base;
    r151 = dyn sum(r150);
    check L240() else D89();
  L46(x35, n23, r160):
    r162 = `+`(n23, r160);
    __8 = ldf `[` in base;
    r163 = dyn __8(x35, r162);
    goto L45(r163);
  L47():
    goto L54(NULL);
  L54(dx61):
    goto L55();
  L138():
    dx18 = getTryDispatchBuiltinValue(dr16);
    goto L17(i2, dx18);
  L139():
    x2 = force? x1;
    checkMissing(x2);
    c17 = `is.object`(x2);
    if c17 then L140() else L141(i8, x2);
  L184():
    dx40 = getTryDispatchBuiltinValue(dr30);
    goto L29(dx40);
  L185():
    n11 = force? n10;
    checkMissing(n11);
    sym6 = ldf seq_len;
    base6 = ldf seq_len in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L186() else L187();
  L197():
    r118 = dyn colnames__(l10, NULL, r117);
    check L198() else D69();
  L232():
    dr40 = tryDispatchBuiltin.1("[", x23);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L234() else L233(i73, ar11, dr40);
  L233(i80, ar13, x25):
    n15 = ld n;
    check L235() else D86();
  L244():
    dx53 = getTryDispatchBuiltinValue(dr42);
    goto L43(i78, dx53);
  L245():
    n18 = force? n17;
    checkMissing(n18);
    i92 = ld i;
    check L246() else D92();
  L252():
    n_ahead19 = ld `n.ahead`;
    check L254() else D95();
  L253():
    r159 = dyn base12(<sym n.ahead>);
    goto L46(x32, n20, r159);
  L256():
    sym13 = ldf `.Call`;
    base13 = ldf `.Call` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L257() else L258();
  L297(dx64):
    r197 = sqrt(dx64);
    goto L59(r197);
  L298():
    dr50 = tryDispatchBuiltin.1("$", object46);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L300() else L299(dr50);
  L299(object48):
    r196 = `$`(object48, <sym var.pred>);
    goto L297(r196);
  L302():
    goto L58(r198);
  D69():
    deopt 245 [r117, r118];
  D86():
    deopt 296 [i80, ar13, x25, n15];
  D89():
    deopt 307 [i82, r151];
  D92():
    deopt 312 [i89, r154, l14, r152, n18, i92];
  D95():
    deopt 324 [x32, n20, n_ahead19];
  L18(i12, dx21):
    ___ = ldf `%*%` in base;
    r76 = dyn ___(dx19, dx21);
    check L145() else D40();
  L30(n14, r101):
    r103 = `+`(n14, r101);
    __6 = ldf `[` in base;
    r104 = dyn __6(x15, r103, <missing>);
    goto L29(r104);
  L48(r165):
    st psi = r165;
    sym14 = ldf cumsum;
    base14 = ldf cumsum in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L262() else L263();
  L140():
    dr18 = tryDispatchBuiltin.1("[", x2);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L142() else L141(i8, dr18);
  L141(i10, x4):
    n = ld n;
    check L143() else D38();
  L186():
    n_ahead7 = ld `n.ahead`;
    check L188() else D60();
  L187():
    r100 = dyn base6(<sym n.ahead>);
    goto L30(n11, r100);
  L198():
    st pred = r118;
    se_fit1 = ld `se.fit`;
    check L199() else D70();
  L234():
    dx51 = getTryDispatchBuiltinValue(dr40);
    goto L41(i73, ar11, dx51);
  L235():
    n16 = force? n15;
    checkMissing(n16);
    i83 = ld i;
    check L236() else D87();
  L240():
    goto L40(i82, r151);
  L246():
    i93 = force? i92;
    checkMissing(i93);
    r157 = `+`(n18, i93);
    ___4 = ldf `[<-` in base;
    r158 = dyn ___4(l14, r152, r157);
    goto L43(i89, r158);
  L254():
    n_ahead20 = force? n_ahead19;
    checkMissing(n_ahead20);
    r161 = seq_len(n_ahead20);
    goto L46(x32, n20, r161);
  L257():
    C_ar2ma = ld C_ar2ma;
    check L259() else D97();
  L258():
    r164 = dyn base13(<sym C_ar2ma>, <sym ar>, <lang `-`(n.ahead, 1)>);
    goto L48(r164);
  L300():
    dx63 = getTryDispatchBuiltinValue(dr50);
    goto L297(dx63);
  D38():
    deopt 129 [i10, x4, n];
  D40():
    deopt 139 [i12, r76];
  D60():
    deopt 211 [x17, n11, n_ahead7];
  D70():
    deopt 247 [se_fit1];
  D87():
    deopt 297 [i80, ar13, x25, n16, i83];
  D97():
    deopt 333 [C_ar2ma];
  L49(r169):
    st vars = r169;
    sym16 = ldf sqrt;
    base16 = ldf sqrt in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L269() else L270();
  L142():
    dx20 = getTryDispatchBuiltinValue(dr18);
    goto L18(i8, dx20);
  L143():
    n1 = force? n;
    checkMissing(n1);
    i13 = ld i;
    check L144() else D39();
  L145():
    xint = ld xint;
    check L146() else D41();
  L188():
    n_ahead8 = force? n_ahead7;
    checkMissing(n_ahead8);
    r102 = seq_len(n_ahead8);
    goto L30(n11, r102);
  L199():
    se_fit2 = force? se_fit1;
    checkMissing(se_fit2);
    c28 = `as.logical`(se_fit2);
    if c28 then L200() else L32();
  L236():
    i84 = force? i83;
    checkMissing(i84);
    r141 = `+`(n16, i84);
    sym11 = ldf seq_len;
    base11 = ldf seq_len in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L237() else L238();
  L259():
    C_ar2ma1 = force? C_ar2ma;
    checkMissing(C_ar2ma1);
    ar19 = ld ar;
    check L260() else D98();
  L262():
    sym15 = ldf c;
    base15 = ldf c in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L264() else L265();
  L263():
    r168 = dyn base14(<lang c(1.0, `^`(psi, 2.0))>);
    goto L49(r168);
  D39():
    deopt 130 [i10, x4, n1, i13];
  D41():
    deopt 139 [i12, r76, xint];
  D98():
    deopt 334 [C_ar2ma1, ar19];
  L32():
    goto L33(NULL);
  L33(r123):
    goto L34();
  L42(i87, ar18, x28, r145, r146):
    r148 = `-`(r145, r146);
    __7 = ldf `[` in base;
    r149 = dyn __7(x28, r148);
    goto L41(i87, ar18, r149);
  L50(r171):
    cumsum = ldf cumsum in base;
    r174 = dyn cumsum(r171);
    check L268() else D102();
  L51(r176):
    c40 = `is.object`(r176);
    if c40 then L277() else L278(r176);
  L144():
    i14 = force? i13;
    checkMissing(i14);
    r73 = `+`(n1, i14);
    r74 = `-`(r73, 1);
    __2 = ldf `[` in base;
    r75 = dyn __2(x2, r74, <missing>);
    goto L18(i10, r75);
  L146():
    xint1 = force? xint;
    checkMissing(xint1);
    r77 = `+`(r76, xint1);
    l3 = ld x;
    c18 = `is.object`(l3);
    if c18 then L147() else L148(i12, r77, l3);
  L200():
    warning = ldf warning;
    check L201() else D71();
  L237():
    p37 = ld p;
    check L239() else D88();
  L238():
    r144 = dyn base11(<sym p>);
    goto L42(i80, ar13, x25, r141, r144);
  L260():
    ar20 = force? ar19;
    checkMissing(ar20);
    n_ahead21 = ld `n.ahead`;
    check L261() else D99();
  L264():
    psi = ld psi;
    check L266() else D100();
  L265():
    r170 = dyn base15(1.0, <lang `^`(psi, 2.0)>);
    goto L50(r170);
  L269():
    object41 = ld object;
    check L271() else D103();
  L270():
    r175 = dyn base16(<lang `*`(`$`(object, var.pred), vars)>);
    goto L51(r175);
  D71():
    deopt 250 [];
  D88():
    deopt 300 [i80, ar13, x25, r141, p37];
  D99():
    deopt 335 [C_ar2ma1, ar20, n_ahead21];
  D100():
    deopt 346 [psi];
  D102():
    deopt 353 [r174];
  D103():
    deopt 356 [object41];
  L19(i18, dx23):
    st x = dx23;
    p21 = ld p;
    check L152() else D44();
  L52(dx60):
    st se = dx60;
    goto L54(dx60);
  L147():
    dr20 = tryDispatchBuiltin.0("[<-", l3, r77);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L149() else L148(i12, r77, dr20);
  L148(i16, r79, l5):
    n2 = ld n;
    check L150() else D42();
  L201():
    r119 = dyn warning("'se.fit' not yet implemented for multivariate models");
    check L202() else D72();
  L239():
    p38 = force? p37;
    checkMissing(p38);
    r147 = seq_len(p38);
    goto L42(i80, ar13, x25, r141, r147);
  L261():
    n_ahead22 = force? n_ahead21;
    checkMissing(n_ahead22);
    r166 = `-`(n_ahead22, 1);
    vargs = dots[ar20, r166];
    r167 = `.Call`(C_ar2ma1, vargs, <missing>);
    goto L48(r167);
  L266():
    psi1 = force? psi;
    checkMissing(psi1);
    r172 = `^`(psi1, 2.0);
    c38 = ldf c in base;
    r173 = dyn c38(1.0, r172);
    check L267() else D101();
  L268():
    goto L49(r174);
  L271():
    object42 = force? object41;
    checkMissing(object42);
    c39 = `is.object`(object42);
    if c39 then L273() else L274(object42);
  L277():
    dr48 = tryDispatchBuiltin.1("[", r176);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L279() else L278(dr48);
  L278(r181):
    sym17 = ldf seq_len;
    base17 = ldf seq_len in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L280() else L281();
  D42():
    deopt 143 [i16, r79, l5, r77, n2];
  D44():
    deopt 151 [i18, p21];
  D72():
    deopt 252 [r119];
  D101():
    deopt 351 [r173];
  L53(r185, r186):
    __9 = ldf `[` in base;
    r188 = dyn __9(r185, r186);
    goto L52(r188);
  L149():
    dx22 = getTryDispatchBuiltinValue(dr20);
    goto L19(i12, dx22);
  L150():
    n3 = force? n2;
    checkMissing(n3);
    i19 = ld i;
    check L151() else D43();
  L152():
    p22 = force? p21;
    checkMissing(p22);
    r84 = `>`(p22, 1);
    c19 = `as.logical`(r84);
    if c19 then L153() else L20();
  L202():
    matrix3 = ldf matrix;
    check L203() else D73();
  L267():
    goto L50(r173);
  L272(dx58):
    vars = ld vars;
    check L276() else D104();
  L273():
    dr46 = tryDispatchBuiltin.1("$", object42);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L275() else L274(dr46);
  L274(object44):
    r177 = `$`(object44, <sym var.pred>);
    goto L272(r177);
  L279():
    dx59 = getTryDispatchBuiltinValue(dr48);
    goto L52(dx59);
  L280():
    n_ahead23 = ld `n.ahead`;
    check L282() else D105();
  L281():
    r184 = dyn base17(<sym n.ahead>);
    goto L53(r181, r184);
  D43():
    deopt 144 [i16, r79, l5, r77, n3, i19];
  D73():
    deopt 254 [];
  D104():
    deopt 358 [dx58, vars];
  D105():
    deopt 363 [r181, n_ahead23];
  L20():
    goto L27(i18);
  L27(i69):
    goto L16(i69);
  L151():
    i20 = force? i19;
    checkMissing(i20);
    r82 = `+`(n3, i20);
    ___1 = ldf `[<-` in base;
    r83 = dyn ___1(l3, r82, <missing>, r77);
    goto L19(i16, r83);
  L153():
    p23 = ld p;
    check L154() else D45();
  L203():
    p32 = prom<V +>{
      n_ahead13 = ld `n.ahead`;
      n_ahead14 = force? n_ahead13;
      checkMissing(n_ahead14);
      return n_ahead14;
    };
    p33 = prom<V +>{
      nser14 = ld nser;
      nser15 = force? nser14;
      checkMissing(nser15);
      return nser15;
    };
    r122 = dyn matrix3(NA_LGL, p32, p33);
    check L204() else D74();
  L275():
    dx57 = getTryDispatchBuiltinValue(dr46);
    goto L272(dx57);
  L276():
    vars1 = force? vars;
    checkMissing(vars1);
    r178 = `*`(dx58, vars1);
    r179 = sqrt(r178);
    goto L51(r179);
  L282():
    n_ahead24 = force? n_ahead23;
    checkMissing(n_ahead24);
    r187 = seq_len(n_ahead24);
    goto L53(r181, r187);
  D45():
    deopt 156 [i18, 2, p23];
  D74():
    deopt 258 [r122];
  L154():
    p24 = force? p23;
    checkMissing(p24);
    r85 = `:`(2, p24);
    s1 = toForSeq(r85);
    l6 = length(s1);
    i23 = 0;
    goto L21(i18, i23);
  L204():
    st se = r122;
    goto L33(r122);
  L21(i24, i25):
    i26 = `+`.1(i25, 1);
    c20 = `<`.1(l6, i26);
    if c20 then L155() else L26();
  L26():
    x5 = `[[`(s1, i26, NULL, TRUE);
    st j = x5;
    x6 = ld x;
    check L156() else D46();
  L155():
    goto L27(i24);
  D46():
    deopt 159 [i24, i26, x6];
  L156():
    x7 = force? x6;
    checkMissing(x7);
    c21 = `is.object`(x7);
    if c21 then L157() else L158(i24, i26, x7);
  L22(i37, i38, dx25):
    ar6 = ld ar;
    check L162() else D49();
  L157():
    dr22 = tryDispatchBuiltin.1("[", x7);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L159() else L158(i24, i26, dr22);
  L158(i33, i34, x9):
    n4 = ld n;
    check L160() else D47();
  D47():
    deopt 161 [i33, i34, x9, n4];
  D49():
    deopt 168 [i37, i38, dx25, ar6];
  L159():
    dx24 = getTryDispatchBuiltinValue(dr22);
    goto L22(i24, i26, dx24);
  L160():
    n5 = force? n4;
    checkMissing(n5);
    i39 = ld i;
    check L161() else D48();
  L162():
    ar7 = force? ar6;
    checkMissing(ar7);
    c22 = `is.object`(ar7);
    if c22 then L163() else L164(i37, i38, dx25, ar7);
  D48():
    deopt 162 [i33, i34, x9, n5, i39];
  L23(i47, i48, dx30, dx31):
    x10 = ld x;
    check L167() else D51();
  L161():
    i40 = force? i39;
    checkMissing(i40);
    r86 = `+`(n5, i40);
    __3 = ldf `[` in base;
    r87 = dyn __3(x7, r86, <missing>);
    goto L22(i33, i34, r87);
  L163():
    dr24 = tryDispatchBuiltin.1("[", ar7);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L165() else L164(i37, i38, dx25, dr24);
  L164(i43, i44, dx27, ar9):
    j = ld j;
    check L166() else D50();
  D50():
    deopt 170 [i43, i44, dx27, ar9, j];
  D51():
    deopt 176 [i47, i48, dx30, x10];
  L165():
    dx29 = getTryDispatchBuiltinValue(dr24);
    goto L23(i37, i38, dx25, dx29);
  L166():
    j1 = force? j;
    __4 = ldf `[` in base;
    r88 = dyn __4(ar7, j1, <missing>, <missing>);
    goto L23(i43, i44, dx27, r88);
  L167():
    x11 = force? x10;
    checkMissing(x11);
    c23 = `is.object`(x11);
    if c23 then L168() else L169(i47, i48, dx30, x11);
  L24(i55, i56, dx36, dx37):
    ___2 = ldf `%*%` in base;
    r92 = dyn ___2(dx31, dx37);
    check L174() else D55();
  L168():
    dr26 = tryDispatchBuiltin.1("[", x11);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L170() else L169(i47, i48, dx30, dr26);
  L169(i51, i52, dx33, x13):
    n6 = ld n;
    check L171() else D52();
  D52():
    deopt 178 [i51, i52, dx33, x13, n6];
  D55():
    deopt 188 [i55, i56, dx36, r92];
  L170():
    dx35 = getTryDispatchBuiltinValue(dr26);
    goto L24(i47, i48, dx30, dx35);
  L171():
    n7 = force? n6;
    checkMissing(n7);
    i57 = ld i;
    check L172() else D53();
  L174():
    r93 = `+`(dx36, r92);
    l7 = ld x;
    c24 = `is.object`(l7);
    if c24 then L175() else L176(i55, i56, r93, l7);
  D53():
    deopt 179 [i51, i52, dx33, x13, n7, i57];
  L25(i65, i66, dx39):
    st x = dx39;
    goto L21(i65, i66);
  L172():
    i58 = force? i57;
    checkMissing(i58);
    r89 = `+`(n7, i58);
    j2 = ld j;
    check L173() else D54();
  L175():
    dr28 = tryDispatchBuiltin.0("[<-", l7, r93);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L177() else L176(i55, i56, r93, dr28);
  L176(i61, i62, r95, l9):
    n8 = ld n;
    check L178() else D56();
  D54():
    deopt 181 [i51, i52, dx33, x13, r89, j2];
  D56():
    deopt 191 [i61, i62, r95, l9, r93, n8];
  L173():
    j3 = force? j2;
    checkMissing(j3);
    r90 = `-`(r89, j3);
    __5 = ldf `[` in base;
    r91 = dyn __5(x11, r90, <missing>);
    goto L24(i51, i52, dx33, r91);
  L177():
    dx38 = getTryDispatchBuiltinValue(dr28);
    goto L25(i55, i56, dx38);
  L178():
    n9 = force? n8;
    checkMissing(n9);
    i67 = ld i;
    check L179() else D57();
  D57():
    deopt 192 [i61, i62, r95, l9, r93, n9, i67];
  L179():
    i68 = force? i67;
    checkMissing(i68);
    r98 = `+`(n9, i68);
    ___3 = ldf `[<-` in base;
    r99 = dyn ___3(l7, r98, <missing>, r93);
    goto L25(i61, i62, r99);
  }
}