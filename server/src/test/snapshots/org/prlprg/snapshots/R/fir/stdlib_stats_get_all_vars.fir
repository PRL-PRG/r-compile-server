fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2517969718;
    st get_all_vars = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2517969718(formula, data, `...`) {
  (reg formula:*, reg data:*, reg ddd:dots) -+> V { var formula:*, var data:*, reg data_isMissing:L, reg data_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg missing1:cls, reg r5:V, reg r6:V, reg c1:L, reg c3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg c6:L, reg r8:V, reg data1:*, reg data2:V, reg inherits:cls, reg r9:V, reg c7:L, reg c8:V, reg c10:L, reg c12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg c15:L, reg r11:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r12:V, reg c18:L, reg r13:V, reg data3:*, reg data4:V, reg attr:cls, reg r14:V, reg length:cls, reg r15:V, reg c19:L, reg c20:V, reg c22:L, reg data5:*, reg data6:V, reg as_formula:cls, reg data7:*, reg data8:V, reg p:p(V +), reg r19:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r21:V, reg r22:V, reg missing2:cls, reg r23:V, reg c23:L, reg c25:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r24:V, reg c28:L, reg r25:V, reg formula1:*, reg formula2:V, reg inherits1:cls, reg r26:V, reg c29:L, reg c30:V, reg c32:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r27:V, reg r28:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r29:V, reg r30:V, reg formula3:*, reg formula4:V, reg attr1:cls, reg r31:V, reg length1:cls, reg r32:V, reg c33:L, reg formula5:*, reg formula6:V, reg formula7:*, reg formula8:V, reg as_formula1:cls, reg data9:*, reg data10:V, reg p1:p(V +), reg r36:V, reg as_formula2:cls, reg formula9:*, reg formula10:V, reg p2:p(V +), reg r38:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r39:V, reg r40:V, reg missing3:cls, reg r41:V, reg c34:L, reg environment:cls, reg formula11:*, reg formula12:V, reg p3:p(V +), reg r43:V, reg is_data_frame:cls, reg data11:*, reg data12:V, reg p4:p(V +), reg r46:V, reg r47:V, reg c35:L, reg c37:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r48:V, reg c40:L, reg r49:V, reg data13:*, reg data14:V, reg is_environment:cls, reg r50:V, reg r51:V, reg c41:L, reg c42:V, reg c44:L, reg c46:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r52:V, reg c49:L, reg r53:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r54:V, reg c52:L, reg r55:V, reg data15:*, reg data16:V, reg attr2:cls, reg r56:V, reg c53:V, reg r57:V, reg c54:L, reg c55:V, reg c57:L, reg as_data_frame:cls, reg data17:*, reg data18:V, reg p5:p(V +), reg r59:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r60:V, reg r61:V, reg data19:*, reg data20:V, reg is_array:cls, reg r62:V, reg c58:L, reg stop:cls, reg r63:V, reg is_data_frame1:cls, reg data21:*, reg data22:V, reg p6:p(V +), reg r65:V, reg r66:V, reg c59:L, reg c61:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r67:V, reg c64:L, reg r68:V, reg data23:*, reg data24:V, reg is_environment1:cls, reg r69:V, reg r70:V, reg c65:L, reg c66:V, reg c68:L, reg c70:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r71:V, reg c73:L, reg r72:V, reg data25:*, reg data26:V, reg is_list:cls, reg r73:V, reg r74:V, reg c74:L, reg c75:V, reg c77:L, reg c79:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r75:V, reg c82:L, reg r76:V, reg data27:*, reg data28:V, reg c83:V, reg r77:V, reg c84:L, reg c85:V, reg c87:L, reg stop1:cls, reg r78:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r80:V, reg r81:V, reg formula13:*, reg formula14:V, reg inherits2:cls, reg r82:V, reg r83:V, reg c88:L, reg terms:cls, reg formula15:*, reg formula16:V, reg p7:p(V +), reg data29:*, reg data30:V, reg p8:p(V +), reg r86:V, reg environment1:cls, reg formula17:*, reg formula18:V, reg p9:p(V +), reg r89:V, reg _row_names_info:cls, reg data31:*, reg data32:V, reg p10:p(V +), reg r91:V, reg all_vars:cls, reg formula19:*, reg formula20:V, reg p11:p(V +), reg r93:V, reg lapply:cls, reg lapply1:cls, reg varnames:*, reg varnames1:V, reg p12:p(V +), reg as_name:*, reg as_name1:V, reg p13:p(V +), reg r96:V, reg p14:p(V +), reg eval:*, reg eval1:V, reg p15:p(V +), reg data33:*, reg data34:V, reg p16:p(V +), reg env:*, reg env1:V, reg p17:p(V +), reg r101:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r102:V, reg r103:V, reg rownames:*, reg rownames1:V, reg c89:V, reg c90:L, reg c92:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r104:V, reg c95:L, reg r105:V, reg formula21:*, reg formula22:V, reg attr3:cls, reg r106:V, reg r107:V, reg c96:L, reg c97:V, reg c99:L, reg variables:*, reg variables1:V, reg c100:L, reg variables3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg resp:*, reg resp1:V, reg __:cls, reg r108:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r109:V, reg r110:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r111:V, reg r112:V, reg lhs:*, reg lhs1:V, reg dim:cls, reg r113:V, reg c101:V, reg r114:V, reg c102:L, reg c104:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r115:V, reg c107:L, reg r116:V, reg d:*, reg d1:V, reg length2:cls, reg r117:V, reg r118:V, reg c108:L, reg c109:V, reg c111:L, reg is_data_frame2:cls, reg lhs2:*, reg lhs3:V, reg p18:p(V +), reg r120:V, reg c112:L, reg _row_names_info1:cls, reg lhs4:*, reg lhs5:V, reg p19:p(V +), reg r122:V, reg r123:V, reg rownames2:cls, reg lhs6:*, reg lhs7:V, reg p20:p(V +), reg r125:V, reg r126:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r127:V, reg lhs8:*, reg lhs9:V, reg names:cls, reg r128:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r130:V, reg r131:V, reg substitute:cls, reg r132:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r133:V, reg r134:V, reg extras:*, reg extras1:V, reg c113:L, reg extras3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r135:V, reg names1:cls, reg r136:V, reg eval2:cls, reg extras4:*, reg extras5:V, reg p21:p(V +), reg data35:*, reg data36:V, reg p22:p(V +), reg env2:*, reg env3:V, reg p23:p(V +), reg r140:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r141:V, reg r142:V, reg variables4:*, reg variables5:V, reg extras6:*, reg extras7:V, reg c114:cls, reg r143:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r144:V, reg r145:V, reg vapply:cls, reg x:*, reg x1:V, reg p24:p(V +), reg r147:cls, reg p25:p(V +), reg r149:V, reg any:cls, reg r150:V, reg c115:L, reg lapply2:cls, reg x2:*, reg x3:V, reg c116:L, reg x5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg isM:*, reg isM1:V, reg __2:cls, reg r151:V, reg p26:p(V +), reg I:*, reg I1:V, reg p27:p(V +), reg r154:V, reg l:*, reg c117:L, reg r156:V, reg l2:*, reg dr6:V, reg dc3:L, reg dx6:V, reg r158:V, reg dx7:V, reg isM2:*, reg isM3:V, reg ___:cls, reg r159:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r161:V, reg r162:V, reg varnames2:*, reg varnames3:V, reg extranames:*, reg extranames1:V, reg c118:cls, reg r163:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r164:V, reg r165:V, reg vapply1:cls, reg x6:*, reg x7:V, reg p28:p(V +), reg is_data_frame3:*, reg is_data_frame4:V, reg p29:p(V +), reg r168:V, reg any1:cls, reg r169:V, reg c119:L, reg unlist:cls, reg lapply3:cls, reg sym30:cls, reg base30:cls, reg guard30:L, reg r170:V, reg r171:V, reg x8:*, reg x9:V, reg r172:I, reg p30:p(V +), reg r174:cls, reg p31:p(V +), reg r176:V, reg p32:p(V +), reg r178:V, reg as_data_frame1:cls, reg x10:*, reg x11:V, reg p33:p(V +), reg r181:V, reg nms_x:*, reg nms_x1:V, reg l3:*, reg names__:cls, reg r182:V, reg anyM:*, reg anyM1:V, reg c120:L, reg lapply4:cls, reg x12:*, reg x13:V, reg c121:L, reg x15:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg isM4:*, reg isM5:V, reg __3:cls, reg r183:V, reg p34:p(V +), reg r185:cls, reg p35:p(V +), reg r187:V, reg l4:*, reg c122:L, reg r189:V, reg l6:*, reg dr10:V, reg dc5:L, reg dx10:V, reg r191:V, reg dx11:V, reg isM6:*, reg isM7:V, reg ___1:cls, reg r192:V, reg ____:cls, reg rownames3:*, reg rownames4:V, reg p36:p(V +), reg _set_row_names:cls, reg sym31:cls, reg base31:cls, reg guard31:L, reg r195:V, reg r196:V, reg vapply2:cls, reg x16:*, reg x17:V, reg p37:p(V +), reg NROW:*, reg NROW1:V, reg p38:p(V +), reg integer:cls, reg r199:V, reg p39:p(V +), reg r201:V, reg max:cls, reg r202:V, reg p40:p(V +), reg r204:V, reg p41:p(V +), reg r206:V, reg l7:*, reg attr__:cls, reg r207:V, reg x18:*, reg x19:V |
    mkenv;
    st formula = formula;
    data_isMissing = missing.0(data);
    if data_isMissing then L0(NULL) else L0(data);
  L0(data_orDefault):
    st data = data_orDefault;
    st `...` = ddd;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L71() else L72();
  L1(r1):
    c = `as.logical`(r1);
    if c then L73() else L2();
  L71():
    missing = ldf missing in base;
    r2 = dyn missing(<sym formula>);
    goto L1(r2);
  L72():
    r = dyn base(<sym formula>);
    goto L1(r);
  L2():
    sym5 = ldf missing;
    base5 = ldf missing in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L98() else L99();
  L11():
    as_formula2 = ldf `as.formula`;
    check L122() else D17();
  L73():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L74() else L75();
  D17():
    deopt 77 [];
  L3(r4):
    r6 = `!`(r4);
    c1 = `as.logical`(r6);
    if c1 then L76() else L4(c1);
  L12(r22):
    c23 = `as.logical`(r22);
    if c23 then L100() else L13(c23);
  L74():
    missing1 = ldf missing in base;
    r5 = dyn missing1(<sym data>);
    goto L3(r5);
  L75():
    r3 = dyn base1(<sym data>);
    goto L3(r3);
  L98():
    missing2 = ldf missing in base;
    r23 = dyn missing2(<sym data>);
    goto L12(r23);
  L99():
    r21 = dyn base5(<sym data>);
    goto L12(r21);
  L122():
    p2 = prom<V +>{
      formula9 = ld formula;
      formula10 = force? formula9;
      checkMissing(formula10);
      return formula10;
    };
    r38 = dyn as_formula2(p2);
    check L123() else D18();
  D18():
    deopt 79 [r38];
  L4(c3):
    c10 = `as.logical`(c3);
    if c10 then L82() else L6(c10);
  L13(c25):
    c32 = `as.logical`(c25);
    if c32 then L106() else L15();
  L76():
    sym2 = ldf inherits;
    base2 = ldf inherits in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L77() else L78();
  L100():
    sym6 = ldf inherits;
    base6 = ldf inherits in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L101() else L102();
  L123():
    st formula = r38;
    sym9 = ldf missing;
    base9 = ldf missing in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L124() else L125();
  L5(c6, r8):
    c7 = `as.logical`(r8);
    c8 = `&&`(c6, c7);
    goto L4(c8);
  L6(c12):
    c22 = `as.logical`(c12);
    if c22 then L91() else L9();
  L14(c28, r25):
    c29 = `as.logical`(r25);
    c30 = `&&`(c28, c29);
    goto L13(c30);
  L15():
    goto L11();
  L20(r40):
    c34 = `as.logical`(r40);
    if c34 then L126() else L21();
  L77():
    data1 = ld data;
    check L79() else D0();
  L78():
    r7 = dyn base2(<sym data>, "data.frame");
    goto L5(c1, r7);
  L82():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L83() else L84();
  L101():
    formula1 = ld formula;
    check L103() else D8();
  L102():
    r24 = dyn base6(<sym formula>, "data.frame");
    goto L14(c23, r24);
  L106():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L107() else L108();
  L124():
    missing3 = ldf missing in base;
    r41 = dyn missing3(<sym data>);
    goto L20(r41);
  L125():
    r39 = dyn base9(<sym data>);
    goto L20(r39);
  D0():
    deopt 9 [c1, data1];
  D8():
    deopt 43 [c23, formula1];
  L7(c15, r11):
    c19 = `as.logical`(r11);
    c20 = `&&`(c15, c19);
    goto L6(c20);
  L9():
    as_formula = ldf `as.formula`;
    check L95() else D6();
  L16(r28):
    c33 = `as.logical`(r28);
    if c33 then L114() else L18();
  L21():
    is_data_frame = ldf `is.data.frame`;
    check L130() else D21();
  L22():
    is_data_frame1 = ldf `is.data.frame`;
    check L158() else D33();
  L79():
    data2 = force? data1;
    checkMissing(data2);
    inherits = ldf inherits in base;
    r9 = dyn inherits(data2, "data.frame", FALSE);
    check L80() else D1();
  L83():
    sym4 = ldf attr;
    base4 = ldf attr in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L85() else L86();
  L84():
    r10 = dyn base3(<lang attr(data, "terms")>);
    goto L7(c10, r10);
  L91():
    data5 = ld data;
    check L92() else D5();
  L103():
    formula2 = force? formula1;
    checkMissing(formula2);
    inherits1 = ldf inherits in base;
    r26 = dyn inherits1(formula2, "data.frame", FALSE);
    check L104() else D9();
  L107():
    sym8 = ldf attr;
    base8 = ldf attr in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L109() else L110();
  L108():
    r27 = dyn base7(<lang attr(formula, "terms")>);
    goto L16(r27);
  L126():
    environment = ldf environment;
    check L127() else D19();
  D1():
    deopt 14 [c1, r9];
  D5():
    deopt 28 [data5];
  D6():
    deopt 34 [];
  D9():
    deopt 48 [c23, r26];
  D19():
    deopt 85 [];
  D21():
    deopt 90 [];
  D33():
    deopt 131 [];
  L8(c18, r13):
    length = ldf length in base;
    r15 = dyn length(r13);
    check L89() else D4();
  L17(r30):
    length1 = ldf length in base;
    r32 = dyn length1(r30);
    check L113() else D12();
  L18():
    formula7 = ld formula;
    check L118() else D14();
  L80():
    goto L5(c1, r9);
  L85():
    data3 = ld data;
    check L87() else D2();
  L86():
    r12 = dyn base4(<sym data>, "terms");
    goto L8(c10, r12);
  L92():
    data6 = force? data5;
    checkMissing(data6);
    popenv;
    return data6;
  L95():
    p = prom<V +>{
      data7 = ld data;
      data8 = force? data7;
      checkMissing(data8);
      return data8;
    };
    r19 = dyn as_formula(p);
    check L96() else D7();
  L104():
    goto L14(c23, r26);
  L109():
    formula3 = ld formula;
    check L111() else D10();
  L110():
    r29 = dyn base8(<sym formula>, "terms");
    goto L17(r29);
  L114():
    formula5 = ld formula;
    check L115() else D13();
  L127():
    p3 = prom<V +>{
      formula11 = ld formula;
      formula12 = force? formula11;
      checkMissing(formula12);
      return formula12;
    };
    r43 = dyn environment(p3);
    check L128() else D20();
  L130():
    p4 = prom<V +>{
      data11 = ld data;
      data12 = force? data11;
      checkMissing(data12);
      return data12;
    };
    r46 = dyn is_data_frame(p4);
    check L131() else D22();
  L158():
    p6 = prom<V +>{
      data21 = ld data;
      data22 = force? data21;
      checkMissing(data22);
      return data22;
    };
    r65 = dyn is_data_frame1(p6);
    check L159() else D34();
  D2():
    deopt 20 [c10, data3];
  D4():
    deopt 26 [c18, r15];
  D7():
    deopt 36 [r19];
  D10():
    deopt 54 [formula3];
  D12():
    deopt 60 [r32];
  D13():
    deopt 61 [formula5];
  D14():
    deopt 66 [formula7];
  D20():
    deopt 87 [r43];
  D22():
    deopt 92 [r46];
  D34():
    deopt 133 [r65];
  L87():
    data4 = force? data3;
    checkMissing(data4);
    attr = ldf attr in base;
    r14 = dyn attr(data4, "terms");
    check L88() else D3();
  L89():
    goto L7(c18, r15);
  L96():
    st formula = r19;
    goto L11();
  L111():
    formula4 = force? formula3;
    checkMissing(formula4);
    attr1 = ldf attr in base;
    r31 = dyn attr1(formula4, "terms");
    check L112() else D11();
  L113():
    goto L16(r32);
  L115():
    formula6 = force? formula5;
    checkMissing(formula6);
    popenv;
    return formula6;
  L118():
    formula8 = force? formula7;
    checkMissing(formula8);
    st data = formula8;
    as_formula1 = ldf `as.formula`;
    check L119() else D15();
  L128():
    st data = r43;
    goto L22();
  L131():
    r47 = `!`(r46);
    c35 = `as.logical`(r47);
    if c35 then L132() else L23(c35);
  L159():
    r66 = `!`(r65);
    c59 = `as.logical`(r66);
    if c59 then L160() else L31(c59);
  D3():
    deopt 24 [c10, r14];
  D11():
    deopt 58 [r31];
  D15():
    deopt 70 [];
  L23(c37):
    c44 = `as.logical`(c37);
    if c44 then L138() else L25(c44);
  L31(c61):
    c68 = `as.logical`(c61);
    if c68 then L166() else L33(c68);
  L88():
    goto L8(c10, r14);
  L112():
    goto L17(r31);
  L119():
    p1 = prom<V +>{
      data9 = ld data;
      data10 = force? data9;
      checkMissing(data10);
      return data10;
    };
    r36 = dyn as_formula1(p1);
    check L120() else D16();
  L132():
    sym10 = ldf `is.environment`;
    base10 = ldf `is.environment` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L133() else L134();
  L160():
    sym14 = ldf `is.environment`;
    base14 = ldf `is.environment` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L161() else L162();
  D16():
    deopt 72 [r36];
  L24(c40, r49):
    r51 = `!`(r49);
    c41 = `as.logical`(r51);
    c42 = `&&`(c40, c41);
    goto L23(c42);
  L25(c46):
    c57 = `as.logical`(c46);
    if c57 then L146() else L28();
  L32(c64, r68):
    r70 = `!`(r68);
    c65 = `as.logical`(r70);
    c66 = `&&`(c64, c65);
    goto L31(c66);
  L33(c70):
    c77 = `as.logical`(c70);
    if c77 then L172() else L35(c77);
  L120():
    st formula = r36;
    goto L11();
  L133():
    data13 = ld data;
    check L135() else D23();
  L134():
    r48 = dyn base10(<sym data>);
    goto L24(c35, r48);
  L138():
    sym11 = ldf `is.null`;
    base11 = ldf `is.null` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L139() else L140();
  L161():
    data23 = ld data;
    check L163() else D35();
  L162():
    r67 = dyn base14(<sym data>);
    goto L32(c59, r67);
  L166():
    sym15 = ldf `is.list`;
    base15 = ldf `is.list` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L167() else L168();
  D23():
    deopt 96 [c35, data13];
  D35():
    deopt 137 [c59, data23];
  L26(c49, r53):
    r57 = `!`(r53);
    c54 = `as.logical`(r57);
    c55 = `&&`(c49, c54);
    goto L25(c55);
  L28():
    sym13 = ldf `is.array`;
    base13 = ldf `is.array` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L150() else L151();
  L34(c73, r72):
    r74 = `!`(r72);
    c74 = `as.logical`(r74);
    c75 = `&&`(c73, c74);
    goto L33(c75);
  L35(c79):
    c87 = `as.logical`(c79);
    if c87 then L177() else L37();
  L135():
    data14 = force? data13;
    checkMissing(data14);
    is_environment = ldf `is.environment` in base;
    r50 = dyn is_environment(data14);
    check L136() else D24();
  L139():
    sym12 = ldf attr;
    base12 = ldf attr in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L141() else L142();
  L140():
    r52 = dyn base11(<lang attr(data, "class")>);
    goto L26(c44, r52);
  L146():
    as_data_frame = ldf `as.data.frame`;
    check L147() else D27();
  L163():
    data24 = force? data23;
    checkMissing(data24);
    is_environment1 = ldf `is.environment` in base;
    r69 = dyn is_environment1(data24);
    check L164() else D36();
  L167():
    data25 = ld data;
    check L169() else D37();
  L168():
    r71 = dyn base15(<sym data>);
    goto L34(c68, r71);
  L172():
    sym16 = ldf `is.null`;
    base16 = ldf `is.null` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L173() else L174();
  D24():
    deopt 99 [c35, r50];
  D27():
    deopt 114 [];
  D36():
    deopt 140 [c59, r69];
  D37():
    deopt 145 [c68, data25];
  L27(c52, r55):
    c53 = `==`(r55, NULL);
    goto L26(c52, c53);
  L29(r61):
    c58 = `as.logical`(r61);
    if c58 then L154() else L30();
  L36(c82, r76):
    r77 = `!`(r76);
    c84 = `as.logical`(r77);
    c85 = `&&`(c82, c84);
    goto L35(c85);
  L37():
    goto L38();
  L38():
    sym17 = ldf inherits;
    base17 = ldf inherits in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L181() else L182();
  L136():
    goto L24(c35, r50);
  L141():
    data15 = ld data;
    check L143() else D25();
  L142():
    r54 = dyn base12(<sym data>, "class");
    goto L27(c44, r54);
  L147():
    p5 = prom<V +>{
      data17 = ld data;
      data18 = force? data17;
      checkMissing(data18);
      return data18;
    };
    r59 = dyn as_data_frame(p5);
    check L148() else D28();
  L150():
    data19 = ld data;
    check L152() else D29();
  L151():
    r60 = dyn base13(<sym data>);
    goto L29(r60);
  L164():
    goto L32(c59, r69);
  L169():
    data26 = force? data25;
    checkMissing(data26);
    is_list = ldf `is.list` in base;
    r73 = dyn is_list(data26);
    check L170() else D38();
  L173():
    data27 = ld data;
    check L175() else D39();
  L174():
    r75 = dyn base16(<sym data>);
    goto L36(c77, r75);
  L177():
    stop1 = ldf stop;
    check L178() else D40();
  D25():
    deopt 105 [c44, data15];
  D28():
    deopt 116 [r59];
  D29():
    deopt 120 [data19];
  D38():
    deopt 148 [c68, r73];
  D39():
    deopt 152 [c77, data27];
  D40():
    deopt 158 [];
  L30():
    goto L22();
  L39(r81):
    r83 = `!`(r81);
    c88 = `as.logical`(r83);
    if c88 then L185() else L40();
  L143():
    data16 = force? data15;
    checkMissing(data16);
    attr2 = ldf attr in base;
    r56 = dyn attr2(data16, "class");
    check L144() else D26();
  L148():
    st data = r59;
    goto L22();
  L152():
    data20 = force? data19;
    checkMissing(data20);
    is_array = ldf `is.array` in base;
    r62 = dyn is_array(data20);
    check L153() else D30();
  L154():
    stop = ldf stop;
    check L155() else D31();
  L170():
    goto L34(c68, r73);
  L175():
    data28 = force? data27;
    checkMissing(data28);
    c83 = `==`(data28, NULL);
    goto L36(c77, c83);
  L178():
    r78 = dyn stop1("'data' must be a data.frame, environment, or list");
    check L179() else D41();
  L181():
    formula13 = ld formula;
    check L183() else D42();
  L182():
    r80 = dyn base17(<sym formula>, "terms");
    goto L39(r80);
  D26():
    deopt 109 [c44, r56];
  D30():
    deopt 123 [r62];
  D31():
    deopt 125 [];
  D41():
    deopt 160 [r78];
  D42():
    deopt 165 [formula13];
  L40():
    goto L41();
  L41():
    environment1 = ldf environment;
    check L189() else D46();
  L144():
    goto L27(c44, r56);
  L153():
    goto L29(r62);
  L155():
    r63 = dyn stop("'data' must be a data.frame, not a matrix or an array");
    check L156() else D32();
  L179():
    goto L38();
  L183():
    formula14 = force? formula13;
    checkMissing(formula14);
    inherits2 = ldf inherits in base;
    r82 = dyn inherits2(formula14, "terms", FALSE);
    check L184() else D43();
  L185():
    terms = ldf terms;
    check L186() else D44();
  D32():
    deopt 127 [r63];
  D43():
    deopt 170 [r82];
  D44():
    deopt 173 [];
  D46():
    deopt 182 [];
  L156():
    goto L22();
  L184():
    goto L39(r82);
  L186():
    p7 = prom<V +>{
      formula15 = ld formula;
      formula16 = force? formula15;
      checkMissing(formula16);
      return formula16;
    };
    p8 = prom<V +>{
      data29 = ld data;
      data30 = force? data29;
      checkMissing(data30);
      return data30;
    };
    r86 = dyn terms[, data](p7, p8);
    check L187() else D45();
  L189():
    p9 = prom<V +>{
      formula17 = ld formula;
      formula18 = force? formula17;
      checkMissing(formula18);
      return formula18;
    };
    r89 = dyn environment1(p9);
    check L190() else D47();
  D45():
    deopt 177 [r86];
  D47():
    deopt 184 [r89];
  L187():
    st formula = r86;
    goto L41();
  L190():
    st env = r89;
    _row_names_info = ldf `.row_names_info`;
    check L191() else D48();
  D48():
    deopt 187 [];
  L191():
    p10 = prom<V +>{
      data31 = ld data;
      data32 = force? data31;
      checkMissing(data32);
      return data32;
    };
    r91 = dyn _row_names_info(p10, 0);
    check L192() else D49();
  D49():
    deopt 190 [r91];
  L192():
    st rownames = r91;
    all_vars = ldf `all.vars`;
    check L193() else D50();
  D50():
    deopt 193 [];
  L193():
    p11 = prom<V +>{
      formula19 = ld formula;
      formula20 = force? formula19;
      checkMissing(formula20);
      return formula20;
    };
    r93 = dyn all_vars(p11);
    check L194() else D51();
  D51():
    deopt 195 [r93];
  L194():
    st varnames = r93;
    lapply = ldf lapply;
    check L195() else D52();
  D52():
    deopt 198 [];
  L195():
    p14 = prom<V +>{
      lapply1 = ldf lapply;
      p12 = prom<V +>{
        varnames = ld varnames;
        varnames1 = force? varnames;
        checkMissing(varnames1);
        return varnames1;
      };
      p13 = prom<V +>{
        as_name = ld `as.name`;
        as_name1 = force? as_name;
        checkMissing(as_name1);
        return as_name1;
      };
      r96 = dyn lapply1(p12, p13);
      return r96;
    };
    p15 = prom<V +>{
      eval = ld eval;
      eval1 = force? eval;
      checkMissing(eval1);
      return eval1;
    };
    p16 = prom<V +>{
      data33 = ld data;
      data34 = force? data33;
      checkMissing(data34);
      return data34;
    };
    p17 = prom<V +>{
      env = ld env;
      env1 = force? env;
      checkMissing(env1);
      return env1;
    };
    r101 = dyn lapply(p14, p15, p16, p17);
    check L196() else D53();
  D53():
    deopt 203 [r101];
  L196():
    st variables = r101;
    sym18 = ldf `is.null`;
    base18 = ldf `is.null` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L197() else L198();
  L42(r103):
    c90 = `as.logical`(r103);
    if c90 then L200() else L43(c90);
  L197():
    rownames = ld rownames;
    check L199() else D54();
  L198():
    r102 = dyn base18(<sym rownames>);
    goto L42(r102);
  D54():
    deopt 206 [rownames];
  L43(c92):
    c99 = `as.logical`(c92);
    if c99 then L206() else L45();
  L199():
    rownames1 = force? rownames;
    checkMissing(rownames1);
    c89 = `==`(rownames1, NULL);
    goto L42(c89);
  L200():
    sym19 = ldf attr;
    base19 = ldf attr in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L201() else L202();
  L44(c95, r105):
    st resp = r105;
    r107 = `>`(r105, 0.0);
    c96 = `as.logical`(r107);
    c97 = `&&`(c95, c96);
    goto L43(c97);
  L45():
    goto L55();
  L55():
    sym24 = ldf substitute;
    base24 = ldf substitute in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L239() else L240();
  L201():
    formula21 = ld formula;
    check L203() else D55();
  L202():
    r104 = dyn base19(<sym formula>, "response");
    goto L44(c90, r104);
  L206():
    variables = ld variables;
    check L207() else D57();
  D55():
    deopt 211 [c90, formula21];
  D57():
    deopt 220 [variables];
  L56(r131):
    st extras = r131;
    sym25 = ldf names;
    base25 = ldf names in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L241() else L242();
  L203():
    formula22 = force? formula21;
    checkMissing(formula22);
    attr3 = ldf attr in base;
    r106 = dyn attr3(formula22, "response");
    check L204() else D56();
  L207():
    variables1 = force? variables;
    checkMissing(variables1);
    c100 = `is.object`(variables1);
    if c100 then L208() else L209(variables1);
  L239():
    substitute = ldf substitute in base;
    r132 = dyn substitute(<lang list(...)>);
    goto L56(r132);
  L240():
    r130 = dyn base24(<lang list(...)>);
    goto L56(r130);
  D56():
    deopt 215 [c90, r106];
  L46(dx1):
    st lhs = dx1;
    sym20 = ldf `is.null`;
    base20 = ldf `is.null` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L212() else L213();
  L57(r134):
    st extranames = r134;
    eval2 = ldf eval;
    check L248() else D73();
  L204():
    goto L44(c90, r106);
  L208():
    dr = tryDispatchBuiltin.1("[[", variables1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L210() else L209(dr);
  L209(variables3):
    resp = ld resp;
    check L211() else D58();
  L241():
    extras = ld extras;
    check L243() else D71();
  L242():
    r133 = dyn base25(<lang `[`(extras, `-`(1))>);
    goto L57(r133);
  D58():
    deopt 222 [variables3, resp];
  D71():
    deopt 273 [extras];
  D73():
    deopt 282 [];
  L47(r110):
    r114 = `!`(r110);
    c102 = `as.logical`(r114);
    if c102 then L218() else L49(c102);
  L210():
    dx = getTryDispatchBuiltinValue(dr);
    goto L46(dx);
  L211():
    resp1 = force? resp;
    __ = ldf `[[` in base;
    r108 = dyn __(variables3, resp1);
    goto L46(r108);
  L212():
    sym21 = ldf dim;
    base21 = ldf dim in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L214() else L215();
  L213():
    r109 = dyn base20(<lang `<-`(d, dim(lhs))>);
    goto L47(r109);
  L243():
    extras1 = force? extras;
    checkMissing(extras1);
    c113 = `is.object`(extras1);
    if c113 then L244() else L245(extras1);
  L248():
    p21 = prom<V +>{
      extras4 = ld extras;
      extras5 = force? extras4;
      checkMissing(extras5);
      return extras5;
    };
    p22 = prom<V +>{
      data35 = ld data;
      data36 = force? data35;
      checkMissing(data36);
      return data36;
    };
    p23 = prom<V +>{
      env2 = ld env;
      env3 = force? env2;
      checkMissing(env3);
      return env3;
    };
    r140 = dyn eval2(p21, p22, p23);
    check L249() else D74();
  D74():
    deopt 286 [r140];
  L48(r112):
    st d = r112;
    c101 = `==`(r112, NULL);
    goto L47(c101);
  L49(c104):
    c111 = `as.logical`(c104);
    if c111 then L224() else L51();
  L58(dx3):
    names1 = ldf names in base;
    r136 = dyn names1(dx3);
    check L247() else D72();
  L214():
    lhs = ld lhs;
    check L216() else D59();
  L215():
    r111 = dyn base21(<sym lhs>);
    goto L48(r111);
  L218():
    sym22 = ldf length;
    base22 = ldf length in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L219() else L220();
  L244():
    dr2 = tryDispatchBuiltin.1("[", extras1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L246() else L245(dr2);
  L245(extras3):
    __1 = ldf `[` in base;
    r135 = dyn __1(extras3, -1);
    goto L58(r135);
  L249():
    st extras = r140;
    sym26 = ldf c;
    base26 = ldf c in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L250() else L251();
  D59():
    deopt 229 [lhs];
  D72():
    deopt 279 [r136];
  L50(c107, r116):
    r118 = `==`(r116, 2);
    c108 = `as.logical`(r118);
    c109 = `&&`(c107, c108);
    goto L49(c109);
  L51():
    sym23 = ldf names;
    base23 = ldf names in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L234() else L235();
  L54(r126):
    st rownames = r126;
    goto L55();
  L59(r142):
    st x = r142;
    sym27 = ldf any;
    base27 = ldf any in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L255() else L256();
  L216():
    lhs1 = force? lhs;
    checkMissing(lhs1);
    dim = ldf dim in base;
    r113 = dyn dim(lhs1);
    check L217() else D60();
  L219():
    d = ld d;
    check L221() else D61();
  L220():
    r115 = dyn base22(<sym d>);
    goto L50(c102, r115);
  L224():
    is_data_frame2 = ldf `is.data.frame`;
    check L225() else D63();
  L246():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L58(dx2);
  L247():
    goto L57(r136);
  L250():
    variables4 = ld variables;
    check L252() else D75();
  L251():
    r141 = dyn base26(<sym variables>, <sym extras>);
    goto L59(r141);
  D60():
    deopt 232 [r113];
  D61():
    deopt 238 [c102, d];
  D63():
    deopt 246 [];
  D75():
    deopt 290 [variables4];
  L60(r145):
    st anyM = r145;
    c115 = `as.logical`(r145);
    if c115 then L260() else L61();
  L217():
    goto L48(r113);
  L221():
    d1 = force? d;
    checkMissing(d1);
    length2 = ldf length in base;
    r117 = dyn length2(d1);
    check L222() else D62();
  L225():
    p18 = prom<V +>{
      lhs2 = ld lhs;
      lhs3 = force? lhs2;
      checkMissing(lhs3);
      return lhs3;
    };
    r120 = dyn is_data_frame2(p18);
    check L226() else D64();
  L234():
    lhs8 = ld lhs;
    check L236() else D69();
  L235():
    r127 = dyn base23(<sym lhs>);
    goto L54(r127);
  L252():
    variables5 = force? variables4;
    checkMissing(variables5);
    extras6 = ld extras;
    check L253() else D76();
  L255():
    vapply = ldf vapply;
    check L257() else D78();
  L256():
    r144 = dyn base27(<lang `<-`(isM, vapply(x, function((o=), `&&`(is.matrix(o), `!`(inherits(o, "AsIs"))), NULL), NA_LGL))>);
    goto L60(r144);
  D62():
    deopt 241 [c102, r117];
  D64():
    deopt 248 [r120];
  D69():
    deopt 260 [lhs8];
  D76():
    deopt 292 [extras6];
  D78():
    deopt 300 [];
  L61():
    goto L63();
  L63():
    sym28 = ldf c;
    base28 = ldf c in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L268() else L269();
  L222():
    goto L50(c102, r117);
  L226():
    c112 = `as.logical`(r120);
    if c112 then L227() else L52();
  L236():
    lhs9 = force? lhs8;
    checkMissing(lhs9);
    names = ldf names in base;
    r128 = dyn names(lhs9);
    check L237() else D70();
  L253():
    extras7 = force? extras6;
    checkMissing(extras7);
    c114 = ldf c in base;
    r143 = dyn c114(variables5, extras7);
    check L254() else D77();
  L257():
    p24 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p25 = prom<V +>{
      r147 = clos inner1942959787;
      return r147;
    };
    r149 = dyn vapply(p24, p25, NA_LGL);
    check L258() else D79();
  L260():
    lapply2 = ldf lapply;
    check L261() else D81();
  D70():
    deopt 263 [r128];
  D77():
    deopt 295 [r143];
  D79():
    deopt 304 [r149];
  D81():
    deopt 310 [];
  L52():
    rownames2 = ldf rownames;
    check L231() else D67();
  L53(r123):
    goto L54(r123);
  L64(r162):
    st `nms.x` = r162;
    sym29 = ldf any;
    base29 = ldf any in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L273() else L274();
  L227():
    _row_names_info1 = ldf `.row_names_info`;
    check L228() else D65();
  L237():
    goto L54(r128);
  L254():
    goto L59(r143);
  L258():
    st isM = r149;
    any = ldf any in base;
    r150 = dyn any(r149);
    check L259() else D80();
  L261():
    p26 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      c116 = `is.object`(x3);
      if c116 then L1() else L2(x3);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", x3);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(x5):
      isM = ld isM;
      isM1 = force? isM;
      __2 = ldf `[` in base;
      r151 = dyn __2(x5, isM1);
      goto L0(r151);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p27 = prom<V +>{
      I = ld I;
      I1 = force? I;
      checkMissing(I1);
      return I1;
    };
    r154 = dyn lapply2(p26, p27);
    check L262() else D82();
  L268():
    varnames2 = ld varnames;
    check L270() else D84();
  L269():
    r161 = dyn base28(<sym varnames>, <sym extranames>);
    goto L64(r161);
  D65():
    deopt 250 [];
  D67():
    deopt 255 [];
  D80():
    deopt 307 [r150];
  D82():
    deopt 313 [r154];
  D84():
    deopt 323 [varnames2];
  L65(r165):
    c119 = `as.logical`(r165);
    if c119 then L278() else L66();
  L228():
    p19 = prom<V +>{
      lhs4 = ld lhs;
      lhs5 = force? lhs4;
      checkMissing(lhs5);
      return lhs5;
    };
    r122 = dyn _row_names_info1(p19, 0);
    check L229() else D66();
  L231():
    p20 = prom<V +>{
      lhs6 = ld lhs;
      lhs7 = force? lhs6;
      checkMissing(lhs7);
      return lhs7;
    };
    r125 = dyn rownames2(p20);
    check L232() else D68();
  L259():
    goto L60(r150);
  L262():
    l = ld x;
    c117 = `is.object`(l);
    if c117 then L263() else L264(r154, l);
  L270():
    varnames3 = force? varnames2;
    checkMissing(varnames3);
    extranames = ld extranames;
    check L271() else D85();
  L273():
    vapply1 = ldf vapply;
    check L275() else D87();
  L274():
    r164 = dyn base29(<lang vapply(x, is.data.frame, NA_LGL)>);
    goto L65(r164);
  D66():
    deopt 253 [r122];
  D68():
    deopt 257 [r125];
  D85():
    deopt 325 [extranames];
  D87():
    deopt 333 [];
  L62(r158, dx7):
    st x = dx7;
    goto L63();
  L66():
    goto L67();
  L67():
    as_data_frame1 = ldf `as.data.frame`;
    check L282() else D92();
  L229():
    goto L53(r122);
  L232():
    goto L53(r125);
  L263():
    dr6 = tryDispatchBuiltin.0("[<-", l, r154);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L265() else L264(r154, dr6);
  L264(r156, l2):
    isM2 = ld isM;
    check L266() else D83();
  L271():
    extranames1 = force? extranames;
    checkMissing(extranames1);
    c118 = ldf c in base;
    r163 = dyn c118(varnames3, extranames1);
    check L272() else D86();
  L275():
    p28 = prom<V +>{
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      return x7;
    };
    p29 = prom<V +>{
      is_data_frame3 = ld `is.data.frame`;
      is_data_frame4 = force? is_data_frame3;
      checkMissing(is_data_frame4);
      return is_data_frame4;
    };
    r168 = dyn vapply1(p28, p29, NA_LGL);
    check L276() else D88();
  L278():
    unlist = ldf unlist;
    check L279() else D90();
  D83():
    deopt 315 [r156, l2, r154, isM2];
  D86():
    deopt 328 [r163];
  D88():
    deopt 337 [r168];
  D90():
    deopt 341 [];
  D92():
    deopt 348 [];
  L265():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L62(r154, dx6);
  L266():
    isM3 = force? isM2;
    ___ = ldf `[<-` in base;
    r159 = dyn ___(l2, r154, isM3);
    goto L62(r156, r159);
  L272():
    goto L64(r163);
  L276():
    any1 = ldf any in base;
    r169 = dyn any1(r168);
    check L277() else D89();
  L279():
    p32 = prom<V +>{
      lapply3 = ldf lapply;
      p30 = prom<V +>{
        sym30 = ldf seq_along;
        base30 = ldf seq_along in base;
        guard30 = `==`.4(sym30, base30);
        if guard30 then L1() else L2();
      L0(r171):
        return r171;
      L1():
        x8 = ld x;
        x9 = force? x8;
        checkMissing(x9);
        r172 = seq_along(x9);
        goto L0(r172);
      L2():
        r170 = dyn base30(<sym x>);
        goto L0(r170);
      };
      p31 = prom<V +>{
        r174 = clos inner3002224933;
        return r174;
      };
      r176 = dyn lapply3(p30, p31);
      return r176;
    };
    r178 = dyn unlist(p32);
    check L280() else D91();
  L282():
    p33 = prom<V +>{
      x10 = ld x;
      x11 = force? x10;
      checkMissing(x11);
      return x11;
    };
    r181 = dyn as_data_frame1[, optional](p33, TRUE);
    check L283() else D93();
  D89():
    deopt 339 [r169];
  D91():
    deopt 343 [r178];
  D93():
    deopt 352 [r181];
  L277():
    goto L65(r169);
  L280():
    st `nms.x` = r178;
    goto L67();
  L283():
    st x = r181;
    nms_x = ld `nms.x`;
    check L284() else D94();
  D94():
    deopt 354 [nms_x];
  L284():
    nms_x1 = force? nms_x;
    checkMissing(nms_x1);
    l3 = ld x;
    names__ = ldf `names<-`;
    check L285() else D95();
  D95():
    deopt 357 [nms_x1, l3, nms_x1];
  L285():
    r182 = dyn names__(l3, NULL, nms_x1);
    check L286() else D96();
  D96():
    deopt 359 [nms_x1, r182];
  L286():
    st x = r182;
    anyM = ld anyM;
    check L287() else D97();
  D97():
    deopt 361 [anyM];
  L287():
    anyM1 = force? anyM;
    checkMissing(anyM1);
    c120 = `as.logical`(anyM1);
    if c120 then L288() else L68();
  L68():
    goto L70();
  L70():
    ____ = ldf `%||%`;
    check L296() else D101();
  L288():
    lapply4 = ldf lapply;
    check L289() else D98();
  D98():
    deopt 364 [];
  D101():
    deopt 376 [];
  L289():
    p34 = prom<V +>{
      x12 = ld x;
      x13 = force? x12;
      checkMissing(x13);
      c121 = `is.object`(x13);
      if c121 then L1() else L2(x13);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", x13);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(x15):
      isM4 = ld isM;
      isM5 = force? isM4;
      __3 = ldf `[` in base;
      r183 = dyn __3(x15, isM5);
      goto L0(r183);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p35 = prom<V +>{
      r185 = clos inner1942959787;
      return r185;
    };
    r187 = dyn lapply4(p34, p35);
    check L290() else D99();
  L296():
    p36 = prom<V +>{
      rownames3 = ld rownames;
      rownames4 = force? rownames3;
      checkMissing(rownames4);
      return rownames4;
    };
    p41 = prom<V +>{
      _set_row_names = ldf `.set_row_names`;
      p40 = prom<V +>{
        sym31 = ldf max;
        base31 = ldf max in base;
        guard31 = `==`.4(sym31, base31);
        if guard31 then L1() else L2();
      L0(r196):
        return r196;
      L1():
        vapply2 = ldf vapply;
        p37 = prom<V +>{
          x16 = ld x;
          x17 = force? x16;
          checkMissing(x17);
          return x17;
        };
        p38 = prom<V +>{
          NROW = ld NROW;
          NROW1 = force? NROW;
          checkMissing(NROW1);
          return NROW1;
        };
        p39 = prom<V +>{
          integer = ldf integer;
          r199 = dyn integer(1.0);
          return r199;
        };
        r201 = dyn vapply2(p37, p38, p39);
        max = ldf max in base;
        r202 = dyn max(r201);
        goto L0(r202);
      L2():
        r195 = dyn base31(<lang vapply(x, NROW, integer(1.0))>);
        goto L0(r195);
      };
      r204 = dyn _set_row_names(p40);
      return r204;
    };
    r206 = dyn ____(p36, p41);
    check L297() else D102();
  D99():
    deopt 367 [r187];
  D102():
    deopt 379 [r206];
  L290():
    l4 = ld x;
    c122 = `is.object`(l4);
    if c122 then L291() else L292(r187, l4);
  L297():
    l7 = ld x;
    attr__ = ldf `attr<-`;
    check L298() else D103();
  D103():
    deopt 381 [r206, l7, r206];
  L69(r191, dx11):
    st x = dx11;
    goto L70();
  L291():
    dr10 = tryDispatchBuiltin.0("[<-", l4, r187);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L293() else L292(r187, dr10);
  L292(r189, l6):
    isM6 = ld isM;
    check L294() else D100();
  L298():
    r207 = dyn attr__(l7, NULL, "row.names", r206);
    check L299() else D104();
  D100():
    deopt 369 [r189, l6, r187, isM6];
  D104():
    deopt 384 [r206, r207];
  L293():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L69(r187, dx10);
  L294():
    isM7 = force? isM6;
    ___1 = ldf `[<-` in base;
    r192 = dyn ___1(l6, r187, isM7);
    goto L69(r189, r192);
  L299():
    st x = r207;
    x18 = ld x;
    check L300() else D105();
  D105():
    deopt 386 [x18];
  L300():
    x19 = force? x18;
    checkMissing(x19);
    popenv;
    return x19;
  }
}
fun inner1942959787(o) {
  (reg o:*) -+> V { var o:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg o1:*, reg o2:V, reg is_matrix:cls, reg r2:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c5:L, reg r4:V, reg o3:*, reg o4:V, reg inherits:cls, reg r5:V, reg r6:V, reg c6:L, reg c7:V |
    mkenv;
    st o = o;
    sym = ldf `is.matrix`;
    base = ldf `is.matrix` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    c = `as.logical`(r1);
    if c then L7() else L1(c);
  L3():
    o1 = ld o;
    check L5() else D0();
  L4():
    r = dyn base(<sym o>);
    goto L0(r);
  D0():
    deopt 2 [o1];
  L1(c2):
    popenv;
    return c2;
  L5():
    o2 = force? o1;
    checkMissing(o2);
    is_matrix = ldf `is.matrix` in base;
    r2 = dyn is_matrix(o2);
    check L6() else D1();
  L7():
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  D1():
    deopt 5 [r2];
  L2(c5, r4):
    r6 = `!`(r4);
    c6 = `as.logical`(r6);
    c7 = `&&`(c5, c6);
    goto L1(c7);
  L6():
    goto L0(r2);
  L8():
    o3 = ld o;
    check L10() else D2();
  L9():
    r3 = dyn base1(<sym o>, "AsIs");
    goto L2(c, r3);
  D2():
    deopt 8 [c, o3];
  L10():
    o4 = force? o3;
    checkMissing(o4);
    inherits = ldf inherits in base;
    r5 = dyn inherits(o4, "AsIs", FALSE);
    check L11() else D3();
  D3():
    deopt 13 [c, r5];
  L11():
    goto L2(c, r5);
  }
}
fun inner3002224933(i) {
  (reg i:*) -+> V { var i:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x:*, reg x1:V, reg c:L, reg x3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i1:*, reg i2:V, reg __:cls, reg r2:V, reg is_list:cls, reg r3:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg x4:*, reg x5:V, reg c2:L, reg x7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i3:*, reg i4:V, reg __1:cls, reg r6:V, reg names:cls, reg r7:V, reg nms_x:*, reg nms_x1:V, reg c3:L, reg nms_x3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg i5:*, reg i6:V, reg __2:cls, reg r8:V |
    mkenv;
    st i = i;
    sym = ldf `is.list`;
    base = ldf `is.list` in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L14() else L2();
  L6():
    x = ld x;
    check L8() else D0();
  L7():
    r = dyn base(<lang `[[`(x, i)>);
    goto L0(r);
  D0():
    deopt 2 [x];
  L2():
    nms_x = ld `nms.x`;
    check L24() else D6();
  L8():
    x1 = force? x;
    checkMissing(x1);
    c = `is.object`(x1);
    if c then L9() else L10(x1);
  L14():
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  D6():
    deopt 18 [nms_x];
  L1(dx1):
    is_list = ldf `is.list` in base;
    r3 = dyn is_list(dx1);
    check L13() else D2();
  L3(r5):
    popenv;
    return r5;
  L9():
    dr = tryDispatchBuiltin.1("[[", x1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L11() else L10(dr);
  L10(x3):
    i1 = ld i;
    check L12() else D1();
  L15():
    x4 = ld x;
    check L17() else D3();
  L16():
    r4 = dyn base1(<lang `[[`(x, i)>);
    goto L3(r4);
  L24():
    nms_x1 = force? nms_x;
    checkMissing(nms_x1);
    c3 = `is.object`(nms_x1);
    if c3 then L25() else L26(nms_x1);
  D1():
    deopt 4 [x3, i1];
  D2():
    deopt 8 [r3];
  D3():
    deopt 11 [x4];
  L5(dx5):
    popenv;
    return dx5;
  L11():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L12():
    i2 = force? i1;
    __ = ldf `[[` in base;
    r2 = dyn __(x3, i2);
    goto L1(r2);
  L13():
    goto L0(r3);
  L17():
    x5 = force? x4;
    checkMissing(x5);
    c2 = `is.object`(x5);
    if c2 then L18() else L19(x5);
  L25():
    dr4 = tryDispatchBuiltin.1("[[", nms_x1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L27() else L26(dr4);
  L26(nms_x3):
    i5 = ld i;
    check L28() else D7();
  D7():
    deopt 20 [nms_x3, i5];
  L4(dx3):
    names = ldf names in base;
    r7 = dyn names(dx3);
    check L22() else D5();
  L18():
    dr2 = tryDispatchBuiltin.1("[[", x5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L20() else L19(dr2);
  L19(x7):
    i3 = ld i;
    check L21() else D4();
  L27():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L5(dx4);
  L28():
    i6 = force? i5;
    __2 = ldf `[[` in base;
    r8 = dyn __2(nms_x3, i6);
    goto L5(r8);
  D4():
    deopt 13 [x7, i3];
  D5():
    deopt 17 [r7];
  L20():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx2);
  L21():
    i4 = force? i3;
    __1 = ldf `[[` in base;
    r6 = dyn __1(x7, i4);
    goto L4(r6);
  L22():
    goto L3(r7);
  }
}