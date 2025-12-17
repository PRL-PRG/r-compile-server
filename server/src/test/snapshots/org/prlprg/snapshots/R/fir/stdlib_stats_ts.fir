fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3836763928;
    st ts = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3836763928(data, start, end, frequency, deltat, `ts.eps`, class, names) {
  (reg data:*, reg start:*, reg end:*, reg frequency:*, reg deltat:*, reg ts_eps:*, reg class:*, reg names:*) -+> V { var data:*, reg data_isMissing:L, reg data_orDefault:*, var start:*, reg start_isMissing:L, reg start_orDefault:*, var end:*, reg end_isMissing:L, reg end_orDefault:*, reg numeric:cls, reg r:V, reg p:p(V +), var frequency:*, reg frequency_isMissing:L, reg frequency_orDefault:*, var deltat:*, reg deltat_isMissing:L, reg deltat_orDefault:*, var `ts.eps`:*, reg ts_eps_isMissing:L, reg ts_eps_orDefault:*, reg getOption:cls, reg r2:V, reg p1:p(V +), var class:*, reg class_isMissing:L, reg class_orDefault:*, reg nseries:*, reg nseries1:V, reg r4:V, reg c:L, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg c1:cls, reg r7:V, reg p2:p(V +), var names:*, reg names_isMissing:L, reg names_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg data1:*, reg data2:V, reg dimnames:cls, reg r13:V, reg c2:V, reg r14:V, reg c3:L, reg colnames:cls, reg data3:*, reg data4:V, reg p3:p(V +), reg r16:V, reg paste:cls, reg seq:cls, reg nseries2:*, reg nseries3:V, reg p4:p(V +), reg r18:V, reg p5:p(V +), reg r20:V, reg p6:p(V +), reg is_data_frame:cls, reg data5:*, reg data6:V, reg p7:p(V +), reg r23:V, reg c4:L, reg data_matrix:cls, reg data7:*, reg data8:V, reg p8:p(V +), reg r25:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg r28:V, reg data9:*, reg data10:V, reg is_matrix:cls, reg r29:V, reg c5:L, reg ncol:cls, reg data11:*, reg data12:V, reg p9:p(V +), reg r31:V, reg nrow:cls, reg data13:*, reg data14:V, reg p10:p(V +), reg r33:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r34:V, reg r35:V, reg names1:*, reg names2:V, reg list:cls, reg r36:V, reg l:*, reg dimnames__:cls, reg r37:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r39:V, reg r40:V, reg data15:*, reg data16:V, reg length:cls, reg r41:V, reg ndata:*, reg ndata1:V, reg r42:V, reg c6:L, reg stop:cls, reg r43:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r45:V, reg r46:V, reg missing:cls, reg r47:V, reg c7:L, reg deltat1:*, reg deltat2:V, reg r48:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r50:V, reg r51:V, reg missing1:cls, reg r52:V, reg c8:L, reg frequency1:*, reg frequency2:V, reg r53:V, reg frequency3:*, reg frequency4:V, reg r54:V, reg c9:L, reg c11:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r57:V, reg c14:L, reg r58:R, reg r59:V, reg frequency5:*, reg frequency6:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r62:V, reg c17:L, reg r63:R, reg frequency9:V, reg r64:V, reg round:cls, reg r65:V, reg r66:V, reg abs:cls, reg r67:V, reg r68:V, reg c18:L, reg c19:V, reg c21:L, reg c23:V, reg d:*, reg d1:V, reg ts_eps1:*, reg ts_eps2:V, reg r69:V, reg c24:L, reg c25:V, reg c27:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r70:V, reg r71:V, reg round1:cls, reg r72:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r74:V, reg r75:V, reg missing2:cls, reg r76:V, reg r77:V, reg c28:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r78:V, reg r79:V, reg start1:*, reg start2:V, reg as_numeric:cls, reg r80:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r82:V, reg r83:V, reg start3:*, reg start4:V, reg length1:cls, reg r84:V, reg r85:V, reg c29:L, reg start5:*, reg start6:V, reg c30:L, reg start8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r86:V, reg start9:*, reg start10:V, reg c31:L, reg dx3:V, reg start12:V, reg dr2:V, reg dc1:L, reg dx5:V, reg dx6:V, reg dx7:V, reg __1:cls, reg r87:V, reg r88:V, reg frequency10:*, reg frequency11:V, reg r89:V, reg r90:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r92:V, reg r93:V, reg missing3:cls, reg r94:V, reg r95:V, reg c32:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r96:V, reg r97:V, reg end1:*, reg end2:V, reg as_numeric1:cls, reg r98:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r100:V, reg r101:V, reg end3:*, reg end4:V, reg length2:cls, reg r102:V, reg r103:V, reg c33:L, reg end5:*, reg end6:V, reg c34:L, reg end8:V, reg dr4:V, reg dc2:L, reg dx8:V, reg dx9:V, reg __2:cls, reg r104:V, reg end9:*, reg end10:V, reg c35:L, reg dx11:V, reg end12:V, reg dr6:V, reg dc3:L, reg dx13:V, reg dx14:V, reg dx15:V, reg __3:cls, reg r105:V, reg r106:V, reg frequency12:*, reg frequency13:V, reg r107:V, reg r108:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r110:V, reg r111:V, reg missing4:cls, reg r112:V, reg c36:L, reg start13:*, reg start14:V, reg ndata2:*, reg ndata3:V, reg r113:V, reg frequency14:*, reg frequency15:V, reg r114:V, reg r115:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r117:V, reg r118:V, reg missing5:cls, reg r119:V, reg c37:L, reg end13:*, reg end14:V, reg ndata4:*, reg ndata5:V, reg r120:V, reg frequency16:*, reg frequency17:V, reg r121:V, reg r122:V, reg start15:*, reg start16:V, reg end15:*, reg end16:V, reg r123:V, reg c38:L, reg stop1:cls, reg r124:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r126:V, reg r127:V, reg end17:*, reg end18:V, reg start17:*, reg start18:V, reg r128:V, reg frequency18:*, reg frequency19:V, reg r129:V, reg as_numeric2:cls, reg r130:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r131:V, reg r132:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r133:V, reg r134:V, reg round2:cls, reg r135:V, reg cycles:*, reg cycles1:V, reg r136:V, reg abs1:cls, reg r137:V, reg ts_eps3:*, reg ts_eps4:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r140:V, reg r141:V, reg ts_eps7:V, reg r142:V, reg cycles2:*, reg cycles3:V, reg max:cls, reg r143:V, reg r144:V, reg r145:V, reg c39:L, reg stop2:cls, reg r146:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r148:V, reg r149:V, reg cycles4:*, reg cycles5:V, reg r150:V, reg r151:V, reg nobs:*, reg nobs1:V, reg ndata6:*, reg ndata7:V, reg r152:V, reg c40:L, reg NCOL:cls, reg data17:*, reg data18:V, reg p11:p(V +), reg r154:V, reg r155:V, reg c41:L, reg ndata8:*, reg ndata9:V, reg nobs2:*, reg nobs3:V, reg r156:V, reg c42:L, reg sym24:cls, reg base24:cls, reg guard24:L, reg r157:V, reg r158:V, reg data19:*, reg data20:V, reg nobs4:*, reg nobs5:V, reg rep_len:cls, reg r159:V, reg r160:V, reg ndata10:*, reg ndata11:V, reg nobs6:*, reg nobs7:V, reg r161:V, reg c43:L, reg data21:*, reg data22:V, reg c44:L, reg data24:V, reg dr8:V, reg dc4:L, reg dx16:V, reg dx17:V, reg nobs8:*, reg nobs9:V, reg r162:V, reg __4:cls, reg r163:V, reg r164:V, reg ndata12:*, reg ndata13:V, reg nobs10:*, reg nobs11:V, reg r165:V, reg c45:L, reg data25:*, reg data26:V, reg c46:L, reg data28:V, reg dr10:V, reg dc5:L, reg dx18:V, reg dx19:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r166:V, reg r167:V, reg ndata14:*, reg ndata15:V, reg r168:V, reg nobs12:*, reg nobs13:V, reg rep_len1:cls, reg r169:V, reg __5:cls, reg r170:V, reg ndata16:*, reg ndata17:V, reg nobs14:*, reg nobs15:V, reg r171:V, reg c47:L, reg data32:*, reg data33:V, reg c48:L, reg data35:V, reg dr12:V, reg dc6:L, reg dx20:V, reg dx21:V, reg nobs16:*, reg nobs17:V, reg r172:V, reg __6:cls, reg r173:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r175:V, reg r176:V, reg start19:*, reg start20:V, reg end19:*, reg end20:V, reg frequency20:*, reg frequency21:V, reg c49:cls, reg r177:V, reg l1:*, reg attr__:cls, reg r178:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r179:V, reg r180:V, reg class1:*, reg class2:V, reg c50:V, reg r181:V, reg c51:L, reg c53:V, reg class3:*, reg class4:V, reg c54:L, reg c56:L, reg class6:V, reg dr14:V, reg dc7:L, reg dx22:V, reg c58:L, reg dx23:V, reg __7:cls, reg r182:V, reg r183:V, reg c59:L, reg c60:V, reg c62:L, reg class7:*, reg class8:V, reg l2:*, reg attr__1:cls, reg r184:V, reg data36:*, reg data37:V |
    mkenv;
    data_isMissing = missing.0(data);
    if data_isMissing then L0(NA_LGL) else L0(data);
  L0(data_orDefault):
    st data = data_orDefault;
    start_isMissing = missing.0(start);
    if start_isMissing then L1(1.0) else L1(start);
  L1(start_orDefault):
    st start = start_orDefault;
    end_isMissing = missing.0(end);
    if end_isMissing then L2() else L3(end);
  L2():
    p = prom<V +>{
      numeric = ldf numeric;
      r = dyn numeric();
      return r;
    };
    goto L3(p);
  L3(end_orDefault):
    st end = end_orDefault;
    frequency_isMissing = missing.0(frequency);
    if frequency_isMissing then L4(1.0) else L4(frequency);
  L4(frequency_orDefault):
    st frequency = frequency_orDefault;
    deltat_isMissing = missing.0(deltat);
    if deltat_isMissing then L5(1.0) else L5(deltat);
  L5(deltat_orDefault):
    st deltat = deltat_orDefault;
    ts_eps_isMissing = missing.0(ts_eps);
    if ts_eps_isMissing then L6() else L7(ts_eps);
  L6():
    p1 = prom<V +>{
      getOption = ldf getOption;
      r2 = dyn getOption("ts.eps");
      return r2;
    };
    goto L7(p1);
  L7(ts_eps_orDefault):
    st `ts.eps` = ts_eps_orDefault;
    class_isMissing = missing.0(class);
    if class_isMissing then L8() else L9(class);
  L8():
    p2 = prom<V +>{
      nseries = ld nseries;
      nseries1 = force? nseries;
      checkMissing(nseries1);
      r4 = `>`(nseries1, 1.0);
      c = `as.logical`(r4);
      if c then L2() else L0();
    L0():
      return "ts";
    L2():
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L3() else L4();
    L1(r6):
      return r6;
    L3():
      c1 = ldf c in base;
      r7 = dyn c1("mts", "ts", "matrix", "array");
      goto L1(r7);
    L4():
      r5 = dyn base("mts", "ts", "matrix", "array");
      goto L1(r5);
    };
    goto L9(p2);
  L9(class_orDefault):
    st class = class_orDefault;
    names_isMissing = missing.0(names);
    if names_isMissing then L10() else L11(names);
  L10():
    p6 = prom<V +>{
      sym1 = ldf `is.null`;
      base1 = ldf `is.null` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L3() else L4();
    L0(r10):
      r14 = `!`(r10);
      c3 = `as.logical`(r14);
      if c3 then L7() else L2();
    L3():
      sym2 = ldf dimnames;
      base2 = ldf dimnames in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L5() else L6();
    L4():
      r9 = dyn base1(<lang dimnames(data)>);
      goto L0(r9);
    L1(r12):
      c2 = `==`(r12, NULL);
      goto L0(c2);
    L2():
      paste = ldf paste;
      p5 = prom<V +>{
        seq = ldf seq;
        p4 = prom<V +>{
          nseries2 = ld nseries;
          nseries3 = force? nseries2;
          checkMissing(nseries3);
          return nseries3;
        };
        r18 = dyn seq(p4);
        return r18;
      };
      r20 = dyn paste("Series", p5);
      return r20;
    L5():
      data1 = ld data;
      data2 = force? data1;
      checkMissing(data2);
      dimnames = ldf dimnames in base;
      r13 = dyn dimnames(data2);
      goto L1(r13);
    L6():
      r11 = dyn base2(<sym data>);
      goto L1(r11);
    L7():
      colnames = ldf colnames;
      p3 = prom<V +>{
        data3 = ld data;
        data4 = force? data3;
        checkMissing(data4);
        return data4;
      };
      r16 = dyn colnames(p3);
      return r16;
    };
    goto L11(p6);
  L11(names_orDefault):
    st names = names_orDefault;
    is_data_frame = ldf `is.data.frame`;
    check L85() else D0();
  D0():
    deopt 1 [];
  L85():
    p7 = prom<V +>{
      data5 = ld data;
      data6 = force? data5;
      checkMissing(data6);
      return data6;
    };
    r23 = dyn is_data_frame(p7);
    check L86() else D1();
  D1():
    deopt 3 [r23];
  L86():
    c4 = `as.logical`(r23);
    if c4 then L87() else L12();
  L12():
    goto L13();
  L13():
    sym3 = ldf `is.matrix`;
    base3 = ldf `is.matrix` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L91() else L92();
  L87():
    data_matrix = ldf `data.matrix`;
    check L88() else D2();
  D2():
    deopt 5 [];
  L14(r28):
    c5 = `as.logical`(r28);
    if c5 then L95() else L15();
  L88():
    p8 = prom<V +>{
      data7 = ld data;
      data8 = force? data7;
      checkMissing(data8);
      return data8;
    };
    r25 = dyn data_matrix(p8);
    check L89() else D3();
  L91():
    data9 = ld data;
    check L93() else D4();
  L92():
    r27 = dyn base3(<sym data>);
    goto L14(r27);
  D3():
    deopt 7 [r25];
  D4():
    deopt 13 [data9];
  L15():
    st nseries = 1.0;
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L107() else L108();
  L17():
    ndata = ld ndata;
    check L111() else D16();
  L89():
    st data = r25;
    goto L13();
  L93():
    data10 = force? data9;
    checkMissing(data10);
    is_matrix = ldf `is.matrix` in base;
    r29 = dyn is_matrix(data10);
    check L94() else D5();
  L95():
    ncol = ldf ncol;
    check L96() else D6();
  D5():
    deopt 16 [r29];
  D6():
    deopt 18 [];
  D16():
    deopt 49 [ndata];
  L18(r40):
    st ndata = r40;
    goto L17();
  L94():
    goto L14(r29);
  L96():
    p9 = prom<V +>{
      data11 = ld data;
      data12 = force? data11;
      checkMissing(data12);
      return data12;
    };
    r31 = dyn ncol(p9);
    check L97() else D7();
  L107():
    data15 = ld data;
    check L109() else D14();
  L108():
    r39 = dyn base5(<sym data>);
    goto L18(r39);
  L111():
    ndata1 = force? ndata;
    checkMissing(ndata1);
    r42 = `==`(ndata1, 0.0);
    c6 = `as.logical`(r42);
    if c6 then L112() else L19();
  D7():
    deopt 20 [r31];
  D14():
    deopt 44 [data15];
  L19():
    goto L20();
  L20():
    sym6 = ldf missing;
    base6 = ldf missing in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L116() else L117();
  L97():
    st nseries = r31;
    nrow = ldf nrow;
    check L98() else D8();
  L109():
    data16 = force? data15;
    checkMissing(data16);
    length = ldf length in base;
    r41 = dyn length(data16);
    check L110() else D15();
  L112():
    stop = ldf stop;
    check L113() else D17();
  D8():
    deopt 23 [];
  D15():
    deopt 47 [r41];
  D17():
    deopt 54 [];
  L21(r46):
    c7 = `as.logical`(r46);
    if c7 then L118() else L22();
  L98():
    p10 = prom<V +>{
      data13 = ld data;
      data14 = force? data13;
      checkMissing(data14);
      return data14;
    };
    r33 = dyn nrow(p10);
    check L99() else D9();
  L110():
    goto L18(r41);
  L113():
    r43 = dyn stop("'ts' object must have one or more observations");
    check L114() else D18();
  L116():
    missing = ldf missing in base;
    r47 = dyn missing(<sym frequency>);
    goto L21(r47);
  L117():
    r45 = dyn base6(<sym frequency>);
    goto L21(r45);
  D9():
    deopt 25 [r33];
  D18():
    deopt 56 [r43];
  L22():
    sym7 = ldf missing;
    base7 = ldf missing in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L121() else L122();
  L23():
    frequency3 = ld frequency;
    check L126() else D21();
  L99():
    st ndata = r33;
    sym4 = ldf list;
    base4 = ldf list in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L100() else L101();
  L114():
    goto L20();
  L118():
    deltat1 = ld deltat;
    check L119() else D19();
  D19():
    deopt 63 [1.0, deltat1];
  D21():
    deopt 77 [frequency3];
  L16(r35):
    l = ld data;
    dimnames__ = ldf `dimnames<-`;
    check L104() else D12();
  L24(r51):
    c8 = `as.logical`(r51);
    if c8 then L123() else L25();
  L100():
    names1 = ld names;
    check L102() else D10();
  L101():
    r34 = dyn base4(NULL, <sym names>);
    goto L16(r34);
  L119():
    deltat2 = force? deltat1;
    checkMissing(deltat2);
    r48 = `/`(1.0, deltat2);
    st frequency = r48;
    goto L23();
  L121():
    missing1 = ldf missing in base;
    r52 = dyn missing1(<sym deltat>);
    goto L24(r52);
  L122():
    r50 = dyn base7(<sym deltat>);
    goto L24(r50);
  L126():
    frequency4 = force? frequency3;
    checkMissing(frequency4);
    r54 = `>`(frequency4, 1.0);
    c9 = `as.logical`(r54);
    if c9 then L127() else L26(c9);
  D10():
    deopt 30 [names1];
  D12():
    deopt 35 [r35, l, r35];
  L25():
    goto L23();
  L26(c11):
    c21 = `as.logical`(c11);
    if c21 then L135() else L29(c21);
  L102():
    names2 = force? names1;
    checkMissing(names2);
    list = ldf list in base;
    r36 = dyn list(NULL, names2);
    check L103() else D11();
  L104():
    r37 = dyn dimnames__(l, NULL, r35);
    check L105() else D13();
  L123():
    frequency1 = ld frequency;
    check L124() else D20();
  L127():
    sym8 = ldf abs;
    base8 = ldf abs in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L128() else L129();
  D11():
    deopt 33 [r36];
  D13():
    deopt 37 [r35, r37];
  D20():
    deopt 71 [1.0, frequency1];
  L27(c14, r58, r59):
    st d = r59;
    r68 = `<`(r58, r59);
    c18 = `as.logical`(r68);
    c19 = `&&`(c14, c18);
    goto L26(c19);
  L29(c23):
    c27 = `as.logical`(c23);
    if c27 then L139() else L30();
  L103():
    goto L16(r36);
  L105():
    st data = r37;
    goto L17();
  L124():
    frequency2 = force? frequency1;
    checkMissing(frequency2);
    r53 = `/`(1.0, frequency2);
    st deltat = r53;
    goto L23();
  L128():
    frequency5 = ld frequency;
    check L130() else D22();
  L129():
    r57 = dyn base8(<lang `-`(frequency, round(frequency))>);
    goto L27(c9, 0.0, r57);
  L135():
    d = ld d;
    check L136() else D24();
  D22():
    deopt 84 [c9, 0.0, frequency5];
  D24():
    deopt 94 [c21, d];
  L30():
    goto L32();
  L32():
    sym11 = ldf missing;
    base11 = ldf missing in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L143() else L144();
  L130():
    frequency6 = force? frequency5;
    checkMissing(frequency6);
    sym9 = ldf round;
    base9 = ldf round in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L131() else L132();
  L136():
    d1 = force? d;
    checkMissing(d1);
    ts_eps1 = ld `ts.eps`;
    check L137() else D25();
  L139():
    sym10 = ldf round;
    base10 = ldf round in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L140() else L141();
  D25():
    deopt 95 [c21, d1, ts_eps1];
  L28(c17, r63, frequency9, r64):
    r66 = `-`(frequency9, r64);
    abs = ldf abs in base;
    r67 = dyn abs(r66);
    check L133() else D23();
  L31(r71):
    st frequency = r71;
    goto L32();
  L33(r75):
    r77 = `!`(r75);
    c28 = `as.logical`(r77);
    if c28 then L145() else L34();
  L131():
    round = ldf round in base;
    r65 = dyn round(<sym frequency>);
    goto L28(c9, 0.0, frequency6, r65);
  L132():
    r62 = dyn base9(<sym frequency>);
    goto L28(c9, 0.0, frequency6, r62);
  L137():
    ts_eps2 = force? ts_eps1;
    checkMissing(ts_eps2);
    r69 = `<`(d1, ts_eps2);
    c24 = `as.logical`(r69);
    c25 = `&&`(c21, c24);
    goto L29(c25);
  L140():
    round1 = ldf round in base;
    r72 = dyn round1(<sym frequency>);
    goto L31(r72);
  L141():
    r70 = dyn base10(<sym frequency>);
    goto L31(r70);
  L143():
    missing2 = ldf missing in base;
    r76 = dyn missing2(<sym start>);
    goto L33(r76);
  L144():
    r74 = dyn base11(<sym start>);
    goto L33(r74);
  D23():
    deopt 90 [c17, r63, r67];
  L34():
    goto L36();
  L36():
    sym13 = ldf length;
    base13 = ldf length in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L151() else L152();
  L133():
    goto L27(c17, r63, r67);
  L145():
    sym12 = ldf `as.numeric`;
    base12 = ldf `as.numeric` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L146() else L147();
  L35(r79):
    st start = r79;
    goto L36();
  L37(r83):
    r85 = `>`(r83, 1);
    c29 = `as.logical`(r85);
    if c29 then L155() else L38();
  L146():
    start1 = ld start;
    check L148() else D26();
  L147():
    r78 = dyn base12(<sym start>);
    goto L35(r78);
  L151():
    start3 = ld start;
    check L153() else D28();
  L152():
    r82 = dyn base13(<sym start>);
    goto L37(r82);
  D26():
    deopt 111 [start1];
  D28():
    deopt 120 [start3];
  L38():
    goto L41();
  L41():
    sym14 = ldf missing;
    base14 = ldf missing in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L166() else L167();
  L148():
    start2 = force? start1;
    checkMissing(start2);
    as_numeric = ldf `as.numeric` in base;
    r80 = dyn as_numeric(start2);
    check L149() else D27();
  L153():
    start4 = force? start3;
    checkMissing(start4);
    length1 = ldf length in base;
    r84 = dyn length1(start4);
    check L154() else D29();
  L155():
    start5 = ld start;
    check L156() else D30();
  D27():
    deopt 114 [r80];
  D29():
    deopt 123 [r84];
  D30():
    deopt 126 [start5];
  L42(r93):
    r95 = `!`(r93);
    c32 = `as.logical`(r95);
    if c32 then L168() else L43();
  L149():
    goto L35(r80);
  L154():
    goto L37(r84);
  L156():
    start6 = force? start5;
    checkMissing(start6);
    c30 = `is.object`(start6);
    if c30 then L157() else L158(start6);
  L166():
    missing3 = ldf missing in base;
    r94 = dyn missing3(<sym end>);
    goto L42(r94);
  L167():
    r92 = dyn base14(<sym end>);
    goto L42(r92);
  L39(dx1):
    start9 = ld start;
    check L160() else D31();
  L43():
    goto L45();
  L45():
    sym16 = ldf length;
    base16 = ldf length in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L174() else L175();
  L157():
    dr = tryDispatchBuiltin.1("[", start6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L159() else L158(dr);
  L158(start8):
    __ = ldf `[` in base;
    r86 = dyn __(start8, 1);
    goto L39(r86);
  L168():
    sym15 = ldf `as.numeric`;
    base15 = ldf `as.numeric` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L169() else L170();
  D31():
    deopt 130 [dx1, start9];
  L44(r97):
    st end = r97;
    goto L45();
  L46(r101):
    r103 = `>`(r101, 1);
    c33 = `as.logical`(r103);
    if c33 then L178() else L47();
  L159():
    dx = getTryDispatchBuiltinValue(dr);
    goto L39(dx);
  L160():
    start10 = force? start9;
    checkMissing(start10);
    c31 = `is.object`(start10);
    if c31 then L161() else L162(dx1, start10);
  L169():
    end1 = ld end;
    check L171() else D33();
  L170():
    r96 = dyn base15(<sym end>);
    goto L44(r96);
  L174():
    end3 = ld end;
    check L176() else D35();
  L175():
    r100 = dyn base16(<sym end>);
    goto L46(r100);
  D33():
    deopt 149 [end1];
  D35():
    deopt 158 [end3];
  L40(dx6, dx7):
    r88 = `-`(dx7, 1.0);
    frequency10 = ld frequency;
    check L164() else D32();
  L47():
    goto L50();
  L50():
    sym17 = ldf missing;
    base17 = ldf missing in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L189() else L190();
  L161():
    dr2 = tryDispatchBuiltin.1("[", start10);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L163() else L162(dx1, dr2);
  L162(dx3, start12):
    __1 = ldf `[` in base;
    r87 = dyn __1(start12, 2);
    goto L40(dx3, r87);
  L171():
    end2 = force? end1;
    checkMissing(end2);
    as_numeric1 = ldf `as.numeric` in base;
    r98 = dyn as_numeric1(end2);
    check L172() else D34();
  L176():
    end4 = force? end3;
    checkMissing(end4);
    length2 = ldf length in base;
    r102 = dyn length2(end4);
    check L177() else D36();
  L178():
    end5 = ld end;
    check L179() else D37();
  D32():
    deopt 136 [dx6, r88, frequency10];
  D34():
    deopt 152 [r98];
  D36():
    deopt 161 [r102];
  D37():
    deopt 164 [end5];
  L51(r111):
    c36 = `as.logical`(r111);
    if c36 then L191() else L52();
  L163():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L40(dx1, dx5);
  L164():
    frequency11 = force? frequency10;
    checkMissing(frequency11);
    r89 = `/`(r88, frequency11);
    r90 = `+`(dx6, r89);
    st start = r90;
    goto L41();
  L172():
    goto L44(r98);
  L177():
    goto L46(r102);
  L179():
    end6 = force? end5;
    checkMissing(end6);
    c34 = `is.object`(end6);
    if c34 then L180() else L181(end6);
  L189():
    missing4 = ldf missing in base;
    r112 = dyn missing4(<sym end>);
    goto L51(r112);
  L190():
    r110 = dyn base17(<sym end>);
    goto L51(r110);
  L48(dx9):
    end9 = ld end;
    check L183() else D38();
  L52():
    sym18 = ldf missing;
    base18 = ldf missing in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L196() else L197();
  L53():
    start15 = ld start;
    check L203() else D46();
  L180():
    dr4 = tryDispatchBuiltin.1("[", end6);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L182() else L181(dr4);
  L181(end8):
    __2 = ldf `[` in base;
    r104 = dyn __2(end8, 1);
    goto L48(r104);
  L191():
    start13 = ld start;
    check L192() else D40();
  D38():
    deopt 168 [dx9, end9];
  D40():
    deopt 184 [start13];
  D46():
    deopt 207 [start15];
  L54(r118):
    c37 = `as.logical`(r118);
    if c37 then L198() else L55();
  L182():
    dx8 = getTryDispatchBuiltinValue(dr4);
    goto L48(dx8);
  L183():
    end10 = force? end9;
    checkMissing(end10);
    c35 = `is.object`(end10);
    if c35 then L184() else L185(dx9, end10);
  L192():
    start14 = force? start13;
    checkMissing(start14);
    ndata2 = ld ndata;
    check L193() else D41();
  L196():
    missing5 = ldf missing in base;
    r119 = dyn missing5(<sym start>);
    goto L54(r119);
  L197():
    r117 = dyn base18(<sym start>);
    goto L54(r117);
  L203():
    start16 = force? start15;
    checkMissing(start16);
    end15 = ld end;
    check L204() else D47();
  D41():
    deopt 185 [start14, ndata2];
  D47():
    deopt 208 [start16, end15];
  L49(dx14, dx15):
    r106 = `-`(dx15, 1.0);
    frequency12 = ld frequency;
    check L187() else D39();
  L55():
    goto L53();
  L184():
    dr6 = tryDispatchBuiltin.1("[", end10);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L186() else L185(dx9, dr6);
  L185(dx11, end12):
    __3 = ldf `[` in base;
    r105 = dyn __3(end12, 2);
    goto L49(dx11, r105);
  L193():
    ndata3 = force? ndata2;
    checkMissing(ndata3);
    r113 = `-`(ndata3, 1.0);
    frequency14 = ld frequency;
    check L194() else D42();
  L198():
    end13 = ld end;
    check L199() else D43();
  L204():
    end16 = force? end15;
    checkMissing(end16);
    r123 = `>`(start16, end16);
    c38 = `as.logical`(r123);
    if c38 then L205() else L56();
  D39():
    deopt 174 [dx14, r106, frequency12];
  D42():
    deopt 188 [start14, r113, frequency14];
  D43():
    deopt 196 [end13];
  L56():
    goto L57();
  L57():
    sym19 = ldf `as.numeric`;
    base19 = ldf `as.numeric` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L209() else L210();
  L186():
    dx13 = getTryDispatchBuiltinValue(dr6);
    goto L49(dx9, dx13);
  L187():
    frequency13 = force? frequency12;
    checkMissing(frequency13);
    r107 = `/`(r106, frequency13);
    r108 = `+`(dx14, r107);
    st end = r108;
    goto L50();
  L194():
    frequency15 = force? frequency14;
    checkMissing(frequency15);
    r114 = `/`(r113, frequency15);
    r115 = `+`(start14, r114);
    st end = r115;
    goto L53();
  L199():
    end14 = force? end13;
    checkMissing(end14);
    ndata4 = ld ndata;
    check L200() else D44();
  L205():
    stop1 = ldf stop;
    check L206() else D48();
  D44():
    deopt 197 [end14, ndata4];
  D48():
    deopt 212 [];
  L58(r127):
    st cycles = r127;
    sym20 = ldf abs;
    base20 = ldf abs in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L215() else L216();
  L200():
    ndata5 = force? ndata4;
    checkMissing(ndata5);
    r120 = `-`(ndata5, 1.0);
    frequency16 = ld frequency;
    check L201() else D45();
  L206():
    r124 = dyn stop1("'start' cannot be after 'end'");
    check L207() else D49();
  L209():
    end17 = ld end;
    check L211() else D50();
  L210():
    r126 = dyn base19(<lang `*`(`(`(`-`(end, start)), frequency)>);
    goto L58(r126);
  D45():
    deopt 200 [end14, r120, frequency16];
  D49():
    deopt 214 [r124];
  D50():
    deopt 219 [end17];
  L59(r132):
    ts_eps3 = ld `ts.eps`;
    check L221() else D56();
  L201():
    frequency17 = force? frequency16;
    checkMissing(frequency17);
    r121 = `/`(r120, frequency17);
    r122 = `-`(end14, r121);
    st start = r122;
    goto L53();
  L207():
    goto L57();
  L211():
    end18 = force? end17;
    checkMissing(end18);
    start17 = ld start;
    check L212() else D51();
  L215():
    sym21 = ldf round;
    base21 = ldf round in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L217() else L218();
  L216():
    r131 = dyn base20(<lang `-`(round(cycles), cycles)>);
    goto L59(r131);
  D51():
    deopt 220 [end18, start17];
  D56():
    deopt 236 [r132, ts_eps3];
  L60(r134):
    cycles = ld cycles;
    check L219() else D54();
  L212():
    start18 = force? start17;
    checkMissing(start18);
    r128 = `-`(end18, start18);
    frequency18 = ld frequency;
    check L213() else D52();
  L217():
    round2 = ldf round in base;
    r135 = dyn round2(<sym cycles>);
    goto L60(r135);
  L218():
    r133 = dyn base21(<sym cycles>);
    goto L60(r133);
  L221():
    ts_eps4 = force? ts_eps3;
    checkMissing(ts_eps4);
    sym22 = ldf max;
    base22 = ldf max in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L222() else L223();
  D52():
    deopt 222 [r128, frequency18];
  D54():
    deopt 232 [r134, cycles];
  L61(r141, ts_eps7, r142):
    r144 = `*`(ts_eps7, r142);
    r145 = `>`(r141, r144);
    c39 = `as.logical`(r145);
    if c39 then L226() else L62();
  L213():
    frequency19 = force? frequency18;
    checkMissing(frequency19);
    r129 = `*`(r128, frequency19);
    as_numeric2 = ldf `as.numeric` in base;
    r130 = dyn as_numeric2(r129);
    check L214() else D53();
  L219():
    cycles1 = force? cycles;
    checkMissing(cycles1);
    r136 = `-`(r134, cycles1);
    abs1 = ldf abs in base;
    r137 = dyn abs1(r136);
    check L220() else D55();
  L222():
    cycles2 = ld cycles;
    check L224() else D57();
  L223():
    r140 = dyn base22(<sym cycles>, 1.0);
    goto L61(r132, ts_eps4, r140);
  D53():
    deopt 226 [r130];
  D55():
    deopt 236 [r137];
  D57():
    deopt 239 [r132, ts_eps4, cycles2];
  L62():
    goto L63();
  L63():
    sym23 = ldf floor;
    base23 = ldf floor in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L230() else L231();
  L214():
    goto L58(r130);
  L220():
    goto L59(r137);
  L224():
    cycles3 = force? cycles2;
    checkMissing(cycles3);
    max = ldf max in base;
    r143 = dyn max(cycles3, 1.0);
    check L225() else D58();
  L226():
    stop2 = ldf stop;
    check L227() else D59();
  D58():
    deopt 243 [r132, ts_eps4, r143];
  D59():
    deopt 247 [];
  L64(r149):
    st nobs = r149;
    nobs = ld nobs;
    check L233() else D62();
  L225():
    goto L61(r132, ts_eps4, r143);
  L227():
    r146 = dyn stop2("'end' must be a whole number of cycles after 'start'");
    check L228() else D60();
  L230():
    cycles4 = ld cycles;
    check L232() else D61();
  L231():
    r148 = dyn base23(<lang `+`(cycles, 1.01)>);
    goto L64(r148);
  D60():
    deopt 249 [r146];
  D61():
    deopt 253 [cycles4];
  D62():
    deopt 259 [nobs];
  L228():
    goto L63();
  L232():
    cycles5 = force? cycles4;
    checkMissing(cycles5);
    r150 = `+`(cycles5, 1.01);
    r151 = floor(r150);
    goto L64(r151);
  L233():
    nobs1 = force? nobs;
    checkMissing(nobs1);
    ndata6 = ld ndata;
    check L234() else D63();
  D63():
    deopt 260 [nobs1, ndata6];
  L234():
    ndata7 = force? ndata6;
    checkMissing(ndata7);
    r152 = `!=`(nobs1, ndata7);
    c40 = `as.logical`(r152);
    if c40 then L235() else L65();
  L65():
    goto L78();
  L78():
    sym26 = ldf c;
    base26 = ldf c in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L281() else L282();
  L235():
    NCOL = ldf NCOL;
    check L236() else D64();
  D64():
    deopt 264 [];
  L79(r176):
    l1 = ld data;
    attr__ = ldf `attr<-`;
    check L287() else D89();
  L236():
    p11 = prom<V +>{
      data17 = ld data;
      data18 = force? data17;
      checkMissing(data18);
      return data18;
    };
    r154 = dyn NCOL(p11);
    check L237() else D65();
  L281():
    start19 = ld start;
    check L283() else D85();
  L282():
    r175 = dyn base26(<sym start>, <sym end>, <sym frequency>);
    goto L79(r175);
  D65():
    deopt 266 [r154];
  D85():
    deopt 333 [start19];
  D89():
    deopt 342 [r176, l1, r176];
  L237():
    r155 = `==`(r154, 1.0);
    c41 = `as.logical`(r155);
    if c41 then L238() else L66();
  L283():
    start20 = force? start19;
    checkMissing(start20);
    end19 = ld end;
    check L284() else D86();
  L287():
    r178 = dyn attr__(l1, NULL, "tsp", r176);
    check L288() else D90();
  D86():
    deopt 335 [end19];
  D90():
    deopt 345 [r176, r178];
  L66():
    ndata12 = ld ndata;
    check L258() else D75();
  L72(r164):
    st data = r164;
    goto L78();
  L238():
    ndata8 = ld ndata;
    check L239() else D66();
  L284():
    end20 = force? end19;
    checkMissing(end20);
    frequency20 = ld frequency;
    check L285() else D87();
  L288():
    st data = r178;
    sym27 = ldf `is.null`;
    base27 = ldf `is.null` in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L289() else L290();
  D66():
    deopt 269 [ndata8];
  D75():
    deopt 294 [ndata12];
  D87():
    deopt 337 [frequency20];
  L80(r180):
    r181 = `!`(r180);
    c51 = `as.logical`(r181);
    if c51 then L292() else L81(c51);
  L239():
    ndata9 = force? ndata8;
    checkMissing(ndata9);
    nobs2 = ld nobs;
    check L240() else D67();
  L258():
    ndata13 = force? ndata12;
    checkMissing(ndata13);
    nobs10 = ld nobs;
    check L259() else D76();
  L285():
    frequency21 = force? frequency20;
    checkMissing(frequency21);
    c49 = ldf c in base;
    r177 = dyn c49(start20, end20, frequency21);
    check L286() else D88();
  L289():
    class1 = ld class;
    check L291() else D91();
  L290():
    r179 = dyn base27(<sym class>);
    goto L80(r179);
  D67():
    deopt 270 [ndata9, nobs2];
  D76():
    deopt 295 [ndata13, nobs10];
  D88():
    deopt 340 [r177];
  D91():
    deopt 348 [class1];
  L81(c53):
    c62 = `as.logical`(c53);
    if c62 then L298() else L83();
  L240():
    nobs3 = force? nobs2;
    checkMissing(nobs3);
    r156 = `<`(ndata9, nobs3);
    c42 = `as.logical`(r156);
    if c42 then L241() else L67();
  L259():
    nobs11 = force? nobs10;
    checkMissing(nobs11);
    r165 = `<`(ndata13, nobs11);
    c45 = `as.logical`(r165);
    if c45 then L260() else L73();
  L286():
    goto L79(r177);
  L291():
    class2 = force? class1;
    checkMissing(class2);
    c50 = `==`(class2, NULL);
    goto L80(c50);
  L292():
    class3 = ld class;
    check L293() else D92();
  D92():
    deopt 352 [c51, class3];
  L67():
    ndata10 = ld ndata;
    check L248() else D71();
  L69(r160):
    goto L72(r160);
  L73():
    ndata16 = ld ndata;
    check L271() else D81();
  L83():
    goto L84();
  L84():
    data36 = ld data;
    check L303() else D96();
  L241():
    sym24 = ldf rep_len;
    base24 = ldf rep_len in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L242() else L243();
  L260():
    data25 = ld data;
    check L261() else D77();
  L293():
    class4 = force? class3;
    checkMissing(class4);
    c54 = `is.object`(class4);
    if c54 then L294() else L295(c51, class4);
  L298():
    class7 = ld class;
    check L299() else D93();
  D71():
    deopt 281 [ndata10];
  D77():
    deopt 298 [data25];
  D81():
    deopt 313 [ndata16];
  D93():
    deopt 360 [class7];
  D96():
    deopt 370 [data36];
  L68(r158):
    goto L69(r158);
  L82(c58, dx23):
    r183 = `!=`(dx23, "none");
    c59 = `as.logical`(r183);
    c60 = `&&`(c58, c59);
    goto L81(c60);
  L242():
    data19 = ld data;
    check L244() else D68();
  L243():
    r157 = dyn base24(<sym data>, <sym nobs>);
    goto L68(r157);
  L248():
    ndata11 = force? ndata10;
    checkMissing(ndata11);
    nobs6 = ld nobs;
    check L249() else D72();
  L261():
    data26 = force? data25;
    checkMissing(data26);
    c46 = `is.object`(data26);
    if c46 then L262() else L263(data26);
  L271():
    ndata17 = force? ndata16;
    checkMissing(ndata17);
    nobs14 = ld nobs;
    check L272() else D82();
  L294():
    dr14 = tryDispatchBuiltin.1("[[", class4);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L296() else L295(c51, dr14);
  L295(c56, class6):
    __7 = ldf `[[` in base;
    r182 = dyn __7(class6, 1.0);
    goto L82(c56, r182);
  L299():
    class8 = force? class7;
    checkMissing(class8);
    l2 = ld data;
    attr__1 = ldf `attr<-`;
    check L300() else D94();
  L303():
    data37 = force? data36;
    checkMissing(data37);
    popenv;
    return data37;
  D68():
    deopt 275 [data19];
  D72():
    deopt 282 [ndata11, nobs6];
  D82():
    deopt 314 [ndata17, nobs14];
  D94():
    deopt 363 [class8, l2, class8];
  L74(dx19):
    goto L72(dx19);
  L244():
    data20 = force? data19;
    checkMissing(data20);
    nobs4 = ld nobs;
    check L245() else D69();
  L249():
    nobs7 = force? nobs6;
    checkMissing(nobs7);
    r161 = `>`(ndata11, nobs7);
    c43 = `as.logical`(r161);
    if c43 then L250() else L70();
  L262():
    dr10 = tryDispatchBuiltin.1("[", data26);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L264() else L263(dr10);
  L263(data28):
    sym25 = ldf rep_len;
    base25 = ldf rep_len in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L265() else L266();
  L272():
    nobs15 = force? nobs14;
    checkMissing(nobs15);
    r171 = `>`(ndata17, nobs15);
    c47 = `as.logical`(r171);
    if c47 then L273() else L76();
  L296():
    dx22 = getTryDispatchBuiltinValue(dr14);
    goto L82(c51, dx22);
  L300():
    r184 = dyn attr__1(l2, NULL, "class", class8);
    check L301() else D95();
  D69():
    deopt 277 [nobs4];
  D95():
    deopt 366 [class8, r184];
  L70():
    goto L69(NULL);
  L75(r167):
    __5 = ldf `[` in base;
    r170 = dyn __5(data26, r167, <missing>);
    goto L74(r170);
  L76():
    goto L72(NULL);
  L245():
    nobs5 = force? nobs4;
    checkMissing(nobs5);
    rep_len = ldf rep_len in base;
    r159 = dyn rep_len(data20, nobs5);
    check L246() else D70();
  L250():
    data21 = ld data;
    check L251() else D73();
  L264():
    dx18 = getTryDispatchBuiltinValue(dr10);
    goto L74(dx18);
  L265():
    ndata14 = ld ndata;
    check L267() else D78();
  L266():
    r166 = dyn base25(<lang `:`(1, ndata)>, <sym nobs>);
    goto L75(r166);
  L273():
    data32 = ld data;
    check L274() else D83();
  L301():
    st data = r184;
    goto L84();
  D70():
    deopt 280 [r159];
  D73():
    deopt 285 [data21];
  D78():
    deopt 303 [data28, 1, ndata14];
  D83():
    deopt 317 [data32];
  L246():
    goto L68(r159);
  L251():
    data22 = force? data21;
    checkMissing(data22);
    c44 = `is.object`(data22);
    if c44 then L252() else L253(data22);
  L267():
    ndata15 = force? ndata14;
    checkMissing(ndata15);
    r168 = `:`(1, ndata15);
    nobs12 = ld nobs;
    check L268() else D79();
  L274():
    data33 = force? data32;
    checkMissing(data33);
    c48 = `is.object`(data33);
    if c48 then L275() else L276(data33);
  D79():
    deopt 306 [data28, nobs12];
  L71(dx17):
    goto L69(dx17);
  L77(dx21):
    goto L72(dx21);
  L252():
    dr8 = tryDispatchBuiltin.1("[", data22);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L254() else L253(dr8);
  L253(data24):
    nobs8 = ld nobs;
    check L255() else D74();
  L268():
    nobs13 = force? nobs12;
    checkMissing(nobs13);
    rep_len1 = ldf rep_len in base;
    r169 = dyn rep_len1(r168, nobs13);
    check L269() else D80();
  L275():
    dr12 = tryDispatchBuiltin.1("[", data33);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L277() else L276(dr12);
  L276(data35):
    nobs16 = ld nobs;
    check L278() else D84();
  D74():
    deopt 288 [data24, 1, nobs8];
  D80():
    deopt 309 [data28, r169];
  D84():
    deopt 320 [data35, 1, nobs16];
  L254():
    dx16 = getTryDispatchBuiltinValue(dr8);
    goto L71(dx16);
  L255():
    nobs9 = force? nobs8;
    checkMissing(nobs9);
    r162 = `:`(1, nobs9);
    __4 = ldf `[` in base;
    r163 = dyn __4(data24, r162);
    goto L71(r163);
  L269():
    goto L75(r169);
  L277():
    dx20 = getTryDispatchBuiltinValue(dr12);
    goto L77(dx20);
  L278():
    nobs17 = force? nobs16;
    checkMissing(nobs17);
    r172 = `:`(1, nobs17);
    __6 = ldf `[` in base;
    r173 = dyn __6(data33, r172, <missing>);
    goto L77(r173);
  }
}