fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg c1:cls, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg c2:cls, reg r9:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg c3:cls, reg r12:V, reg data_frame:cls, reg gl:cls, reg r13:V, reg p:p(V +), reg factor:cls, reg N:*, reg N1:V, reg p1:p(V +), reg r16:V, reg p2:p(V +), reg factor1:cls, reg P:*, reg P1:V, reg p3:p(V +), reg r19:V, reg p4:p(V +), reg factor2:cls, reg K:*, reg K1:V, reg p5:p(V +), reg r22:V, reg p6:p(V +), reg yield:*, reg yield1:V, reg p7:p(V +), reg r25:V, reg replications:cls, reg __:cls, reg r26:V, reg p8:p(V +), reg npk:*, reg npk1:V, reg p9:p(V +), reg r29:V |
    mkenv;
    r = clos inner1508245209;
    st replications = r;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r2):
    st N = r2;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L4():
    c = ldf c in base;
    r3 = dyn c(0.0, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 1.0, 1.0, 0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 1.0, 0.0, 0.0);
    check L6() else D0();
  L5():
    r1 = dyn base(0.0, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 1.0, 1.0, 0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 1.0, 0.0, 0.0);
    goto L0(r1);
  D0():
    deopt 30 [r3];
  L1(r5):
    st P = r5;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L10() else L11();
  L6():
    goto L0(r3);
  L7():
    c1 = ldf c in base;
    r6 = dyn c1(1.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 0.0);
    check L9() else D1();
  L8():
    r4 = dyn base1(1.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 0.0);
    goto L1(r4);
  D1():
    deopt 59 [r6];
  L2(r8):
    st K = r8;
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L13() else L14();
  L9():
    goto L1(r6);
  L10():
    c2 = ldf c in base;
    r9 = dyn c2(1.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 0.0);
    check L12() else D2();
  L11():
    r7 = dyn base2(1.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 0.0);
    goto L2(r7);
  D2():
    deopt 88 [r9];
  L3(r11):
    st yield = r11;
    data_frame = ldf `data.frame`;
    check L16() else D4();
  L12():
    goto L2(r9);
  L13():
    c3 = ldf c in base;
    r12 = dyn c3(49.5, 62.8, 46.8, 57.0, 59.8, 58.5, 55.5, 56.0, 62.8, 55.8, 69.5, 55.0, 62.0, 48.8, 45.5, 44.2, 52.0, 51.5, 49.8, 48.8, 57.2, 59.0, 53.2, 56.0);
    check L15() else D3();
  L14():
    r10 = dyn base3(49.5, 62.8, 46.8, 57.0, 59.8, 58.5, 55.5, 56.0, 62.8, 55.8, 69.5, 55.0, 62.0, 48.8, 45.5, 44.2, 52.0, 51.5, 49.8, 48.8, 57.2, 59.0, 53.2, 56.0);
    goto L3(r10);
  D3():
    deopt 117 [r12];
  D4():
    deopt 120 [];
  L15():
    goto L3(r12);
  L16():
    p = prom<V +>{
      gl = ldf gl;
      r13 = dyn gl(6.0, 4.0);
      return r13;
    };
    p2 = prom<V +>{
      factor = ldf factor;
      p1 = prom<V +>{
        N = ld N;
        N1 = force? N;
        checkMissing(N1);
        return N1;
      };
      r16 = dyn factor(p1);
      return r16;
    };
    p4 = prom<V +>{
      factor1 = ldf factor;
      p3 = prom<V +>{
        P = ld P;
        P1 = force? P;
        checkMissing(P1);
        return P1;
      };
      r19 = dyn factor1(p3);
      return r19;
    };
    p6 = prom<V +>{
      factor2 = ldf factor;
      p5 = prom<V +>{
        K = ld K;
        K1 = force? K;
        checkMissing(K1);
        return K1;
      };
      r22 = dyn factor2(p5);
      return r22;
    };
    p7 = prom<V +>{
      yield = ld yield;
      yield1 = force? yield;
      checkMissing(yield1);
      return yield1;
    };
    r25 = dyn data_frame[block, N, P, K, yield](p, p2, p4, p6, p7);
    check L17() else D5();
  D5():
    deopt 131 [r25];
  L17():
    st npk = r25;
    replications = ldf replications;
    check L18() else D6();
  D6():
    deopt 134 [];
  L18():
    p8 = prom<V +>{
      __ = ldf `~` in base;
      r26 = dyn __(<lang `-`(., yield)>);
      return r26;
    };
    p9 = prom<V +>{
      npk = ld npk;
      npk1 = force? npk;
      checkMissing(npk1);
      return npk1;
    };
    r29 = dyn replications(p8, p9);
    check L19() else D7();
  D7():
    deopt 137 [r29];
  L19():
    popenv;
    return r29;
  }
}
fun inner1508245209(formula, data, `na.action`) {
  (reg formula:*, reg data:*, reg na_action:*) -+> V { var formula:*, var data:*, reg data_isMissing:L, reg data_orDefault:*, var `na.action`:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c5:L, reg r4:V, reg formula1:*, reg formula2:V, reg inherits:cls, reg r5:V, reg c6:L, reg c7:V, reg c9:L, reg formula3:*, reg formula4:V, reg __:cls, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg formula5:*, reg formula6:V, reg inherits1:cls, reg r10:V, reg r11:V, reg c10:L, reg as_formula:cls, reg formula7:*, reg formula8:V, reg p:p(V +), reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg formula9:*, reg formula10:V, reg length:cls, reg r16:V, reg r17:V, reg c11:L, reg __1:cls, reg r18:V, reg formula11:*, reg formula12:V, reg c12:L, reg formula14:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __2:cls, reg r19:V, reg l:*, reg c13:L, reg dx3:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx5:V, reg dx7:V, reg ____:cls, reg r20:V, reg f:*, reg f1:V, reg terms:cls, reg formula15:*, reg formula16:V, reg p1:p(V +), reg data1:*, reg data2:V, reg p2:p(V +), reg r23:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg r26:V, reg missing1:cls, reg r27:V, reg c14:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg r29:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r30:V, reg r31:V, reg data3:*, reg data4:V, reg attr:cls, reg r32:V, reg c15:V, reg r33:V, reg c16:L, reg c18:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r34:V, reg c21:L, reg r35:V, reg tj:*, reg tj1:V, reg is_function:cls, reg r36:V, reg c22:L, reg c23:V, reg c25:L, reg tj2:*, reg tj3:V, reg tj4:V, reg getOption:cls, reg r37:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r38:V, reg r39:V, reg naa:*, reg naa1:V, reg c26:V, reg r40:V, reg c27:L, reg match_fun:cls, reg naa2:*, reg naa3:V, reg p3:p(V +), reg r42:V, reg na_fail:*, reg na_fail1:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r43:V, reg r44:V, reg formula17:*, reg formula18:V, reg attr1:cls, reg r45:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r46:V, reg r47:V, reg formula19:*, reg formula20:V, reg attr2:cls, reg r48:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r49:V, reg r50:V, reg formula21:*, reg formula22:V, reg attr3:cls, reg r51:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r52:V, reg r53:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r54:V, reg r55:V, reg formula23:*, reg formula24:V, reg attr4:cls, reg r56:V, reg as_character:cls, reg r57:V, reg c28:L, reg r59:V, reg dr4:V, reg dc2:L, reg dx8:V, reg dx9:V, reg __3:cls, reg r60:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r61:V, reg r62:V, reg data5:*, reg data6:V, reg c29:V, reg c30:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r63:V, reg r64:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r65:V, reg r66:V, reg quote:cls, reg r67:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r68:V, reg r69:V, reg formula25:*, reg formula26:V, reg attr5:cls, reg r70:V, reg c31:cls, reg r71:V, reg eval:cls, reg sym18:cls, reg base18:cls, reg guard18:L, reg r72:V, reg r73:V, reg v:*, reg v1:V, reg as_call:cls, reg r74:V, reg p4:p(V +), reg parent_frame:cls, reg r76:V, reg p5:p(V +), reg r78:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r80:V, reg r81:V, reg na_action1:*, reg na_action2:V, reg is_function1:cls, reg r82:V, reg r83:V, reg c32:L, reg stop:cls, reg r84:V, reg na_action3:cls, reg data7:*, reg data8:V, reg p6:p(V +), reg r87:V, reg l3:*, reg class__:cls, reg r88:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r89:V, reg r90:V, reg o:*, reg o1:V, reg length1:cls, reg r91:V, reg setNames:cls, reg sym21:cls, reg base21:cls, reg guard21:L, reg r92:V, reg r93:V, reg n:*, reg n1:V, reg vector:cls, reg r94:V, reg p7:p(V +), reg labels:*, reg labels1:V, reg p8:p(V +), reg r97:V, reg numeric:cls, reg _row_names_info:cls, reg data9:*, reg data10:V, reg p9:p(V +), reg r99:V, reg p10:p(V +), reg r101:V, reg lapply:cls, reg data11:*, reg data12:V, reg p11:p(V +), reg r103:cls, reg p12:p(V +), reg r105:V, reg sapply:cls, reg data13:*, reg data14:V, reg p13:p(V +), reg r107:cls, reg p14:p(V +), reg r109:V, reg r110:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r111:V, reg r112:V, reg n2:*, reg n3:V, reg r113:I, reg s:V, reg l4:I, reg i:I, reg i1:I, reg i2:I, reg c33:L, reg x:V, reg labels2:*, reg labels3:V, reg c34:L, reg i6:I, reg labels5:V, reg dr6:V, reg dc3:L, reg dx10:V, reg i8:I, reg dx11:V, reg i9:*, reg i10:V, reg __4:cls, reg r114:V, reg o2:*, reg o3:V, reg c35:L, reg i12:I, reg o5:V, reg dr8:V, reg dc4:L, reg dx12:V, reg i14:I, reg dx13:V, reg i15:*, reg i16:V, reg __5:cls, reg r115:V, reg r116:V, reg c36:L, reg i17:I, reg c37:V, reg startsWith:cls, reg l5:*, reg l6:V, reg p15:p(V +), reg r118:V, reg c39:L, reg c40:V, reg c42:L, reg l7:*, reg c43:L, reg i23:I, reg r120:dots, reg l9:*, reg dr10:V, reg dc5:L, reg dx14:V, reg i25:I, reg dx15:V, reg l10:*, reg l11:V, reg ____1:cls, reg r123:V, reg vars:*, reg vars1:V, reg c44:L, reg i29:I, reg vars3:V, reg dr12:V, reg dc6:L, reg dx16:V, reg i31:I, reg dx17:V, reg f3:*, reg f4:V, reg c45:L, reg i33:I, reg vars5:V, reg f6:V, reg dr14:V, reg dc7:L, reg dx18:V, reg i35:I, reg vars7:V, reg dx19:V, reg i36:*, reg i37:V, reg __6:cls, reg r125:V, reg r126:V, reg __7:cls, reg r127:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r128:V, reg i40:I, reg r129:V, reg notfactor:*, reg notfactor1:V, reg c46:L, reg i42:I, reg notfactor3:V, reg dr16:V, reg dc8:L, reg dx20:V, reg i44:I, reg dx21:V, reg select:*, reg select1:V, reg __8:cls, reg r130:V, reg any:cls, reg r131:V, reg c47:L, reg warning:cls, reg gettextf:cls, reg paste:cls, reg sym24:cls, reg base24:cls, reg guard24:L, reg r132:V, reg r133:V, reg nn:*, reg nn1:V, reg names:cls, reg r134:V, reg p16:p(V +), reg r136:V, reg p17:p(V +), reg r138:V, reg p18:p(V +), reg r140:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r142:V, reg i51:I, reg r143:V, reg select2:*, reg select3:V, reg length2:cls, reg r144:V, reg c48:L, reg tapply:cls, reg dummy:*, reg dummy1:V, reg p19:p(V +), reg sym26:cls, reg base26:cls, reg guard26:L, reg r146:V, reg r147:V, reg data15:*, reg data16:V, reg c49:L, reg data18:V, reg dr18:V, reg dc9:L, reg dx22:V, reg dx23:V, reg select4:*, reg select5:V, reg __9:cls, reg r148:V, reg unclass:cls, reg r149:V, reg p20:p(V +), reg length3:*, reg length4:V, reg p21:p(V +), reg r152:V, reg i54:I, reg unique:cls, reg as_vector:cls, reg tble:*, reg tble1:V, reg p22:p(V +), reg r155:V, reg p23:p(V +), reg r157:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r158:V, reg i57:I, reg r159:V, reg nrep:*, reg nrep1:V, reg length5:cls, reg r160:V, reg r161:V, reg c50:L, reg l12:*, reg c51:L, reg i61:I, reg r163:R, reg l14:*, reg dr20:V, reg dc10:L, reg dx24:V, reg i63:I, reg dx25:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r170:V, reg i66:I, reg r171:R, reg l17:*, reg r172:R, reg r173:V, reg tble2:*, reg tble3:V, reg is_na:cls, reg r174:V, reg ___:cls, reg r175:V, reg tble4:*, reg tble5:V, reg l18:*, reg c52:L, reg i68:I, reg tble7:V, reg l20:*, reg dr22:V, reg dc11:L, reg dx26:V, reg i70:I, reg tble9:V, reg dx27:V, reg l21:*, reg l22:V, reg ____2:cls, reg r176:V, reg i71:I, reg as_vector1:cls, reg nrep2:*, reg nrep3:V, reg p24:p(V +), reg r178:V, reg l23:*, reg c53:L, reg i73:I, reg r180:V, reg l25:*, reg dr24:V, reg dc12:L, reg dx28:V, reg i75:I, reg r182:V, reg dx29:V, reg l26:*, reg l27:V, reg ____3:cls, reg r183:V, reg balance:*, reg balance1:V, reg c54:L, reg unlist:cls, reg z:*, reg z1:V, reg p25:p(V +), reg r185:V, reg z2:*, reg z3:V |
    mkenv;
    st formula = formula;
    data_isMissing = missing.0(data);
    if data_isMissing then L0(NULL) else L0(data);
  L0(data_orDefault):
    st data = data_orDefault;
    st `na.action` = na_action;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L67() else L68();
  L1(r1):
    c = `as.logical`(r1);
    if c then L69() else L2(c);
  L67():
    missing = ldf missing in base;
    r2 = dyn missing(<sym data>);
    goto L1(r2);
  L68():
    r = dyn base(<sym data>);
    goto L1(r);
  L2(c2):
    c9 = `as.logical`(c2);
    if c9 then L75() else L4();
  L69():
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L70() else L71();
  L3(c5, r4):
    c6 = `as.logical`(r4);
    c7 = `&&`(c5, c6);
    goto L2(c7);
  L4():
    goto L5();
  L5():
    sym2 = ldf inherits;
    base2 = ldf inherits in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L78() else L79();
  L70():
    formula1 = ld formula;
    check L72() else D0();
  L71():
    r3 = dyn base1(<sym formula>, "data.frame");
    goto L3(c, r3);
  L75():
    formula3 = ld formula;
    check L76() else D2();
  D0():
    deopt 5 [c, formula1];
  D2():
    deopt 12 [formula3];
  L6(r9):
    r11 = `!`(r9);
    c10 = `as.logical`(r11);
    if c10 then L82() else L7();
  L72():
    formula2 = force? formula1;
    checkMissing(formula2);
    inherits = ldf inherits in base;
    r5 = dyn inherits(formula2, "data.frame", FALSE);
    check L73() else D1();
  L76():
    formula4 = force? formula3;
    checkMissing(formula4);
    st data = formula4;
    __ = ldf `~` in base;
    r6 = dyn __(<sym .>);
    st formula = r6;
    goto L5();
  L78():
    formula5 = ld formula;
    check L80() else D3();
  L79():
    r8 = dyn base2(<sym formula>, "terms");
    goto L6(r8);
  D1():
    deopt 10 [c, r5];
  D3():
    deopt 22 [formula5];
  L7():
    goto L13();
  L13():
    sym4 = ldf missing;
    base4 = ldf missing in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L102() else L103();
  L73():
    goto L3(c, r5);
  L80():
    formula6 = force? formula5;
    checkMissing(formula6);
    inherits1 = ldf inherits in base;
    r10 = dyn inherits1(formula6, "terms", FALSE);
    check L81() else D4();
  L82():
    as_formula = ldf `as.formula`;
    check L83() else D5();
  D4():
    deopt 27 [r10];
  D5():
    deopt 30 [];
  L14(r26):
    c14 = `as.logical`(r26);
    if c14 then L104() else L15();
  L81():
    goto L6(r10);
  L83():
    p = prom<V +>{
      formula7 = ld formula;
      formula8 = force? formula7;
      checkMissing(formula8);
      return formula8;
    };
    r13 = dyn as_formula(p);
    check L84() else D6();
  L102():
    missing1 = ldf missing in base;
    r27 = dyn missing1(<sym na.action>);
    goto L14(r27);
  L103():
    r25 = dyn base4(<sym na.action>);
    goto L14(r25);
  D6():
    deopt 32 [r13];
  L15():
    goto L24();
  L24():
    sym9 = ldf attr;
    base9 = ldf attr in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L131() else L132();
  L84():
    st formula = r13;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L85() else L86();
  L104():
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L105() else L106();
  L8(r15):
    r17 = `<`(r15, 3);
    c11 = `as.logical`(r17);
    if c11 then L89() else L9();
  L16(r29):
    r33 = `!`(r29);
    c16 = `as.logical`(r33);
    if c16 then L111() else L18(c16);
  L25(r44):
    st f = r44;
    sym10 = ldf attr;
    base10 = ldf attr in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L135() else L136();
  L85():
    formula9 = ld formula;
    check L87() else D7();
  L86():
    r14 = dyn base3(<sym formula>);
    goto L8(r14);
  L105():
    sym6 = ldf attr;
    base6 = ldf attr in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L107() else L108();
  L106():
    r28 = dyn base5(<lang `<-`(tj, attr(data, "na.action"))>);
    goto L16(r28);
  L131():
    formula17 = ld formula;
    check L133() else D24();
  L132():
    r43 = dyn base9(<sym formula>, "factors");
    goto L25(r43);
  D7():
    deopt 36 [formula9];
  D24():
    deopt 115 [formula17];
  L9():
    goto L12();
  L12():
    terms = ldf terms;
    check L99() else D11();
  L17(r31):
    st tj = r31;
    c15 = `==`(r31, NULL);
    goto L16(c15);
  L18(c18):
    c25 = `as.logical`(c18);
    if c25 then L117() else L20();
  L26(r47):
    st o = r47;
    sym11 = ldf attr;
    base11 = ldf attr in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L139() else L140();
  L87():
    formula10 = force? formula9;
    checkMissing(formula10);
    length = ldf length in base;
    r16 = dyn length(formula10);
    check L88() else D8();
  L89():
    __1 = ldf `~` in base;
    r18 = dyn __1(<sym y>, <sym x>);
    st f = r18;
    formula11 = ld formula;
    check L90() else D9();
  L107():
    data3 = ld data;
    check L109() else D13();
  L108():
    r30 = dyn base6(<sym data>, "na.action");
    goto L17(r30);
  L111():
    sym7 = ldf `is.function`;
    base7 = ldf `is.function` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L112() else L113();
  L133():
    formula18 = force? formula17;
    checkMissing(formula18);
    attr1 = ldf attr in base;
    r45 = dyn attr1(formula18, "factors");
    check L134() else D25();
  L135():
    formula19 = ld formula;
    check L137() else D26();
  L136():
    r46 = dyn base10(<sym formula>, "order");
    goto L26(r46);
  D8():
    deopt 39 [r16];
  D9():
    deopt 45 [formula11];
  D11():
    deopt 61 [];
  D13():
    deopt 75 [data3];
  D25():
    deopt 119 [r45];
  D26():
    deopt 123 [formula19];
  L19(c21, r35):
    c22 = `as.logical`(r35);
    c23 = `&&`(c21, c22);
    goto L18(c23);
  L20():
    getOption = ldf getOption;
    check L120() else D18();
  L21(tj4):
    goto L24();
  L27(r50):
    st labels = r50;
    sym12 = ldf `as.character`;
    base12 = ldf `as.character` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L143() else L144();
  L88():
    goto L8(r16);
  L90():
    formula12 = force? formula11;
    checkMissing(formula12);
    c12 = `is.object`(formula12);
    if c12 then L91() else L92(formula12);
  L99():
    p1 = prom<V +>{
      formula15 = ld formula;
      formula16 = force? formula15;
      checkMissing(formula16);
      return formula16;
    };
    p2 = prom<V +>{
      data1 = ld data;
      data2 = force? data1;
      checkMissing(data2);
      return data2;
    };
    r23 = dyn terms[, data](p1, p2);
    check L100() else D12();
  L109():
    data4 = force? data3;
    checkMissing(data4);
    attr = ldf attr in base;
    r32 = dyn attr(data4, "na.action");
    check L110() else D14();
  L112():
    tj = ld tj;
    check L114() else D15();
  L113():
    r34 = dyn base7(<sym tj>);
    goto L19(c16, r34);
  L117():
    tj2 = ld tj;
    check L118() else D17();
  L134():
    goto L25(r45);
  L137():
    formula20 = force? formula19;
    checkMissing(formula20);
    attr2 = ldf attr in base;
    r48 = dyn attr2(formula20, "order");
    check L138() else D27();
  L139():
    formula21 = ld formula;
    check L141() else D28();
  L140():
    r49 = dyn base11(<sym formula>, "term.labels");
    goto L27(r49);
  D12():
    deopt 65 [r23];
  D14():
    deopt 79 [r32];
  D15():
    deopt 85 [c16, tj];
  D17():
    deopt 90 [tj2];
  D18():
    deopt 94 [];
  D27():
    deopt 127 [r48];
  D28():
    deopt 131 [formula21];
  L10(dx1):
    l = ld f;
    c13 = `is.object`(l);
    if c13 then L94() else L95(dx1, l);
  L28(r53):
    c28 = `is.object`(r53);
    if c28 then L150() else L151(r53);
  L91():
    dr = tryDispatchBuiltin.1("[[", formula12);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L93() else L92(dr);
  L92(formula14):
    __2 = ldf `[[` in base;
    r19 = dyn __2(formula14, 2);
    goto L10(r19);
  L100():
    st formula = r23;
    goto L13();
  L110():
    goto L17(r32);
  L114():
    tj1 = force? tj;
    checkMissing(tj1);
    is_function = ldf `is.function` in base;
    r36 = dyn is_function(tj1);
    check L115() else D16();
  L118():
    tj3 = force? tj2;
    checkMissing(tj3);
    st `na.action` = tj3;
    goto L21(tj3);
  L120():
    r37 = dyn getOption("na.action");
    check L121() else D19();
  L138():
    goto L26(r48);
  L141():
    formula22 = force? formula21;
    checkMissing(formula22);
    attr3 = ldf attr in base;
    r51 = dyn attr3(formula22, "term.labels");
    check L142() else D29();
  L143():
    sym13 = ldf attr;
    base13 = ldf attr in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L145() else L146();
  L144():
    r52 = dyn base12(<lang attr(formula, "variables")>);
    goto L28(r52);
  D16():
    deopt 88 [c16, r36];
  D19():
    deopt 96 [r37];
  D29():
    deopt 135 [r51];
  L11(dx7):
    st f = dx7;
    f = ld f;
    check L97() else D10();
  L29(r55):
    as_character = ldf `as.character` in base;
    r57 = dyn as_character(r55);
    check L149() else D32();
  L30(dx9):
    st vars = dx9;
    sym14 = ldf `is.null`;
    base14 = ldf `is.null` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L153() else L154();
  L93():
    dx = getTryDispatchBuiltinValue(dr);
    goto L10(dx);
  L94():
    dr2 = tryDispatchBuiltin.0("[[<-", l, dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L96() else L95(dx1, dr2);
  L95(dx3, l2):
    ____ = ldf `[[<-` in base;
    r20 = dyn ____(l2, dx1, 3);
    goto L11(r20);
  L115():
    goto L19(c16, r36);
  L121():
    st naa = r37;
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L122() else L123();
  L142():
    goto L27(r51);
  L145():
    formula23 = ld formula;
    check L147() else D30();
  L146():
    r54 = dyn base13(<sym formula>, "variables");
    goto L29(r54);
  L150():
    dr4 = tryDispatchBuiltin.1("[", r53);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L152() else L151(dr4);
  L151(r59):
    __3 = ldf `[` in base;
    r60 = dyn __3(r59, -1);
    goto L30(r60);
  D10():
    deopt 55 [f];
  D30():
    deopt 141 [formula23];
  D32():
    deopt 147 [r57];
  L22(r39):
    r40 = `!`(r39);
    c27 = `as.logical`(r40);
    if c27 then L125() else L23();
  L31(r62):
    c30 = `as.logical`(r62);
    if c30 then L156() else L32();
  L96():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L11(dx5);
  L97():
    f1 = force? f;
    checkMissing(f1);
    st formula = f1;
    goto L12();
  L122():
    naa = ld naa;
    check L124() else D20();
  L123():
    r38 = dyn base8(<sym naa>);
    goto L22(r38);
  L147():
    formula24 = force? formula23;
    checkMissing(formula24);
    attr4 = ldf attr in base;
    r56 = dyn attr4(formula24, "variables");
    check L148() else D31();
  L149():
    goto L28(r57);
  L152():
    dx8 = getTryDispatchBuiltinValue(dr4);
    goto L30(dx8);
  L153():
    data5 = ld data;
    check L155() else D33();
  L154():
    r61 = dyn base14(<sym data>);
    goto L31(r61);
  D20():
    deopt 99 [naa];
  D31():
    deopt 145 [r56];
  D33():
    deopt 153 [data5];
  L23():
    na_fail = ld `na.fail`;
    check L129() else D23();
  L32():
    goto L36();
  L36():
    sym19 = ldf `is.function`;
    base19 = ldf `is.function` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L169() else L170();
  L124():
    naa1 = force? naa;
    checkMissing(naa1);
    c26 = `==`(naa1, NULL);
    goto L22(c26);
  L125():
    match_fun = ldf `match.fun`;
    check L126() else D21();
  L148():
    goto L29(r56);
  L155():
    data6 = force? data5;
    checkMissing(data6);
    c29 = `==`(data6, NULL);
    goto L31(c29);
  L156():
    sym15 = ldf c;
    base15 = ldf c in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L157() else L158();
  D21():
    deopt 104 [];
  D23():
    deopt 108 [na_fail];
  L33(r64):
    st v = r64;
    eval = ldf eval;
    check L166() else D37();
  L37(r81):
    r83 = `!`(r81);
    c32 = `as.logical`(r83);
    if c32 then L173() else L38();
  L126():
    p3 = prom<V +>{
      naa2 = ld naa;
      naa3 = force? naa2;
      checkMissing(naa3);
      return naa3;
    };
    r42 = dyn match_fun(p3);
    check L127() else D22();
  L129():
    na_fail1 = force? na_fail;
    checkMissing(na_fail1);
    st `na.action` = na_fail1;
    goto L21(na_fail1);
  L157():
    sym16 = ldf quote;
    base16 = ldf quote in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L159() else L160();
  L158():
    r63 = dyn base15(<lang quote(data.frame)>, <lang attr(formula, "variables")>);
    goto L33(r63);
  L169():
    na_action1 = ld `na.action`;
    check L171() else D39();
  L170():
    r80 = dyn base19(<sym na.action>);
    goto L37(r80);
  D22():
    deopt 106 [r42];
  D37():
    deopt 172 [];
  D39():
    deopt 181 [na_action1];
  L34(r66):
    sym17 = ldf attr;
    base17 = ldf attr in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L161() else L162();
  L38():
    goto L39();
  L39():
    na_action3 = ldf `na.action`;
    check L177() else D43();
  L127():
    st `na.action` = r42;
    goto L21(r42);
  L159():
    quote = ldf quote in base;
    r67 = dyn quote(<sym data.frame>);
    goto L34(r67);
  L160():
    r65 = dyn base16(<sym data.frame>);
    goto L34(r65);
  L166():
    p4 = prom<V +>{
      sym18 = ldf `as.call`;
      base18 = ldf `as.call` in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L1() else L2();
    L0(r73):
      return r73;
    L1():
      v = ld v;
      v1 = force? v;
      checkMissing(v1);
      as_call = ldf `as.call` in base;
      r74 = dyn as_call(v1);
      goto L0(r74);
    L2():
      r72 = dyn base18(<sym v>);
      goto L0(r72);
    };
    p5 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r76 = dyn parent_frame();
      return r76;
    };
    r78 = dyn eval(p4, p5);
    check L167() else D38();
  L171():
    na_action2 = force? na_action1;
    checkMissing(na_action2);
    is_function1 = ldf `is.function` in base;
    r82 = dyn is_function1(na_action2);
    check L172() else D40();
  L173():
    stop = ldf stop;
    check L174() else D41();
  D38():
    deopt 175 [r78];
  D40():
    deopt 184 [r82];
  D41():
    deopt 187 [];
  D43():
    deopt 193 [];
  L35(r69):
    c31 = ldf c in base;
    r71 = dyn c31(r66, r69);
    check L165() else D36();
  L161():
    formula25 = ld formula;
    check L163() else D34();
  L162():
    r68 = dyn base17(<sym formula>, "variables");
    goto L35(r68);
  L167():
    st data = r78;
    goto L36();
  L172():
    goto L37(r82);
  L174():
    r84 = dyn stop("na.action must be a function");
    check L175() else D42();
  L177():
    p6 = prom<V +>{
      data7 = ld data;
      data8 = force? data7;
      checkMissing(data8);
      return data8;
    };
    r87 = dyn na_action3(p6);
    check L178() else D44();
  D34():
    deopt 163 [formula25];
  D36():
    deopt 169 [r71];
  D42():
    deopt 189 [r84];
  D44():
    deopt 195 [r87];
  L163():
    formula26 = force? formula25;
    checkMissing(formula26);
    attr5 = ldf attr in base;
    r70 = dyn attr5(formula26, "variables");
    check L164() else D35();
  L165():
    goto L33(r71);
  L175():
    goto L39();
  L178():
    st data = r87;
    l3 = ld data;
    class__ = ldf `class<-`;
    check L179() else D45();
  D35():
    deopt 167 [r70];
  D45():
    deopt 200 [NULL, l3, NULL];
  L164():
    goto L35(r70);
  L179():
    r88 = dyn class__(l3, NULL, NULL);
    check L180() else D46();
  D46():
    deopt 202 [NULL, r88];
  L180():
    st data = r88;
    sym20 = ldf length;
    base20 = ldf length in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L181() else L182();
  L40(r90):
    st n = r90;
    setNames = ldf setNames;
    check L185() else D49();
  L181():
    o = ld o;
    check L183() else D47();
  L182():
    r89 = dyn base20(<sym o>);
    goto L40(r89);
  D47():
    deopt 206 [o];
  D49():
    deopt 212 [];
  L183():
    o1 = force? o;
    checkMissing(o1);
    length1 = ldf length in base;
    r91 = dyn length1(o1);
    check L184() else D48();
  L185():
    p7 = prom<V +>{
      sym21 = ldf vector;
      base21 = ldf vector in base;
      guard21 = `==`.4(sym21, base21);
      if guard21 then L1() else L2();
    L0(r93):
      return r93;
    L1():
      n = ld n;
      n1 = force? n;
      checkMissing(n1);
      vector = ldf vector in base;
      r94 = dyn vector("list", n1);
      goto L0(r94);
    L2():
      r92 = dyn base21("list", <sym n>);
      goto L0(r92);
    };
    p8 = prom<V +>{
      labels = ld labels;
      labels1 = force? labels;
      checkMissing(labels1);
      return labels1;
    };
    r97 = dyn setNames(p7, p8);
    check L186() else D50();
  D48():
    deopt 209 [r91];
  D50():
    deopt 215 [r97];
  L184():
    goto L40(r91);
  L186():
    st z = r97;
    numeric = ldf numeric;
    check L187() else D51();
  D51():
    deopt 218 [];
  L187():
    p10 = prom<V +>{
      _row_names_info = ldf `.row_names_info`;
      p9 = prom<V +>{
        data9 = ld data;
        data10 = force? data9;
        checkMissing(data10);
        return data10;
      };
      r99 = dyn _row_names_info(p9, 2);
      return r99;
    };
    r101 = dyn numeric(p10);
    check L188() else D52();
  D52():
    deopt 220 [r101];
  L188():
    st dummy = r101;
    lapply = ldf lapply;
    check L189() else D53();
  D53():
    deopt 223 [];
  L189():
    p11 = prom<V +>{
      data11 = ld data;
      data12 = force? data11;
      checkMissing(data12);
      return data12;
    };
    p12 = prom<V +>{
      r103 = clos inner2501545716;
      return r103;
    };
    r105 = dyn lapply(p11, p12);
    check L190() else D54();
  D54():
    deopt 226 [r105];
  L190():
    st data = r105;
    sapply = ldf sapply;
    check L191() else D55();
  D55():
    deopt 229 [];
  L191():
    p13 = prom<V +>{
      data13 = ld data;
      data14 = force? data13;
      checkMissing(data14);
      return data14;
    };
    p14 = prom<V +>{
      r107 = clos inner2501545716;
      return r107;
    };
    r109 = dyn sapply(p13, p14);
    check L192() else D56();
  D56():
    deopt 232 [r109];
  L192():
    r110 = `!`(r109);
    st notfactor = r110;
    st balance = TRUE;
    sym22 = ldf seq_len;
    base22 = ldf seq_len in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L193() else L194();
  L41(r112):
    s = toForSeq(r112);
    l4 = length(s);
    i = 0;
    goto L42(i);
  L193():
    n2 = ld n;
    check L195() else D57();
  L194():
    r111 = dyn base22(<sym n>);
    goto L41(r111);
  D57():
    deopt 239 [n2];
  L42(i1):
    i2 = `+`.1(i1, 1);
    c33 = `<`.1(l4, i2);
    if c33 then L196() else L65();
  L195():
    n3 = force? n2;
    checkMissing(n3);
    r113 = seq_len(n3);
    goto L41(r113);
  L65():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    labels2 = ld labels;
    check L197() else D58();
  L196():
    balance = ld balance;
    check L274() else D88();
  D58():
    deopt 242 [i2, labels2];
  D88():
    deopt 366 [balance];
  L197():
    labels3 = force? labels2;
    checkMissing(labels3);
    c34 = `is.object`(labels3);
    if c34 then L198() else L199(i2, labels3);
  L274():
    balance1 = force? balance;
    checkMissing(balance1);
    c54 = `as.logical`(balance1);
    if c54 then L275() else L66();
  L43(i8, dx11):
    st l = dx11;
    o2 = ld o;
    check L202() else D60();
  L66():
    z2 = ld z;
    check L279() else D91();
  L198():
    dr6 = tryDispatchBuiltin.1("[", labels3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L200() else L199(i2, dr6);
  L199(i6, labels5):
    i9 = ld i;
    check L201() else D59();
  L275():
    unlist = ldf unlist;
    check L276() else D89();
  D59():
    deopt 244 [i6, labels5, i9];
  D60():
    deopt 248 [i8, o2];
  D89():
    deopt 369 [];
  D91():
    deopt 372 [z2];
  L200():
    dx10 = getTryDispatchBuiltinValue(dr6);
    goto L43(i2, dx10);
  L201():
    i10 = force? i9;
    __4 = ldf `[` in base;
    r114 = dyn __4(labels5, i10);
    goto L43(i6, r114);
  L202():
    o3 = force? o2;
    checkMissing(o3);
    c35 = `is.object`(o3);
    if c35 then L203() else L204(i8, o3);
  L276():
    p25 = prom<V +>{
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      return z1;
    };
    r185 = dyn unlist(p25);
    check L277() else D90();
  L279():
    z3 = force? z2;
    checkMissing(z3);
    popenv;
    return z3;
  D90():
    deopt 371 [r185];
  L44(i14, dx13):
    r116 = `<`(dx13, 1.0);
    c36 = `as.logical`(r116);
    if c36 then L45(i14, c36) else L207();
  L203():
    dr8 = tryDispatchBuiltin.1("[", o3);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L205() else L204(i8, dr8);
  L204(i12, o5):
    i15 = ld i;
    check L206() else D61();
  L277():
    popenv;
    return r185;
  D61():
    deopt 250 [i12, o5, i15];
  L45(i17, c37):
    c42 = `as.logical`(c37);
    if c42 then L211() else L46();
  L205():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L44(i8, dx12);
  L206():
    i16 = force? i15;
    __5 = ldf `[` in base;
    r115 = dyn __5(o5, i16);
    goto L44(i12, r115);
  L207():
    startsWith = ldf startsWith;
    check L208() else D62();
  D62():
    deopt 256 [i14, c36];
  L46():
    vars = ld vars;
    check L218() else D65();
  L208():
    p15 = prom<V +>{
      l5 = ld l;
      l6 = force? l5;
      checkMissing(l6);
      return l6;
    };
    r118 = dyn startsWith(p15, "Error");
    check L209() else D63();
  L211():
    l7 = ld z;
    c43 = `is.object`(l7);
    if c43 then L212() else L213(i17, NULL, l7);
  D63():
    deopt 259 [i14, c36, r118];
  D65():
    deopt 272 [i17, vars];
  L47(i25, dx15):
    st z = dx15;
    goto L42(i25);
  L209():
    c39 = `as.logical`(r118);
    c40 = `||`(c36, c39);
    goto L45(i14, c40);
  L212():
    dr10 = tryDispatchBuiltin.0("[[<-", l7, NULL);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L214() else L213(i17, NULL, dr10);
  L213(i23, r120, l9):
    l10 = ld l;
    check L215() else D64();
  L218():
    vars1 = force? vars;
    checkMissing(vars1);
    c44 = `is.object`(vars1);
    if c44 then L219() else L220(i17, vars1);
  D64():
    deopt 264 [i23, r120, l9, NULL, l10];
  L49(i31, dx17):
    st select = dx17;
    sym23 = ldf any;
    base23 = ldf any in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L227() else L228();
  L214():
    dx14 = getTryDispatchBuiltinValue(dr10);
    goto L47(i17, dx14);
  L215():
    l11 = force? l10;
    ____1 = ldf `[[<-` in base;
    r123 = dyn ____1(l9, NULL, l11);
    goto L47(i23, r123);
  L219():
    dr12 = tryDispatchBuiltin.1("[", vars1);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L221() else L220(i17, dr12);
  L220(i29, vars3):
    f3 = ld f;
    check L222() else D66();
  D66():
    deopt 274 [i29, vars3, f3];
  L51(i40, r129):
    c47 = `as.logical`(r129);
    if c47 then L235() else L53();
  L221():
    dx16 = getTryDispatchBuiltinValue(dr12);
    goto L49(i17, dx16);
  L222():
    f4 = force? f3;
    checkMissing(f4);
    c45 = `is.object`(f4);
    if c45 then L223() else L224(i29, vars3, f4);
  L227():
    notfactor = ld notfactor;
    check L229() else D68();
  L228():
    r128 = dyn base23(<lang `<-`(nn, `[`(notfactor, select))>);
    goto L51(i31, r128);
  D68():
    deopt 287 [i31, notfactor];
  L50(i35, vars7, dx19):
    r126 = `>`(dx19, 0.0);
    __7 = ldf `[` in base;
    r127 = dyn __7(vars7, r126);
    goto L49(i35, r127);
  L53():
    sym25 = ldf length;
    base25 = ldf length in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L240() else L241();
  L223():
    dr14 = tryDispatchBuiltin.1("[", f4);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L225() else L224(i29, vars3, dr14);
  L224(i33, vars5, f6):
    i36 = ld i;
    check L226() else D67();
  L229():
    notfactor1 = force? notfactor;
    checkMissing(notfactor1);
    c46 = `is.object`(notfactor1);
    if c46 then L230() else L231(i31, notfactor1);
  L235():
    warning = ldf warning;
    check L236() else D71();
  D67():
    deopt 277 [i33, vars5, f6, i36];
  D71():
    deopt 296 [i40];
  L52(i44, dx21):
    st nn = dx21;
    any = ldf any in base;
    r131 = dyn any(dx21);
    check L234() else D70();
  L55(i51, r143):
    c48 = `as.logical`(r143);
    if c48 then L244() else L56();
  L225():
    dx18 = getTryDispatchBuiltinValue(dr14);
    goto L50(i29, vars3, dx18);
  L226():
    i37 = force? i36;
    __6 = ldf `[` in base;
    r125 = dyn __6(f4, <missing>, i37);
    goto L50(i33, vars5, r125);
  L230():
    dr16 = tryDispatchBuiltin.1("[", notfactor1);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L232() else L231(i31, dr16);
  L231(i42, notfactor3):
    select = ld select;
    check L233() else D69();
  L236():
    p18 = prom<V +>{
      gettextf = ldf gettextf;
      p17 = prom<V +>{
        paste = ldf paste;
        p16 = prom<V +>{
          sym24 = ldf names;
          base24 = ldf names in base;
          guard24 = `==`.4(sym24, base24);
          if guard24 then L1() else L2();
        L0(r133):
          return r133;
        L1():
          nn = ld nn;
          nn1 = force? nn;
          checkMissing(nn1);
          names = ldf names in base;
          r134 = dyn names(nn1);
          goto L0(r134);
        L2():
          r132 = dyn base24(<sym nn>);
          goto L0(r132);
        };
        r136 = dyn paste[, collapse](p16, ", ");
        return r136;
      };
      r138 = dyn gettextf("non-factors ignored: %s", p17);
      return r138;
    };
    r140 = dyn warning[, domain](p18, NA_LGL);
    check L237() else D72();
  L240():
    select2 = ld select;
    check L242() else D73();
  L241():
    r142 = dyn base25(<sym select>);
    goto L55(i40, r142);
  D69():
    deopt 289 [i42, notfactor3, select];
  D70():
    deopt 294 [i44, r131];
  D72():
    deopt 300 [i40, r140];
  D73():
    deopt 307 [i40, select2];
  L56():
    goto L57(i51);
  L57(i54):
    unique = ldf unique;
    check L248() else D77();
  L232():
    dx20 = getTryDispatchBuiltinValue(dr16);
    goto L52(i31, dx20);
  L233():
    select1 = force? select;
    __8 = ldf `[` in base;
    r130 = dyn __8(notfactor3, select1);
    goto L52(i42, r130);
  L234():
    goto L51(i44, r131);
  L237():
    goto L42(i40);
  L242():
    select3 = force? select2;
    checkMissing(select3);
    length2 = ldf length in base;
    r144 = dyn length2(select3);
    check L243() else D74();
  L244():
    tapply = ldf tapply;
    check L245() else D75();
  D74():
    deopt 310 [i40, r144];
  D75():
    deopt 312 [i51];
  D77():
    deopt 321 [i54];
  L243():
    goto L55(i40, r144);
  L245():
    p19 = prom<V +>{
      dummy = ld dummy;
      dummy1 = force? dummy;
      checkMissing(dummy1);
      return dummy1;
    };
    p20 = prom<V +>{
      sym26 = ldf unclass;
      base26 = ldf unclass in base;
      guard26 = `==`.4(sym26, base26);
      if guard26 then L2() else L3();
    L0(r147):
      return r147;
    L2():
      data15 = ld data;
      data16 = force? data15;
      checkMissing(data16);
      c49 = `is.object`(data16);
      if c49 then L4() else L5(data16);
    L3():
      r146 = dyn base26(<lang `[`(data, select)>);
      goto L0(r146);
    L1(dx23):
      unclass = ldf unclass in base;
      r149 = dyn unclass(dx23);
      goto L0(r149);
    L4():
      dr18 = tryDispatchBuiltin.1("[", data16);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L6() else L5(dr18);
    L5(data18):
      select4 = ld select;
      select5 = force? select4;
      __9 = ldf `[` in base;
      r148 = dyn __9(data18, select5);
      goto L1(r148);
    L6():
      dx22 = getTryDispatchBuiltinValue(dr18);
      goto L1(dx22);
    };
    p21 = prom<V +>{
      length3 = ld length;
      length4 = force? length3;
      checkMissing(length4);
      return length4;
    };
    r152 = dyn tapply(p19, p20, p21);
    check L246() else D76();
  L248():
    p23 = prom<V +>{
      as_vector = ldf `as.vector`;
      p22 = prom<V +>{
        tble = ld tble;
        tble1 = force? tble;
        checkMissing(tble1);
        return tble1;
      };
      r155 = dyn as_vector(p22);
      return r155;
    };
    r157 = dyn unique(p23);
    check L249() else D78();
  D76():
    deopt 316 [i51, r152];
  D78():
    deopt 323 [i54, r157];
  L246():
    st tble = r152;
    goto L57(i51);
  L249():
    st nrep = r157;
    sym27 = ldf length;
    base27 = ldf length in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L250() else L251();
  L58(i57, r159):
    r161 = `>`(r159, 1);
    c50 = `as.logical`(r161);
    if c50 then L254() else L59();
  L250():
    nrep = ld nrep;
    check L252() else D79();
  L251():
    r158 = dyn base27(<sym nrep>);
    goto L58(i54, r158);
  D79():
    deopt 327 [i54, nrep];
  L59():
    as_vector1 = ldf `as.vector`;
    check L268() else D85();
  L63(i71):
    goto L42(i71);
  L252():
    nrep1 = force? nrep;
    checkMissing(nrep1);
    length5 = ldf length in base;
    r160 = dyn length5(nrep1);
    check L253() else D80();
  L254():
    st balance = FALSE;
    l12 = ld tble;
    c51 = `is.object`(l12);
    if c51 then L255() else L256(i57, 0.0, l12);
  D80():
    deopt 330 [i54, r160];
  D85():
    deopt 355 [i57];
  L60(i63, dx25):
    st tble = dx25;
    tble4 = ld tble;
    check L262() else D83();
  L253():
    goto L58(i54, r160);
  L255():
    dr20 = tryDispatchBuiltin.0("[<-", l12, 0.0);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L257() else L256(i57, 0.0, dr20);
  L256(i61, r163, l14):
    sym28 = ldf `is.na`;
    base28 = ldf `is.na` in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L258() else L259();
  L268():
    p24 = prom<V +>{
      nrep2 = ld nrep;
      nrep3 = force? nrep2;
      checkMissing(nrep3);
      return nrep3;
    };
    r178 = dyn as_vector1(p24);
    check L269() else D86();
  D83():
    deopt 347 [i63, tble4];
  D86():
    deopt 357 [i57, r178];
  L61(i66, r171, l17, r172, r173):
    ___ = ldf `[<-` in base;
    r175 = dyn ___(l17, r172, r173);
    goto L60(i66, r175);
  L257():
    dx24 = getTryDispatchBuiltinValue(dr20);
    goto L60(i57, dx24);
  L258():
    tble2 = ld tble;
    check L260() else D81();
  L259():
    r170 = dyn base28(<sym tble>);
    goto L61(i61, r163, l14, 0.0, r170);
  L262():
    tble5 = force? tble4;
    checkMissing(tble5);
    l18 = ld z;
    c52 = `is.object`(l18);
    if c52 then L263() else L264(i63, tble5, l18);
  L269():
    l23 = ld z;
    c53 = `is.object`(l23);
    if c53 then L270() else L271(i57, r178, l23);
  D81():
    deopt 341 [i61, r163, l14, 0.0, tble2];
  L62(i70, tble9, dx27):
    st z = dx27;
    goto L63(i70);
  L64(i75, r182, dx29):
    st z = dx29;
    goto L63(i75);
  L260():
    tble3 = force? tble2;
    checkMissing(tble3);
    is_na = ldf `is.na` in base;
    r174 = dyn is_na(tble3);
    check L261() else D82();
  L263():
    dr22 = tryDispatchBuiltin.0("[[<-", l18, tble5);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L265() else L264(i63, tble5, dr22);
  L264(i68, tble7, l20):
    l21 = ld l;
    check L266() else D84();
  L270():
    dr24 = tryDispatchBuiltin.0("[[<-", l23, r178);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L272() else L271(i57, r178, dr24);
  L271(i73, r180, l25):
    l26 = ld l;
    check L273() else D87();
  D82():
    deopt 344 [i61, r163, l14, 0.0, r174];
  D84():
    deopt 350 [i68, tble7, l20, tble5, l21];
  D87():
    deopt 359 [i73, r180, l25, r178, l26];
  L261():
    goto L61(i61, r163, l14, 0.0, r174);
  L265():
    dx26 = getTryDispatchBuiltinValue(dr22);
    goto L62(i63, tble5, dx26);
  L266():
    l22 = force? l21;
    ____2 = ldf `[[<-` in base;
    r176 = dyn ____2(l20, tble5, l22);
    goto L62(i68, tble7, r176);
  L272():
    dx28 = getTryDispatchBuiltinValue(dr24);
    goto L64(i57, r178, dx28);
  L273():
    l27 = force? l26;
    ____3 = ldf `[[<-` in base;
    r183 = dyn ____3(l25, r178, l27);
    goto L64(i73, r180, r183);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg c1:L, reg as_factor:cls, reg x3:*, reg x4:V, reg p:p(V +), reg r3:V, reg x5:*, reg x6:V |
    mkenv;
    st x = x;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L5() else L1();
  L2():
    x1 = ld x;
    check L4() else D0();
  L3():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 1 [x1];
  L1():
    x5 = ld x;
    check L9() else D3();
  L4():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.character`(x2);
    goto L0(c);
  L5():
    as_factor = ldf `as.factor`;
    check L6() else D1();
  D1():
    deopt 5 [];
  D3():
    deopt 8 [x5];
  L6():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r3 = dyn as_factor(p);
    check L7() else D2();
  L9():
    x6 = force? x5;
    checkMissing(x6);
    popenv;
    return x6;
  D2():
    deopt 7 [r3];
  L7():
    popenv;
    return r3;
  }
}