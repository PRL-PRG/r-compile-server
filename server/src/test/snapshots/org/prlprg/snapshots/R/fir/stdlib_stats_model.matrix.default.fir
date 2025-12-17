fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner68735395;
    st `model.matrix.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner68735395(object, data, `contrasts.arg`, xlev, `...`) {
  (reg object:*, reg data:*, reg contrasts_arg:*, reg xlev:*, reg ddd:dots) -+> V { var object:*, var data:*, reg data_isMissing:L, reg data_orDefault:*, reg environment:cls, reg object1:*, reg object2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), var `contrasts.arg`:*, reg contrasts_arg_isMissing:L, reg contrasts_arg_orDefault:*, var xlev:*, reg xlev_isMissing:L, reg xlev_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg missing:cls, reg r5:V, reg c:L, reg terms:cls, reg object3:*, reg object4:V, reg p2:p(V +), reg r7:V, reg r8:V, reg terms1:cls, reg object5:*, reg object6:V, reg p3:p(V +), reg data1:*, reg data2:V, reg p4:p(V +), reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg data3:*, reg data4:V, reg attr:cls, reg r16:V, reg c1:V, reg c2:L, reg model_frame:cls, reg object7:*, reg object8:V, reg p5:p(V +), reg data5:*, reg data6:V, reg p6:p(V +), reg xlev1:*, reg xlev2:V, reg p7:p(V +), reg r20:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg r23:V, reg vapply:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg t:*, reg t1:V, reg attr1:cls, reg r26:V, reg p8:p(V +), reg deparse2:*, reg deparse3:V, reg p9:p(V +), reg r29:V, reg c3:L, reg r31:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r32:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r33:V, reg r34:V, reg data7:*, reg data8:V, reg names:cls, reg r35:V, reg match:cls, reg r36:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r37:V, reg r38:V, reg reorder:*, reg reorder1:V, reg anyNA:cls, reg r39:V, reg c4:L, reg stop:cls, reg r40:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r42:V, reg r43:V, reg reorder2:*, reg reorder3:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r44:V, reg r45:V, reg ncol:cls, reg data9:*, reg data10:V, reg p10:p(V +), reg r47:V, reg r48:I, reg identical:cls, reg r49:V, reg r50:V, reg c5:L, reg data11:*, reg data12:V, reg c6:L, reg data14:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg reorder4:*, reg reorder5:V, reg __1:cls, reg r51:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r52:V, reg r53:V, reg t2:*, reg t3:V, reg attr2:cls, reg r54:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r55:V, reg r56:V, reg data15:*, reg data16:V, reg length:cls, reg r57:V, reg c7:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r58:V, reg r59:V, reg getOption:cls, reg r60:V, reg as_character:cls, reg r61:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r62:V, reg r63:V, reg data17:*, reg data18:V, reg names1:cls, reg r64:V, reg namD:*, reg namD1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c8:L, reg x:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r65:V, reg i7:I, reg r66:V, reg data19:*, reg data20:V, reg c9:L, reg i9:I, reg data22:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i11:I, reg dx5:V, reg i12:*, reg i13:V, reg __2:cls, reg r67:V, reg c10:L, reg c11:L, reg factor:cls, reg data23:*, reg data24:V, reg c12:L, reg data26:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg i16:*, reg i17:V, reg __3:cls, reg r68:V, reg p11:p(V +), reg r70:V, reg l1:*, reg c13:L, reg i19:I, reg r72:V, reg l3:*, reg dr8:V, reg dc4:L, reg dx8:V, reg i21:I, reg r74:V, reg dx9:V, reg i22:*, reg i23:V, reg ____:cls, reg r75:V, reg i24:I, reg vapply1:cls, reg data27:*, reg data28:V, reg p12:p(V +), reg r78:cls, reg p13:p(V +), reg r80:V, reg l4:*, reg c14:L, reg r82:L, reg l6:*, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg int:*, reg int1:V, reg ___:cls, reg r85:V, reg vapply2:cls, reg data29:*, reg data30:V, reg p14:p(V +), reg is_ordered:*, reg is_ordered1:V, reg p15:p(V +), reg r88:V, reg namD2:*, reg namD3:V, reg c15:L, reg namD5:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg isF:*, reg isF1:V, reg __4:cls, reg r89:V, reg s1:V, reg l7:I, reg i25:I, reg i26:I, reg i27:I, reg c16:L, reg x1:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r90:V, reg i32:I, reg r91:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r92:V, reg i35:I, reg r93:V, reg data31:*, reg data32:V, reg c17:L, reg i37:I, reg data34:V, reg dr14:V, reg dc7:L, reg dx14:V, reg i39:I, reg dx15:V, reg nn:*, reg nn1:V, reg __5:cls, reg r94:V, reg attr3:cls, reg r95:V, reg c18:V, reg c19:L, reg contr_funs:*, reg contr_funs1:V, reg c20:L, reg i43:I, reg contr_funs3:V, reg dr16:V, reg dc8:L, reg dx16:V, reg i45:I, reg dx17:V, reg isOF:*, reg isOF1:V, reg c21:L, reg i47:I, reg contr_funs5:V, reg r97:R, reg isOF3:V, reg dr18:V, reg dc9:L, reg dx18:V, reg i49:I, reg contr_funs7:V, reg r99:R, reg dx19:V, reg nn2:*, reg nn3:V, reg __6:cls, reg r100:V, reg r101:V, reg __7:cls, reg r102:V, reg l8:*, reg c22:L, reg i51:I, reg dx22:V, reg l11:*, reg dx23:V, reg l12:*, reg dr20:V, reg dc10:L, reg dx26:V, reg i53:I, reg dx27:V, reg l14:*, reg dx28:V, reg dx29:V, reg nn4:*, reg nn5:V, reg __8:cls, reg r103:V, reg contrasts__:cls, reg r104:V, reg c23:L, reg i55:I, reg dx31:V, reg l16:*, reg dr22:V, reg dc11:L, reg dx33:V, reg i57:I, reg dx34:V, reg dx35:V, reg nn6:*, reg nn7:V, reg ____1:cls, reg r105:V, reg i58:I, reg sym16:cls, reg base16:cls, reg guard16:L, reg r106:V, reg r107:V, reg contrasts_arg1:*, reg contrasts_arg2:V, reg c24:V, reg r108:V, reg c25:L, reg sym17:cls, reg base17:cls, reg guard17:L, reg r109:V, reg r110:V, reg contrasts_arg3:*, reg contrasts_arg4:V, reg is_list:cls, reg r111:V, reg r112:V, reg c26:L, reg warning:cls, reg r113:V, reg r114:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r115:V, reg r116:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r117:V, reg r118:V, reg contrasts_arg5:*, reg contrasts_arg6:V, reg names2:cls, reg r119:V, reg c27:V, reg c28:L, reg stop1:cls, reg r120:V, reg namC:*, reg namC1:V, reg s2:V, reg l17:I, reg i59:I, reg i60:I, reg i61:I, reg c29:L, reg x2:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r122:V, reg i66:I, reg r123:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r124:V, reg i69:I, reg r125:V, reg nn8:*, reg nn9:V, reg namD6:*, reg namD7:V, reg match1:cls, reg r126:V, reg is_na:cls, reg r127:V, reg c30:L, reg warning1:cls, reg gettextf:cls, reg nn10:*, reg nn11:V, reg p16:p(V +), reg r129:V, reg p17:p(V +), reg r131:V, reg i72:I, reg contrasts_arg7:*, reg contrasts_arg8:V, reg c31:L, reg i74:I, reg contrasts_arg10:V, reg dr24:V, reg dc12:L, reg dx37:V, reg i76:I, reg dx38:V, reg nn12:*, reg nn13:V, reg __9:cls, reg r133:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r134:V, reg i79:I, reg r135:V, reg ca:*, reg ca1:V, reg is_matrix:cls, reg r136:V, reg c32:L, reg ca2:*, reg ca3:V, reg l18:*, reg c33:L, reg i83:I, reg ca6:V, reg l21:*, reg ca7:V, reg l22:*, reg dr26:V, reg dc13:L, reg dx39:V, reg i85:I, reg ca10:V, reg l24:*, reg ca11:V, reg dx40:V, reg ni:*, reg ni1:V, reg __10:cls, reg r137:V, reg contrasts__1:cls, reg ncol1:cls, reg ca12:*, reg ca13:V, reg p18:p(V +), reg r139:V, reg p19:p(V +), reg r141:V, reg c34:L, reg i87:I, reg ca15:V, reg l26:*, reg dr28:V, reg dc14:L, reg dx41:V, reg i89:I, reg ca17:V, reg dx42:V, reg ni2:*, reg ni3:V, reg ____2:cls, reg r142:V, reg ca18:*, reg ca19:V, reg l27:*, reg c35:L, reg i91:I, reg ca22:V, reg l30:*, reg ca23:V, reg l31:*, reg dr30:V, reg dc15:L, reg dx43:V, reg i93:I, reg ca26:V, reg l33:*, reg ca27:V, reg dx44:V, reg ni4:*, reg ni5:V, reg __11:cls, reg r143:V, reg contrasts__2:cls, reg r144:V, reg c36:L, reg i95:I, reg ca29:V, reg l35:*, reg dr32:V, reg dc16:L, reg dx45:V, reg i97:I, reg ca31:V, reg dx46:V, reg ni6:*, reg ni7:V, reg ____3:cls, reg r145:V, reg r146:V, reg raw:cls, reg nrow:cls, reg data35:*, reg data36:V, reg p20:p(V +), reg r149:V, reg p21:p(V +), reg r151:V, reg l36:*, reg c37:L, reg r153:V, reg l38:*, reg dr34:V, reg dc17:L, reg dx47:V, reg r155:V, reg dx48:V, reg ____4:cls, reg r156:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r157:V, reg r158:V, reg C_modelmatrix:*, reg C_modelmatrix1:V, reg t4:*, reg t5:V, reg data37:*, reg data38:V, reg _External2:cls, reg r159:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r160:V, reg r161:V, reg isF2:*, reg isF3:V, reg any:cls, reg r162:V, reg c38:L, reg lapply:cls, reg data39:*, reg data40:V, reg c39:L, reg data42:V, reg dr36:V, reg dc18:L, reg dx49:V, reg dx50:V, reg isF4:*, reg isF5:V, reg __12:cls, reg r163:V, reg p22:p(V +), reg attr4:*, reg attr5:V, reg p23:p(V +), reg r166:V, reg l39:*, reg attr__:cls, reg r167:V, reg ans:*, reg ans1:V |
    mkenv;
    st object = object;
    data_isMissing = missing.0(data);
    if data_isMissing then L0() else L1(data);
  L0():
    p1 = prom<V +>{
      environment = ldf environment;
      p = prom<V +>{
        object1 = ld object;
        object2 = force? object1;
        checkMissing(object2);
        return object2;
      };
      r1 = dyn environment(p);
      return r1;
    };
    goto L1(p1);
  L1(data_orDefault):
    st data = data_orDefault;
    contrasts_arg_isMissing = missing.0(contrasts_arg);
    if contrasts_arg_isMissing then L2(NULL) else L2(contrasts_arg);
  L2(contrasts_arg_orDefault):
    st `contrasts.arg` = contrasts_arg_orDefault;
    xlev_isMissing = missing.0(xlev);
    if xlev_isMissing then L3(NULL) else L3(xlev);
  L3(xlev_orDefault):
    st xlev = xlev_orDefault;
    st `...` = ddd;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L75() else L76();
  L4(r4):
    c = `as.logical`(r4);
    if c then L77() else L5();
  L75():
    missing = ldf missing in base;
    r5 = dyn missing(<sym data>);
    goto L4(r5);
  L76():
    r3 = dyn base(<sym data>);
    goto L4(r3);
  L5():
    terms1 = ldf terms;
    check L81() else D2();
  L6(r8):
    st t = r8;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L83() else L84();
  L77():
    terms = ldf terms;
    check L78() else D0();
  D0():
    deopt 4 [];
  D2():
    deopt 8 [];
  L7(r13):
    c2 = `as.logical`(r13);
    if c2 then L89() else L9();
  L78():
    p2 = prom<V +>{
      object3 = ld object;
      object4 = force? object3;
      checkMissing(object4);
      return object4;
    };
    r7 = dyn terms(p2);
    check L79() else D1();
  L81():
    p3 = prom<V +>{
      object5 = ld object;
      object6 = force? object5;
      checkMissing(object6);
      return object6;
    };
    p4 = prom<V +>{
      data1 = ld data;
      data2 = force? data1;
      checkMissing(data2);
      return data2;
    };
    r11 = dyn terms1[, data](p3, p4);
    check L82() else D3();
  L83():
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L85() else L86();
  L84():
    r12 = dyn base1(<lang attr(data, "terms")>);
    goto L7(r12);
  D1():
    deopt 6 [r7];
  D3():
    deopt 12 [r11];
  L8(r15):
    c1 = `==`(r15, NULL);
    goto L7(c1);
  L9():
    sym3 = ldf match;
    base3 = ldf match in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L93() else L94();
  L10():
    sym9 = ldf attr;
    base9 = ldf attr in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L128() else L129();
  L79():
    goto L6(r7);
  L82():
    goto L6(r11);
  L85():
    data3 = ld data;
    check L87() else D4();
  L86():
    r14 = dyn base2(<sym data>, "terms");
    goto L8(r14);
  L89():
    model_frame = ldf `model.frame`;
    check L90() else D6();
  D4():
    deopt 17 [data3];
  D6():
    deopt 24 [];
  L11(r23):
    st reorder = r23;
    sym6 = ldf anyNA;
    base6 = ldf anyNA in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L105() else L106();
  L21(r53):
    st int = r53;
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L132() else L133();
  L87():
    data4 = force? data3;
    checkMissing(data4);
    attr = ldf attr in base;
    r16 = dyn attr(data4, "terms");
    check L88() else D5();
  L90():
    p5 = prom<V +>{
      object7 = ld object;
      object8 = force? object7;
      checkMissing(object8);
      return object8;
    };
    p6 = prom<V +>{
      data5 = ld data;
      data6 = force? data5;
      checkMissing(data6);
      return data6;
    };
    p7 = prom<V +>{
      xlev1 = ld xlev;
      xlev2 = force? xlev1;
      checkMissing(xlev2);
      return xlev2;
    };
    r20 = dyn model_frame[, , xlev](p5, p6, p7);
    check L91() else D7();
  L93():
    vapply = ldf vapply;
    check L95() else D8();
  L94():
    r22 = dyn base3(<lang `[`(vapply(attr(t, "variables"), deparse2, ""), `-`(1))>, <lang names(data)>);
    goto L11(r22);
  L128():
    t2 = ld t;
    check L130() else D23();
  L129():
    r52 = dyn base9(<sym t>, "response");
    goto L21(r52);
  D5():
    deopt 21 [r16];
  D7():
    deopt 29 [r20];
  D8():
    deopt 34 [];
  D23():
    deopt 99 [t2];
  L14(r38):
    c4 = `as.logical`(r38);
    if c4 then L109() else L15();
  L22(r56):
    c7 = `as.logical`(r56);
    if c7 then L136() else L23();
  L88():
    goto L8(r16);
  L91():
    st data = r20;
    goto L10();
  L95():
    p8 = prom<V +>{
      sym4 = ldf attr;
      base4 = ldf attr in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r25):
      return r25;
    L1():
      t = ld t;
      t1 = force? t;
      checkMissing(t1);
      attr1 = ldf attr in base;
      r26 = dyn attr1(t1, "variables");
      goto L0(r26);
    L2():
      r24 = dyn base4(<sym t>, "variables");
      goto L0(r24);
    };
    p9 = prom<V +>{
      deparse2 = ld deparse2;
      deparse3 = force? deparse2;
      checkMissing(deparse3);
      return deparse3;
    };
    r29 = dyn vapply(p8, p9, "");
    check L96() else D9();
  L105():
    reorder = ld reorder;
    check L107() else D13();
  L106():
    r37 = dyn base6(<sym reorder>);
    goto L14(r37);
  L130():
    t3 = force? t2;
    checkMissing(t3);
    attr2 = ldf attr in base;
    r54 = dyn attr2(t3, "response");
    check L131() else D24();
  L132():
    data15 = ld data;
    check L134() else D25();
  L133():
    r55 = dyn base10(<sym data>);
    goto L22(r55);
  D9():
    deopt 38 [r29];
  D13():
    deopt 55 [reorder];
  D24():
    deopt 103 [r54];
  D25():
    deopt 107 [data15];
  L15():
    goto L16();
  L16():
    sym7 = ldf identical;
    base7 = ldf identical in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L113() else L114();
  L23():
    st isF = FALSE;
    raw = ldf raw;
    check L279() else D85();
  L69():
    sym23 = ldf `.External2`;
    base23 = ldf `.External2` in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L284() else L285();
  L96():
    c3 = `is.object`(r29);
    if c3 then L97() else L98(r29);
  L107():
    reorder1 = force? reorder;
    checkMissing(reorder1);
    anyNA = ldf anyNA in base;
    r39 = dyn anyNA(reorder1);
    check L108() else D14();
  L109():
    stop = ldf stop;
    check L110() else D15();
  L131():
    goto L21(r54);
  L134():
    data16 = force? data15;
    checkMissing(data16);
    length = ldf length in base;
    r57 = dyn length(data16);
    check L135() else D26();
  L136():
    sym11 = ldf `as.character`;
    base11 = ldf `as.character` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L137() else L138();
  D14():
    deopt 58 [r39];
  D15():
    deopt 60 [];
  D26():
    deopt 110 [r57];
  D85():
    deopt 322 [];
  L12(dx1):
    sym5 = ldf names;
    base5 = ldf names in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L100() else L101();
  L17(r43):
    r50 = `!`(r43);
    c5 = `as.logical`(r50);
    if c5 then L121() else L19();
  L24(r59):
    st `contr.funs` = r59;
    sym12 = ldf names;
    base12 = ldf names in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L142() else L143();
  L71(r158):
    st ans = r158;
    sym24 = ldf any;
    base24 = ldf any in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L290() else L291();
  L97():
    dr = tryDispatchBuiltin.1("[", r29);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L99() else L98(dr);
  L98(r31):
    __ = ldf `[` in base;
    r32 = dyn __(r31, -1);
    goto L12(r32);
  L108():
    goto L14(r39);
  L110():
    r40 = dyn stop("model frame and formula mismatch in model.matrix()");
    check L111() else D16();
  L113():
    reorder2 = ld reorder;
    check L115() else D17();
  L114():
    r42 = dyn base7(<sym reorder>, <lang seq_len(ncol(data))>);
    goto L17(r42);
  L135():
    goto L22(r57);
  L137():
    getOption = ldf getOption;
    check L139() else D27();
  L138():
    r58 = dyn base11(<lang getOption("contrasts")>);
    goto L24(r58);
  L279():
    p21 = prom<V +>{
      nrow = ldf nrow;
      p20 = prom<V +>{
        data35 = ld data;
        data36 = force? data35;
        checkMissing(data36);
        return data36;
      };
      r149 = dyn nrow(p20);
      return r149;
    };
    r151 = dyn raw(p21);
    check L280() else D86();
  L284():
    C_modelmatrix = ld C_modelmatrix;
    check L286() else D87();
  L285():
    r157 = dyn base23(<sym C_modelmatrix>, <sym t>, <sym data>);
    goto L71(r157);
  D16():
    deopt 62 [r40];
  D17():
    deopt 67 [reorder2];
  D27():
    deopt 114 [];
  D86():
    deopt 324 [r151];
  D87():
    deopt 332 [C_modelmatrix];
  L13(r34):
    match = ldf match in base;
    r36 = dyn match(dx1, r34, NA_INT, NULL);
    check L104() else D12();
  L19():
    goto L10();
  L25(r63):
    st namD = r63;
    namD = ld namD;
    check L146() else D32();
  L72(r161):
    c38 = `as.logical`(r161);
    if c38 then L294() else L73();
  L99():
    dx = getTryDispatchBuiltinValue(dr);
    goto L12(dx);
  L100():
    data7 = ld data;
    check L102() else D10();
  L101():
    r33 = dyn base5(<sym data>);
    goto L13(r33);
  L111():
    goto L16();
  L115():
    reorder3 = force? reorder2;
    checkMissing(reorder3);
    sym8 = ldf seq_len;
    base8 = ldf seq_len in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L116() else L117();
  L121():
    data11 = ld data;
    check L122() else D21();
  L139():
    r60 = dyn getOption("contrasts");
    check L140() else D28();
  L142():
    data17 = ld data;
    check L144() else D30();
  L143():
    r62 = dyn base12(<sym data>);
    goto L25(r62);
  L280():
    l36 = ld data;
    c37 = `is.object`(l36);
    if c37 then L281() else L282(r151, l36);
  L286():
    C_modelmatrix1 = force? C_modelmatrix;
    checkMissing(C_modelmatrix1);
    t4 = ld t;
    check L287() else D88();
  L290():
    isF2 = ld isF;
    check L292() else D91();
  L291():
    r160 = dyn base24(<sym isF>);
    goto L72(r160);
  D10():
    deopt 44 [data7];
  D12():
    deopt 51 [r36];
  D21():
    deopt 85 [data11];
  D28():
    deopt 116 [r60];
  D30():
    deopt 122 [data17];
  D32():
    deopt 127 [namD];
  D88():
    deopt 334 [t4];
  D91():
    deopt 343 [isF2];
  L18(r45):
    identical = ldf identical in base;
    r49 = dyn identical(reorder3, r45, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L120() else D20();
  L70(r155, dx48):
    st data = dx48;
    goto L69();
  L73():
    goto L74();
  L74():
    ans = ld ans;
    check L300() else D97();
  L102():
    data8 = force? data7;
    checkMissing(data8);
    names = ldf names in base;
    r35 = dyn names(data8);
    check L103() else D11();
  L104():
    goto L11(r36);
  L116():
    ncol = ldf ncol;
    check L118() else D18();
  L117():
    r44 = dyn base8(<lang ncol(data)>);
    goto L18(r44);
  L122():
    data12 = force? data11;
    checkMissing(data12);
    c6 = `is.object`(data12);
    if c6 then L123() else L124(data12);
  L140():
    as_character = ldf `as.character` in base;
    r61 = dyn as_character(r60);
    check L141() else D29();
  L144():
    data18 = force? data17;
    checkMissing(data18);
    names1 = ldf names in base;
    r64 = dyn names1(data18);
    check L145() else D31();
  L146():
    namD1 = force? namD;
    checkMissing(namD1);
    s = toForSeq(namD1);
    l = length(s);
    i = 0;
    goto L26(i);
  L281():
    dr34 = tryDispatchBuiltin.0("[[<-", l36, r151);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L283() else L282(r151, dr34);
  L282(r153, l38):
    ____4 = ldf `[[<-` in base;
    r156 = dyn ____4(l38, r151, "x");
    goto L70(r153, r156);
  L287():
    t5 = force? t4;
    checkMissing(t5);
    data37 = ld data;
    check L288() else D89();
  L292():
    isF3 = force? isF2;
    checkMissing(isF3);
    any = ldf any in base;
    r162 = dyn any(isF3);
    check L293() else D92();
  L294():
    lapply = ldf lapply;
    check L295() else D93();
  D11():
    deopt 47 [r35];
  D18():
    deopt 71 [];
  D20():
    deopt 83 [r49];
  D29():
    deopt 118 [r61];
  D31():
    deopt 125 [r64];
  D89():
    deopt 336 [data37];
  D92():
    deopt 346 [r162];
  D93():
    deopt 348 [];
  D97():
    deopt 361 [ans];
  L20(dx3):
    st data = dx3;
    goto L10();
  L26(i1):
    i2 = `+`.1(i1, 1);
    c8 = `<`.1(l, i2);
    if c8 then L147() else L32();
  L103():
    goto L13(r35);
  L118():
    p10 = prom<V +>{
      data9 = ld data;
      data10 = force? data9;
      checkMissing(data10);
      return data10;
    };
    r47 = dyn ncol(p10);
    check L119() else D19();
  L120():
    goto L17(r49);
  L123():
    dr2 = tryDispatchBuiltin.1("[", data12);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L125() else L124(dr2);
  L124(data14):
    reorder4 = ld reorder;
    check L126() else D22();
  L141():
    goto L24(r61);
  L145():
    goto L25(r64);
  L283():
    dx47 = getTryDispatchBuiltinValue(dr34);
    goto L70(r151, dx47);
  L288():
    data38 = force? data37;
    checkMissing(data38);
    _External2 = ldf `.External2` in base;
    r159 = dyn _External2(C_modelmatrix1, t5, data38);
    check L289() else D90();
  L293():
    goto L72(r162);
  L295():
    p22 = prom<V +>{
      data39 = ld data;
      data40 = force? data39;
      checkMissing(data40);
      c39 = `is.object`(data40);
      if c39 then L1() else L2(data40);
    L0(dx50):
      return dx50;
    L1():
      dr36 = tryDispatchBuiltin.1("[", data40);
      dc18 = getTryDispatchBuiltinDispatched(dr36);
      if dc18 then L3() else L2(dr36);
    L2(data42):
      isF4 = ld isF;
      isF5 = force? isF4;
      __12 = ldf `[` in base;
      r163 = dyn __12(data42, isF5);
      goto L0(r163);
    L3():
      dx49 = getTryDispatchBuiltinValue(dr36);
      goto L0(dx49);
    };
    p23 = prom<V +>{
      attr4 = ld attr;
      attr5 = force? attr4;
      checkMissing(attr5);
      return attr5;
    };
    r166 = dyn lapply(p22, p23, "contrasts");
    check L296() else D94();
  L300():
    ans1 = force? ans;
    checkMissing(ans1);
    popenv;
    return ans1;
  D19():
    deopt 73 [r47];
  D22():
    deopt 88 [data14, reorder4];
  D90():
    deopt 339 [r159];
  D94():
    deopt 352 [r166];
  L32():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    sym13 = ldf `is.character`;
    base13 = ldf `is.character` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L148() else L149();
  L119():
    r48 = seq_len(r47);
    goto L18(r48);
  L125():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L20(dx2);
  L126():
    reorder5 = force? reorder4;
    __1 = ldf `[` in base;
    r51 = dyn __1(data12, <missing>, reorder5, FALSE);
    goto L20(r51);
  L147():
    vapply1 = ldf vapply;
    check L163() else D38();
  L289():
    goto L71(r159);
  L296():
    l39 = ld ans;
    attr__ = ldf `attr<-`;
    check L297() else D95();
  D38():
    deopt 151 [];
  D95():
    deopt 354 [r166, l39, r166];
  L27(i7, r66):
    c11 = `as.logical`(r66);
    if c11 then L155() else L29();
  L148():
    data19 = ld data;
    check L150() else D33();
  L149():
    r65 = dyn base13(<lang `[[`(data, i)>);
    goto L27(i2, r65);
  L163():
    p12 = prom<V +>{
      data27 = ld data;
      data28 = force? data27;
      checkMissing(data28);
      return data28;
    };
    p13 = prom<V +>{
      r78 = clos inner2501545716;
      return r78;
    };
    r80 = dyn vapply1(p12, p13, NA_LGL);
    check L164() else D39();
  L297():
    r167 = dyn attr__(l39, NULL, "contrasts", r166);
    check L298() else D96();
  D33():
    deopt 130 [i2, data19];
  D39():
    deopt 155 [r80];
  D96():
    deopt 357 [r166, r167];
  L29():
    goto L31(i7);
  L31(i24):
    goto L26(i24);
  L150():
    data20 = force? data19;
    checkMissing(data20);
    c9 = `is.object`(data20);
    if c9 then L151() else L152(i2, data20);
  L155():
    factor = ldf factor;
    check L156() else D35();
  L164():
    st isF = r80;
    l4 = ld isF;
    c14 = `is.object`(l4);
    if c14 then L165() else L166(FALSE, l4);
  L298():
    st ans = r167;
    goto L74();
  D35():
    deopt 137 [i7];
  L28(i11, dx5):
    c10 = `is.character`(dx5);
    goto L27(i11, c10);
  L33(dx11):
    st isF = dx11;
    vapply2 = ldf vapply;
    check L169() else D41();
  L151():
    dr4 = tryDispatchBuiltin.1("[[", data20);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L153() else L152(i2, dr4);
  L152(i9, data22):
    i12 = ld i;
    check L154() else D34();
  L156():
    p11 = prom<V +>{
      data23 = ld data;
      data24 = force? data23;
      checkMissing(data24);
      c12 = `is.object`(data24);
      if c12 then L1() else L2(data24);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[[", data24);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(data26):
      i16 = ld i;
      i17 = force? i16;
      __3 = ldf `[[` in base;
      r68 = dyn __3(data26, i17);
      goto L0(r68);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r70 = dyn factor(p11);
    check L157() else D36();
  L165():
    dr10 = tryDispatchBuiltin.0("[<-", l4, FALSE);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L167() else L166(FALSE, dr10);
  L166(r82, l6):
    int = ld int;
    check L168() else D40();
  D34():
    deopt 132 [i9, data22, i12];
  D36():
    deopt 139 [i7, r70];
  D40():
    deopt 160 [r82, l6, FALSE, int];
  D41():
    deopt 165 [];
  L153():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L28(i2, dx4);
  L154():
    i13 = force? i12;
    __2 = ldf `[[` in base;
    r67 = dyn __2(data22, i13);
    goto L28(i9, r67);
  L157():
    l1 = ld data;
    c13 = `is.object`(l1);
    if c13 then L158() else L159(i7, r70, l1);
  L167():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L33(dx10);
  L168():
    int1 = force? int;
    ___ = ldf `[<-` in base;
    r85 = dyn ___(l6, FALSE, int1);
    goto L33(r85);
  L169():
    p14 = prom<V +>{
      data29 = ld data;
      data30 = force? data29;
      checkMissing(data30);
      return data30;
    };
    p15 = prom<V +>{
      is_ordered = ld `is.ordered`;
      is_ordered1 = force? is_ordered;
      checkMissing(is_ordered1);
      return is_ordered1;
    };
    r88 = dyn vapply2(p14, p15, NA_LGL);
    check L170() else D42();
  D42():
    deopt 169 [r88];
  L30(i21, r74, dx9):
    st data = dx9;
    goto L31(i21);
  L158():
    dr8 = tryDispatchBuiltin.0("[[<-", l1, r70);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L160() else L159(i7, r70, dr8);
  L159(i19, r72, l3):
    i22 = ld i;
    check L161() else D37();
  L170():
    st isOF = r88;
    namD2 = ld namD;
    check L171() else D43();
  D37():
    deopt 141 [i19, r72, l3, r70, i22];
  D43():
    deopt 171 [namD2];
  L160():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L30(i7, r70, dx8);
  L161():
    i23 = force? i22;
    ____ = ldf `[[<-` in base;
    r75 = dyn ____(l3, r70, i23);
    goto L30(i19, r72, r75);
  L171():
    namD3 = force? namD2;
    checkMissing(namD3);
    c15 = `is.object`(namD3);
    if c15 then L172() else L173(namD3);
  L34(dx13):
    s1 = toForSeq(dx13);
    l7 = length(s1);
    i25 = 0;
    goto L35(i25);
  L172():
    dr12 = tryDispatchBuiltin.1("[", namD3);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L174() else L173(dr12);
  L173(namD5):
    isF = ld isF;
    check L175() else D44();
  D44():
    deopt 173 [namD5, isF];
  L35(i26):
    i27 = `+`.1(i26, 1);
    c16 = `<`.1(l7, i27);
    if c16 then L176() else L45();
  L174():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L34(dx12);
  L175():
    isF1 = force? isF;
    __4 = ldf `[` in base;
    r89 = dyn __4(namD5, isF1);
    goto L34(r89);
  L45():
    x1 = `[[`(s1, i27, NULL, TRUE);
    st nn = x1;
    sym14 = ldf `is.null`;
    base14 = ldf `is.null` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L177() else L178();
  L176():
    sym16 = ldf `is.null`;
    base16 = ldf `is.null` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L208() else L209();
  L36(i32, r91):
    c19 = `as.logical`(r91);
    if c19 then L187() else L39();
  L46(r107):
    r108 = `!`(r107);
    c25 = `as.logical`(r108);
    if c25 then L211() else L47();
  L177():
    sym15 = ldf attr;
    base15 = ldf attr in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L179() else L180();
  L178():
    r90 = dyn base14(<lang attr(`[[`(data, nn), "contrasts")>);
    goto L36(i27, r90);
  L208():
    contrasts_arg1 = ld `contrasts.arg`;
    check L210() else D55();
  L209():
    r106 = dyn base16(<sym contrasts.arg>);
    goto L46(r106);
  D55():
    deopt 217 [contrasts_arg1];
  L37(i35, r93):
    c18 = `==`(r93, NULL);
    goto L36(i35, c18);
  L39():
    goto L44(i32);
  L44(i58):
    goto L35(i58);
  L47():
    goto L68(NULL);
  L68(r146):
    goto L69();
  L179():
    data31 = ld data;
    check L181() else D45();
  L180():
    r92 = dyn base15(<lang `[[`(data, nn)>, "contrasts");
    goto L37(i27, r92);
  L187():
    contr_funs = ld `contr.funs`;
    check L188() else D48();
  L210():
    contrasts_arg2 = force? contrasts_arg1;
    checkMissing(contrasts_arg2);
    c24 = `==`(contrasts_arg2, NULL);
    goto L46(c24);
  L211():
    sym17 = ldf `is.list`;
    base17 = ldf `is.list` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L212() else L213();
  D45():
    deopt 179 [i27, data31];
  D48():
    deopt 188 [i32, contr_funs];
  L48(r110):
    r112 = `!`(r110);
    c26 = `as.logical`(r112);
    if c26 then L216() else L49();
  L181():
    data32 = force? data31;
    checkMissing(data32);
    c17 = `is.object`(data32);
    if c17 then L182() else L183(i27, data32);
  L188():
    contr_funs1 = force? contr_funs;
    checkMissing(contr_funs1);
    c20 = `is.object`(contr_funs1);
    if c20 then L189() else L190(i32, contr_funs1);
  L212():
    contrasts_arg3 = ld `contrasts.arg`;
    check L214() else D56();
  L213():
    r109 = dyn base17(<sym contrasts.arg>);
    goto L48(r109);
  D56():
    deopt 223 [contrasts_arg3];
  L38(i39, dx15):
    attr3 = ldf attr in base;
    r95 = dyn attr3(dx15, "contrasts");
    check L186() else D47();
  L40(i45, dx17):
    l8 = ld data;
    c22 = `is.object`(l8);
    if c22 then L197() else L198(i45, dx17, l8, dx17, l8);
  L49():
    sym18 = ldf `is.null`;
    base18 = ldf `is.null` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L220() else L221();
  L50(r114):
    goto L68(r114);
  L182():
    dr14 = tryDispatchBuiltin.1("[[", data32);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L184() else L183(i27, dr14);
  L183(i37, data34):
    nn = ld nn;
    check L185() else D46();
  L189():
    dr16 = tryDispatchBuiltin.1("[", contr_funs1);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L191() else L190(i32, dr16);
  L190(i43, contr_funs3):
    isOF = ld isOF;
    check L192() else D49();
  L214():
    contrasts_arg4 = force? contrasts_arg3;
    checkMissing(contrasts_arg4);
    is_list = ldf `is.list` in base;
    r111 = dyn is_list(contrasts_arg4);
    check L215() else D57();
  L216():
    warning = ldf warning;
    check L217() else D58();
  D46():
    deopt 181 [i37, data34, nn];
  D47():
    deopt 186 [i39, r95];
  D49():
    deopt 191 [i43, contr_funs3, 1.0, isOF];
  D57():
    deopt 226 [r111];
  D58():
    deopt 229 [];
  L42(i53, dx27, l14, dx28, dx29):
    contrasts__ = ldf `contrasts<-`;
    check L201() else D52();
  L51(r116):
    c28 = `as.logical`(r116);
    if c28 then L226() else L53();
  L184():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L38(i27, dx14);
  L185():
    nn1 = force? nn;
    __5 = ldf `[[` in base;
    r94 = dyn __5(data34, nn1);
    goto L38(i37, r94);
  L186():
    goto L37(i39, r95);
  L191():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L40(i32, dx16);
  L192():
    isOF1 = force? isOF;
    checkMissing(isOF1);
    c21 = `is.object`(isOF1);
    if c21 then L193() else L194(i43, contr_funs3, 1.0, isOF1);
  L197():
    dr20 = tryDispatchBuiltin.1("[[", l8);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L199() else L198(i45, dx17, l8, dx17, dr20);
  L198(i51, dx22, l11, dx23, l12):
    nn4 = ld nn;
    check L200() else D51();
  L215():
    goto L48(r111);
  L217():
    r113 = dyn warning("non-list contrasts argument ignored");
    check L218() else D59();
  L220():
    sym19 = ldf names;
    base19 = ldf names in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L222() else L223();
  L221():
    r115 = dyn base18(<lang `<-`(namC, names(contrasts.arg))>);
    goto L51(r115);
  D51():
    deopt 200 [i51, dx22, l11, dx23, l12, nn4];
  D52():
    deopt 204 [i53, dx27, l14, dx29, dx28];
  D59():
    deopt 231 [r113];
  L41(i49, contr_funs7, r99, dx19):
    r101 = `+`(r99, dx19);
    __7 = ldf `[` in base;
    r102 = dyn __7(contr_funs7, r101);
    goto L40(i49, r102);
  L52(r118):
    st namC = r118;
    c27 = `==`(r118, NULL);
    goto L51(c27);
  L53():
    goto L54();
  L54():
    namC = ld namC;
    check L230() else D64();
  L193():
    dr18 = tryDispatchBuiltin.1("[", isOF1);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L195() else L194(i43, contr_funs3, 1.0, dr18);
  L194(i47, contr_funs5, r97, isOF3):
    nn2 = ld nn;
    check L196() else D50();
  L199():
    dx26 = getTryDispatchBuiltinValue(dr20);
    goto L42(i45, dx17, l8, dx17, dx26);
  L200():
    nn5 = force? nn4;
    __8 = ldf `[[` in base;
    r103 = dyn __8(l12, nn5);
    goto L42(i51, dx22, l11, dx23, r103);
  L201():
    r104 = dyn contrasts__(dx29, NULL, dx28);
    check L202() else D53();
  L218():
    goto L50(r113);
  L222():
    contrasts_arg5 = ld `contrasts.arg`;
    check L224() else D60();
  L223():
    r117 = dyn base19(<sym contrasts.arg>);
    goto L52(r117);
  L226():
    stop1 = ldf stop;
    check L227() else D62();
  D50():
    deopt 193 [i47, contr_funs5, r97, isOF3, nn2];
  D53():
    deopt 206 [i53, dx27, l14, r104];
  D60():
    deopt 235 [contrasts_arg5];
  D62():
    deopt 242 [];
  D64():
    deopt 247 [namC];
  L195():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L41(i43, contr_funs3, 1.0, dx18);
  L196():
    nn3 = force? nn2;
    __6 = ldf `[` in base;
    r100 = dyn __6(isOF3, nn3);
    goto L41(i47, contr_funs5, r97, r100);
  L202():
    c23 = `is.object`(l14);
    if c23 then L203() else L204(i53, dx27, l14);
  L224():
    contrasts_arg6 = force? contrasts_arg5;
    checkMissing(contrasts_arg6);
    names2 = ldf names in base;
    r119 = dyn names2(contrasts_arg6);
    check L225() else D61();
  L227():
    r120 = dyn stop1("'contrasts.arg' argument must be named");
    check L228() else D63();
  L230():
    namC1 = force? namC;
    checkMissing(namC1);
    s2 = toForSeq(namC1);
    l17 = length(s2);
    i59 = 0;
    goto L55(i59);
  D61():
    deopt 238 [r119];
  D63():
    deopt 244 [r120];
  L43(i57, dx34, dx35):
    st data = dx35;
    goto L44(i57);
  L55(i60):
    i61 = `+`.1(i60, 1);
    c29 = `<`.1(l17, i61);
    if c29 then L231() else L67();
  L203():
    dr22 = tryDispatchBuiltin.0("[[<-", l14, r104);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L205() else L204(i53, dx27, dr22);
  L204(i55, dx31, l16):
    nn6 = ld nn;
    check L206() else D54();
  L225():
    goto L52(r119);
  L228():
    goto L54();
  D54():
    deopt 207 [i55, dx31, l16, r104, nn6];
  L67():
    x2 = `[[`(s2, i61, NULL, TRUE);
    st nn = x2;
    sym20 = ldf `is.na`;
    base20 = ldf `is.na` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L232() else L233();
  L205():
    dx33 = getTryDispatchBuiltinValue(dr22);
    goto L43(i53, dx27, dx33);
  L206():
    nn7 = force? nn6;
    ____1 = ldf `[[<-` in base;
    r105 = dyn ____1(l16, r104, nn7);
    goto L43(i55, dx31, r105);
  L231():
    goto L50(i61);
  L56(i66, r123):
    c30 = `as.logical`(r123);
    if c30 then L240() else L58();
  L232():
    sym21 = ldf match;
    base21 = ldf match in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L234() else L235();
  L233():
    r122 = dyn base20(<lang `<-`(ni, match(nn, namD))>);
    goto L56(i61, r122);
  L57(i69, r125):
    st ni = r125;
    is_na = ldf `is.na` in base;
    r127 = dyn is_na(r125);
    check L239() else D68();
  L58():
    contrasts_arg7 = ld `contrasts.arg`;
    check L244() else D71();
  L59(i72):
    goto L55(i72);
  L234():
    nn8 = ld nn;
    check L236() else D65();
  L235():
    r124 = dyn base21(<sym nn>, <sym namD>);
    goto L57(i61, r124);
  L240():
    warning1 = ldf warning;
    check L241() else D69();
  D65():
    deopt 253 [i61, nn8];
  D68():
    deopt 263 [i69, r127];
  D69():
    deopt 265 [i66];
  D71():
    deopt 270 [i66, contrasts_arg7];
  L236():
    nn9 = force? nn8;
    checkMissing(nn9);
    namD6 = ld namD;
    check L237() else D66();
  L239():
    goto L56(i69, r127);
  L241():
    p17 = prom<V +>{
      gettextf = ldf gettextf;
      p16 = prom<V +>{
        nn10 = ld nn;
        nn11 = force? nn10;
        checkMissing(nn11);
        return nn11;
      };
      r129 = dyn gettextf("variable '%s' is absent, its contrast will be ignored", p16);
      return r129;
    };
    r131 = dyn warning1[, domain](p17, NA_LGL);
    check L242() else D70();
  L244():
    contrasts_arg8 = force? contrasts_arg7;
    checkMissing(contrasts_arg8);
    c31 = `is.object`(contrasts_arg8);
    if c31 then L245() else L246(i66, contrasts_arg8);
  D66():
    deopt 255 [i61, namD6];
  D70():
    deopt 269 [i66, r131];
  L60(i76, dx38):
    st ca = dx38;
    sym22 = ldf `is.matrix`;
    base22 = ldf `is.matrix` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L249() else L250();
  L237():
    namD7 = force? namD6;
    checkMissing(namD7);
    match1 = ldf match in base;
    r126 = dyn match1(nn9, namD7, NA_INT, NULL);
    check L238() else D67();
  L242():
    goto L59(i66);
  L245():
    dr24 = tryDispatchBuiltin.1("[[", contrasts_arg8);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L247() else L246(i66, dr24);
  L246(i74, contrasts_arg10):
    nn12 = ld nn;
    check L248() else D72();
  D67():
    deopt 260 [i61, r126];
  D72():
    deopt 272 [i74, contrasts_arg10, nn12];
  L61(i79, r135):
    c32 = `as.logical`(r135);
    if c32 then L253() else L62();
  L238():
    goto L57(i61, r126);
  L247():
    dx37 = getTryDispatchBuiltinValue(dr24);
    goto L60(i66, dx37);
  L248():
    nn13 = force? nn12;
    __9 = ldf `[[` in base;
    r133 = dyn __9(contrasts_arg10, nn13);
    goto L60(i74, r133);
  L249():
    ca = ld ca;
    check L251() else D73();
  L250():
    r134 = dyn base22(<sym ca>);
    goto L61(i76, r134);
  D73():
    deopt 278 [i76, ca];
  L62():
    ca18 = ld ca;
    check L266() else D80();
  L251():
    ca1 = force? ca;
    checkMissing(ca1);
    is_matrix = ldf `is.matrix` in base;
    r136 = dyn is_matrix(ca1);
    check L252() else D74();
  L253():
    ca2 = ld ca;
    check L254() else D75();
  D74():
    deopt 281 [i76, r136];
  D75():
    deopt 282 [i79, ca2];
  D80():
    deopt 298 [i79, ca18];
  L252():
    goto L61(i76, r136);
  L254():
    ca3 = force? ca2;
    checkMissing(ca3);
    l18 = ld data;
    c33 = `is.object`(l18);
    if c33 then L255() else L256(i79, ca3, l18, ca3, l18);
  L266():
    ca19 = force? ca18;
    checkMissing(ca19);
    l27 = ld data;
    c35 = `is.object`(l27);
    if c35 then L267() else L268(i79, ca19, l27, ca19, l27);
  L63(i85, ca10, l24, ca11, dx40):
    contrasts__1 = ldf `contrasts<-`;
    check L259() else D77();
  L65(i93, ca26, l33, ca27, dx44):
    contrasts__2 = ldf `contrasts<-`;
    check L271() else D82();
  L255():
    dr26 = tryDispatchBuiltin.1("[[", l18);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L257() else L256(i79, ca3, l18, ca3, dr26);
  L256(i83, ca6, l21, ca7, l22):
    ni = ld ni;
    check L258() else D76();
  L267():
    dr30 = tryDispatchBuiltin.1("[[", l27);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L269() else L268(i79, ca19, l27, ca19, dr30);
  L268(i91, ca22, l30, ca23, l31):
    ni4 = ld ni;
    check L270() else D81();
  D76():
    deopt 286 [i83, ca6, l21, ca7, l22, ni];
  D77():
    deopt 290 [i85, ca10, l24, dx40, ca11];
  D81():
    deopt 302 [i91, ca22, l30, ca23, l31, ni4];
  D82():
    deopt 306 [i93, ca26, l33, dx44, ca27];
  L257():
    dx39 = getTryDispatchBuiltinValue(dr26);
    goto L63(i79, ca3, l18, ca3, dx39);
  L258():
    ni1 = force? ni;
    __10 = ldf `[[` in base;
    r137 = dyn __10(l22, ni1);
    goto L63(i83, ca6, l21, ca7, r137);
  L259():
    p19 = prom<V +>{
      ncol1 = ldf ncol;
      p18 = prom<V +>{
        ca12 = ld ca;
        ca13 = force? ca12;
        checkMissing(ca13);
        return ca13;
      };
      r139 = dyn ncol1(p18);
      return r139;
    };
    r141 = dyn contrasts__1(dx40, NULL, p19, ca11);
    check L260() else D78();
  L269():
    dx43 = getTryDispatchBuiltinValue(dr30);
    goto L65(i79, ca19, l27, ca19, dx43);
  L270():
    ni5 = force? ni4;
    __11 = ldf `[[` in base;
    r143 = dyn __11(l31, ni5);
    goto L65(i91, ca22, l30, ca23, r143);
  L271():
    r144 = dyn contrasts__2(dx44, NULL, ca27);
    check L272() else D83();
  D78():
    deopt 293 [i85, ca10, l24, r141];
  D83():
    deopt 308 [i93, ca26, l33, r144];
  L260():
    c34 = `is.object`(l24);
    if c34 then L261() else L262(i85, ca10, l24);
  L272():
    c36 = `is.object`(l33);
    if c36 then L273() else L274(i93, ca26, l33);
  L64(i89, ca17, dx42):
    st data = dx42;
    goto L59(i89);
  L66(i97, ca31, dx46):
    st data = dx46;
    goto L59(i97);
  L261():
    dr28 = tryDispatchBuiltin.0("[[<-", l24, r141);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L263() else L262(i85, ca10, dr28);
  L262(i87, ca15, l26):
    ni2 = ld ni;
    check L264() else D79();
  L273():
    dr32 = tryDispatchBuiltin.0("[[<-", l33, r144);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L275() else L274(i93, ca26, dr32);
  L274(i95, ca29, l35):
    ni6 = ld ni;
    check L276() else D84();
  D79():
    deopt 294 [i87, ca15, l26, r141, ni2];
  D84():
    deopt 309 [i95, ca29, l35, r144, ni6];
  L263():
    dx41 = getTryDispatchBuiltinValue(dr28);
    goto L64(i85, ca10, dx41);
  L264():
    ni3 = force? ni2;
    ____2 = ldf `[[<-` in base;
    r142 = dyn ____2(l26, r141, ni3);
    goto L64(i87, ca15, r142);
  L275():
    dx45 = getTryDispatchBuiltinValue(dr32);
    goto L66(i93, ca26, dx45);
  L276():
    ni7 = force? ni6;
    ____3 = ldf `[[<-` in base;
    r145 = dyn ____3(l35, r144, ni7);
    goto L66(i95, ca29, r145);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg is_factor:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg c:L, reg c1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg c5:L, reg r3:V, reg x3:*, reg x4:V, reg c6:L, reg c7:L, reg c8:V |
    mkenv;
    st x = x;
    is_factor = ldf `is.factor`;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn is_factor(p);
    check L3() else D1();
  D1():
    deopt 3 [r1];
  L3():
    c = `as.logical`(r1);
    if c then L0(c) else L4();
  L0(c1):
    popenv;
    return c1;
  L4():
    sym = ldf `is.logical`;
    base = ldf `is.logical` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L1(c5, r3):
    c7 = `as.logical`(r3);
    c8 = `||`(c5, c7);
    goto L0(c8);
  L5():
    x3 = ld x;
    check L7() else D2();
  L6():
    r2 = dyn base(<sym x>);
    goto L1(c, r2);
  D2():
    deopt 5 [c, x3];
  L7():
    x4 = force? x3;
    checkMissing(x4);
    c6 = `is.logical`(x4);
    goto L1(c, c6);
  }
}