fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1931610611;
    st `make.tables.aovprojlist` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1931610611(`proj.cols`, `strata.cols`, `model.cols`, projections, model, eff, fun, prt, `...`) {
  (reg proj_cols:*, reg strata_cols:*, reg model_cols:*, reg projections:*, reg model:*, reg eff:*, reg fun:*, reg prt:*, reg ddd:dots) -+> V { var `proj.cols`:*, var `strata.cols`:*, var `model.cols`:*, var projections:*, var model:*, var eff:*, var fun:*, reg fun_isMissing:L, reg fun_orDefault:*, var prt:*, reg prt_isMissing:L, reg prt_orDefault:*, var `...`:dots?, reg setNames:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg proj_cols1:*, reg proj_cols2:V, reg length:cls, reg r4:V, reg vector:cls, reg r5:V, reg p:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg proj_cols3:*, reg proj_cols4:V, reg names:cls, reg r9:V, reg p1:p(V +), reg r11:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg missing:cls, reg r14:V, reg r15:V, reg c:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r16:V, reg r17:V, reg tables:*, reg tables1:V, reg r18:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg proj_cols5:*, reg proj_cols6:V, reg c2:L, reg i6:I, reg proj_cols8:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg i9:*, reg i10:V, reg __:cls, reg r19:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r20:V, reg i13:I, reg r21:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r22:V, reg i16:I, reg r23:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r24:V, reg i19:I, reg r25:V, reg terms:*, reg terms1:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r26:V, reg i22:I, reg r27:V, reg eff1:*, reg eff2:V, reg names1:cls, reg r28:V, reg match:cls, reg r29:V, reg is_na:cls, reg r30:V, reg all:cls, reg r31:V, reg c3:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r32:V, reg i27:I, reg r33:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r34:V, reg i30:I, reg r35:V, reg terms2:*, reg terms3:V, reg length1:cls, reg r36:V, reg rep_int:cls, reg r37:V, reg i31:I, reg sym11:cls, reg base11:cls, reg guard11:L, reg r39:V, reg i34:I, reg r40:V, reg terms4:*, reg terms5:V, reg length2:cls, reg r41:V, reg r42:V, reg c4:L, reg projections1:*, reg projections2:V, reg c5:L, reg i38:I, reg projections4:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i40:I, reg dx3:V, reg strata_cols1:*, reg strata_cols2:V, reg c6:L, reg i42:I, reg projections6:V, reg strata_cols4:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i44:I, reg projections8:V, reg dx5:V, reg i45:*, reg i46:V, reg __1:cls, reg r43:V, reg __2:cls, reg r44:V, reg c7:L, reg i48:I, reg dx7:V, reg dr6:V, reg dc3:L, reg dx8:V, reg i50:I, reg dx9:V, reg terms6:*, reg terms7:V, reg __3:cls, reg r45:V, reg eff3:*, reg eff4:V, reg c8:L, reg i52:I, reg dx11:V, reg eff6:V, reg dr8:V, reg dc4:L, reg dx13:V, reg i54:I, reg dx14:V, reg dx15:V, reg eff_i:*, reg eff_i1:V, reg __4:cls, reg r46:V, reg r47:V, reg i55:I, reg sym12:cls, reg base12:cls, reg guard12:L, reg r49:V, reg i58:I, reg r50:V, reg unique:cls, reg strata_cols5:*, reg strata_cols6:V, reg c9:L, reg strata_cols8:V, reg dr10:V, reg dc5:L, reg dx16:V, reg dx17:V, reg terms8:*, reg terms9:V, reg __5:cls, reg r51:V, reg p2:p(V +), reg r53:V, reg length3:cls, reg r54:V, reg r55:V, reg c10:L, reg projections9:*, reg projections10:V, reg c11:L, reg i62:I, reg projections12:V, reg dr12:V, reg dc6:L, reg dx18:V, reg i64:I, reg dx19:V, reg strata:*, reg strata1:V, reg __6:cls, reg r56:V, reg c12:L, reg i66:I, reg dx21:V, reg dr14:V, reg dc7:L, reg dx22:V, reg i68:I, reg dx23:V, reg terms10:*, reg terms11:V, reg __7:cls, reg r57:V, reg as_matrix:cls, reg eff7:*, reg eff8:V, reg c13:L, reg r59:R, reg eff10:V, reg dr16:V, reg dc8:L, reg dx24:V, reg r61:R, reg dx25:V, reg eff_i2:*, reg eff_i3:V, reg __8:cls, reg r62:V, reg r63:V, reg p3:p(V +), reg r65:V, reg ___:cls, reg r66:V, reg strata2:*, reg strata3:V, reg s1:V, reg l1:I, reg i69:I, reg i70:I, reg i71:I, reg i72:I, reg c14:L, reg x1:V, reg cbind:cls, reg mat:*, reg mat1:V, reg p4:p(V +), reg projections13:*, reg projections14:V, reg c15:L, reg projections16:V, reg dr18:V, reg dc9:L, reg dx26:V, reg dx27:V, reg j:*, reg j1:V, reg __9:cls, reg r68:V, reg c16:L, reg dx29:V, reg dr20:V, reg dc10:L, reg dx30:V, reg dx31:V, reg terms12:*, reg terms13:V, reg c17:L, reg dx33:V, reg terms15:V, reg dr22:V, reg dc11:L, reg dx35:V, reg dx37:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r69:V, reg dx40:V, reg terms18:V, reg r70:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r71:V, reg dx43:V, reg terms21:V, reg r72:V, reg terms22:*, reg terms23:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r73:V, reg dx46:V, reg terms26:V, reg r74:V, reg strata_cols9:*, reg strata_cols10:V, reg names2:cls, reg r75:V, reg c18:L, reg dx48:V, reg terms28:V, reg r77:V, reg dr24:V, reg dc12:L, reg dx50:V, reg dx51:V, reg terms30:V, reg dx52:V, reg strata_cols11:*, reg strata_cols12:V, reg j2:*, reg j3:V, reg r78:V, reg __10:cls, reg r79:V, reg match1:cls, reg r80:V, reg is_na1:cls, reg r81:V, reg r82:V, reg __11:cls, reg r83:V, reg __12:cls, reg r84:V, reg p5:p(V +), reg r86:V, reg mat2:*, reg mat3:V, reg as_matrix1:cls, reg eff11:*, reg eff12:V, reg c19:L, reg r88:R, reg eff14:V, reg dr26:V, reg dc13:L, reg dx53:V, reg r90:R, reg dx54:V, reg eff_i4:*, reg eff_i5:V, reg __13:cls, reg r91:V, reg r92:V, reg p6:p(V +), reg r94:V, reg ___1:cls, reg r95:V, reg tapply:cls, reg data:*, reg data1:V, reg p7:p(V +), reg model1:*, reg model2:V, reg c20:L, reg model4:V, reg dr28:V, reg dc14:L, reg dx55:V, reg dx56:V, reg model_cols1:*, reg model_cols2:V, reg c21:L, reg model6:V, reg model_cols4:V, reg dr30:V, reg dc15:L, reg dx57:V, reg model8:V, reg dx58:V, reg i77:*, reg i78:V, reg __14:cls, reg r97:V, reg __15:cls, reg r98:V, reg p8:p(V +), reg get:cls, reg fun1:*, reg fun2:V, reg p9:p(V +), reg r101:V, reg p10:p(V +), reg r103:V, reg l2:*, reg c22:L, reg i80:I, reg r105:V, reg l4:*, reg dr32:V, reg dc16:L, reg dx59:V, reg i82:I, reg dx60:V, reg i83:*, reg i84:V, reg ____:cls, reg r108:V, reg strata_cols13:*, reg strata_cols14:V, reg c23:L, reg i86:I, reg strata_cols16:V, reg dr34:V, reg dc17:L, reg dx61:V, reg i88:I, reg dx62:V, reg i89:*, reg i90:V, reg __16:cls, reg r109:V, reg l5:*, reg c24:L, reg i92:I, reg dx65:V, reg l8:*, reg dx66:V, reg l9:*, reg dr36:V, reg dc18:L, reg dx69:V, reg i94:I, reg dx70:V, reg l11:*, reg dx71:V, reg dx72:V, reg i95:*, reg i96:V, reg __17:cls, reg r110:V, reg attr__:cls, reg r111:V, reg c25:L, reg i98:I, reg dx74:V, reg l13:*, reg dr38:V, reg dc19:L, reg dx76:V, reg i100:I, reg dx78:V, reg i101:*, reg i102:V, reg ____1:cls, reg r112:V, reg l14:*, reg c26:L, reg i104:I, reg r115:S, reg l17:*, reg r116:S, reg l18:*, reg dr40:V, reg dc20:L, reg dx79:V, reg i106:I, reg r119:S, reg l20:*, reg r120:S, reg dx80:V, reg i107:*, reg i108:V, reg __18:cls, reg r121:V, reg class__:cls, reg r122:V, reg c27:L, reg i110:I, reg r124:S, reg l22:*, reg dr42:V, reg dc21:L, reg dx81:V, reg i112:I, reg dx82:V, reg i113:*, reg i114:V, reg ____2:cls, reg r127:V, reg prt1:*, reg prt2:V, reg c28:L, reg print:cls, reg tables2:*, reg tables3:V, reg c29:L, reg tables5:V, reg dr44:V, reg dc22:L, reg dx83:V, reg dx84:V, reg i117:*, reg i118:V, reg __19:cls, reg r128:V, reg p11:p(V +), reg ddd1:dots?, reg r130:V, reg i119:I, reg sym16:cls, reg base16:cls, reg guard16:L, reg r132:V, reg r133:V, reg tables6:*, reg tables7:V, reg r134:I, reg s2:V, reg l23:I, reg i121:I, reg i122:I, reg i123:I, reg c30:L, reg x2:V, reg proj_cols9:*, reg proj_cols10:V, reg c31:L, reg i127:I, reg proj_cols12:V, reg dr46:V, reg dc23:L, reg dx85:V, reg i129:I, reg dx86:V, reg i130:*, reg i131:V, reg __20:cls, reg r135:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r136:V, reg i134:I, reg r137:V, reg terms31:*, reg terms32:V, reg length4:cls, reg r138:V, reg r139:V, reg c32:L, reg projections17:*, reg projections18:V, reg c33:L, reg i138:I, reg projections20:V, reg dr48:V, reg dc24:L, reg dx87:V, reg i140:I, reg dx88:V, reg strata_cols17:*, reg strata_cols18:V, reg c34:L, reg i142:I, reg projections22:V, reg strata_cols20:V, reg dr50:V, reg dc25:L, reg dx89:V, reg i144:I, reg projections24:V, reg dx90:V, reg i145:*, reg i146:V, reg __21:cls, reg r140:V, reg __22:cls, reg r141:V, reg c35:L, reg i148:I, reg dx92:V, reg dr52:V, reg dc26:L, reg dx93:V, reg i150:I, reg dx94:V, reg terms33:*, reg terms34:V, reg __23:cls, reg r142:V, reg i151:I, reg sym18:cls, reg base18:cls, reg guard18:L, reg r143:V, reg i154:I, reg r144:V, reg unique1:cls, reg strata_cols21:*, reg strata_cols22:V, reg c36:L, reg strata_cols24:V, reg dr54:V, reg dc27:L, reg dx96:V, reg dx97:V, reg terms35:*, reg terms36:V, reg __24:cls, reg r145:V, reg p12:p(V +), reg r147:V, reg length5:cls, reg r148:V, reg r149:V, reg c37:L, reg projections25:*, reg projections26:V, reg c38:L, reg i158:I, reg projections28:V, reg dr56:V, reg dc28:L, reg dx98:V, reg i160:I, reg dx99:V, reg strata4:*, reg strata5:V, reg __25:cls, reg r150:V, reg c39:L, reg i162:I, reg dx101:V, reg dr58:V, reg dc29:L, reg dx102:V, reg i164:I, reg dx103:V, reg terms37:*, reg terms38:V, reg __26:cls, reg r151:V, reg as_matrix2:cls, reg sym19:cls, reg base19:cls, reg guard19:L, reg r152:V, reg r153:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r154:V, reg r155:V, reg terms39:*, reg terms40:V, reg length6:cls, reg r156:V, reg rep_int1:cls, reg r157:V, reg p13:p(V +), reg r159:V, reg ___2:cls, reg r160:V, reg strata6:*, reg strata7:V, reg s3:V, reg l24:I, reg i165:I, reg i166:I, reg i167:I, reg i168:I, reg c40:L, reg x3:V, reg cbind1:cls, reg mat4:*, reg mat5:V, reg p14:p(V +), reg projections29:*, reg projections30:V, reg c41:L, reg projections32:V, reg dr60:V, reg dc30:L, reg dx104:V, reg dx105:V, reg j4:*, reg j5:V, reg __27:cls, reg r162:V, reg c42:L, reg dx107:V, reg dr62:V, reg dc31:L, reg dx108:V, reg dx109:V, reg terms41:*, reg terms42:V, reg c43:L, reg dx111:V, reg terms44:V, reg dr64:V, reg dc32:L, reg dx113:V, reg dx115:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r163:V, reg dx118:V, reg terms47:V, reg r164:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r165:V, reg dx121:V, reg terms50:V, reg r166:V, reg terms51:*, reg terms52:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r167:V, reg dx124:V, reg terms55:V, reg r168:V, reg strata_cols25:*, reg strata_cols26:V, reg names3:cls, reg r169:V, reg c44:L, reg dx126:V, reg terms57:V, reg r171:V, reg dr66:V, reg dc33:L, reg dx128:V, reg dx129:V, reg terms59:V, reg dx130:V, reg strata_cols27:*, reg strata_cols28:V, reg j6:*, reg j7:V, reg r172:V, reg __28:cls, reg r173:V, reg match2:cls, reg r174:V, reg is_na2:cls, reg r175:V, reg r176:V, reg __29:cls, reg r177:V, reg __30:cls, reg r178:V, reg p15:p(V +), reg r180:V, reg mat6:*, reg mat7:V, reg as_matrix3:cls, reg sym24:cls, reg base24:cls, reg guard24:L, reg r181:V, reg r182:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r183:V, reg r184:V, reg terms60:*, reg terms61:V, reg length7:cls, reg r185:V, reg rep_int2:cls, reg r186:V, reg p16:p(V +), reg r188:V, reg ___3:cls, reg r189:V, reg tapply1:cls, reg data2:*, reg data3:V, reg p17:p(V +), reg model9:*, reg model10:V, reg c45:L, reg model12:V, reg dr68:V, reg dc34:L, reg dx131:V, reg dx132:V, reg model_cols5:*, reg model_cols6:V, reg c46:L, reg model14:V, reg model_cols8:V, reg dr70:V, reg dc35:L, reg dx133:V, reg model16:V, reg dx134:V, reg i173:*, reg i174:V, reg __31:cls, reg r191:V, reg __32:cls, reg r192:V, reg p18:p(V +), reg get1:cls, reg fun3:*, reg fun4:V, reg p19:p(V +), reg r195:V, reg p20:p(V +), reg r197:V, reg l25:*, reg c47:L, reg i176:I, reg r199:V, reg l27:*, reg dr72:V, reg dc36:L, reg dx135:V, reg i178:I, reg dx136:V, reg i179:*, reg i180:V, reg ____3:cls, reg r202:V, reg strata_cols29:*, reg strata_cols30:V, reg c48:L, reg i182:I, reg strata_cols32:V, reg dr74:V, reg dc37:L, reg dx137:V, reg i184:I, reg dx138:V, reg i185:*, reg i186:V, reg __33:cls, reg r203:V, reg l28:*, reg c49:L, reg i188:I, reg dx141:V, reg l31:*, reg dx142:V, reg l32:*, reg dr76:V, reg dc38:L, reg dx145:V, reg i190:I, reg dx146:V, reg l34:*, reg dx147:V, reg dx148:V, reg i191:*, reg i192:V, reg __34:cls, reg r204:V, reg attr__1:cls, reg r205:V, reg c50:L, reg i194:I, reg dx150:V, reg l36:*, reg dr78:V, reg dc39:L, reg dx152:V, reg i196:I, reg dx154:V, reg i197:*, reg i198:V, reg ____4:cls, reg r206:V, reg l37:*, reg c51:L, reg i200:I, reg r209:S, reg l40:*, reg r210:S, reg l41:*, reg dr80:V, reg dc40:L, reg dx155:V, reg i202:I, reg r213:S, reg l43:*, reg r214:S, reg dx156:V, reg i203:*, reg i204:V, reg __35:cls, reg r215:V, reg class__1:cls, reg r216:V, reg c52:L, reg i206:I, reg r218:S, reg l45:*, reg dr82:V, reg dc41:L, reg dx157:V, reg i208:I, reg dx158:V, reg i209:*, reg i210:V, reg ____5:cls, reg r221:V, reg prt3:*, reg prt4:V, reg c53:L, reg print1:cls, reg tables8:*, reg tables9:V, reg c54:L, reg tables11:V, reg dr84:V, reg dc42:L, reg dx159:V, reg dx160:V, reg i213:*, reg i214:V, reg __36:cls, reg r222:V, reg p21:p(V +), reg ddd2:dots?, reg r224:V, reg i215:I, reg tables12:*, reg tables13:V |
    mkenv;
    st `proj.cols` = proj_cols;
    st `strata.cols` = strata_cols;
    st `model.cols` = model_cols;
    st projections = projections;
    st model = model;
    st eff = eff;
    fun_isMissing = missing.0(fun);
    if fun_isMissing then L0("mean") else L0(fun);
  L0(fun_orDefault):
    st fun = fun_orDefault;
    prt_isMissing = missing.0(prt);
    if prt_isMissing then L1(FALSE) else L1(prt);
  L1(prt_orDefault):
    st prt = prt_orDefault;
    st `...` = ddd;
    setNames = ldf setNames;
    check L62() else D0();
  D0():
    deopt 1 [];
  L62():
    p = prom<V +>{
      sym = ldf vector;
      base = ldf vector in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r1):
      return r1;
    L2():
      sym1 = ldf length;
      base1 = ldf length in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L4() else L5();
    L3():
      r = dyn base("list", <lang length(proj.cols)>);
      goto L0(r);
    L1(r3):
      vector = ldf vector in base;
      r5 = dyn vector("list", r3);
      goto L0(r5);
    L4():
      proj_cols1 = ld `proj.cols`;
      proj_cols2 = force? proj_cols1;
      checkMissing(proj_cols2);
      length = ldf length in base;
      r4 = dyn length(proj_cols2);
      goto L1(r4);
    L5():
      r2 = dyn base1(<sym proj.cols>);
      goto L1(r2);
    };
    p1 = prom<V +>{
      sym2 = ldf names;
      base2 = ldf names in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r8):
      return r8;
    L1():
      proj_cols3 = ld `proj.cols`;
      proj_cols4 = force? proj_cols3;
      checkMissing(proj_cols4);
      names = ldf names in base;
      r9 = dyn names(proj_cols4);
      goto L0(r9);
    L2():
      r7 = dyn base2(<sym proj.cols>);
      goto L0(r7);
    };
    r11 = dyn setNames(p, p1);
    check L63() else D1();
  D1():
    deopt 4 [r11];
  L63():
    st tables = r11;
    sym3 = ldf missing;
    base3 = ldf missing in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L64() else L65();
  L2(r13):
    r15 = `!`(r13);
    c = `as.logical`(r15);
    if c then L66() else L3();
  L64():
    missing = ldf missing in base;
    r14 = dyn missing(<sym eff>);
    goto L2(r14);
  L65():
    r12 = dyn base3(<sym eff>);
    goto L2(r12);
  L3():
    sym16 = ldf seq_along;
    base16 = ldf seq_along in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L187() else L188();
  L37():
    tables12 = ld tables;
    check L278() else D95();
  L66():
    sym4 = ldf seq_along;
    base4 = ldf seq_along in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L67() else L68();
  D95():
    deopt 340 [tables12];
  L4(r17):
    s = toForSeq(r17);
    l = length(s);
    i = 0;
    goto L5(i);
  L38(r133):
    s2 = toForSeq(r133);
    l23 = length(s2);
    i121 = 0;
    goto L39(i121);
  L67():
    tables = ld tables;
    check L69() else D2();
  L68():
    r16 = dyn base4(<sym tables>);
    goto L4(r16);
  L187():
    tables6 = ld tables;
    check L189() else D54();
  L188():
    r132 = dyn base16(<sym tables>);
    goto L38(r132);
  L278():
    tables13 = force? tables12;
    checkMissing(tables13);
    popenv;
    return tables13;
  D2():
    deopt 11 [tables];
  D54():
    deopt 197 [tables6];
  L5(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L70() else L36();
  L39(i122):
    i123 = `+`.1(i122, 1);
    c30 = `<`.1(l23, i123);
    if c30 then L190() else L61();
  L69():
    tables1 = force? tables;
    checkMissing(tables1);
    r18 = seq_along(tables1);
    goto L4(r18);
  L189():
    tables7 = force? tables6;
    checkMissing(tables7);
    r134 = seq_along(tables7);
    goto L38(r134);
  L36():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    proj_cols5 = ld `proj.cols`;
    check L71() else D3();
  L61():
    x2 = `[[`(s2, i123, NULL, TRUE);
    st i = x2;
    proj_cols9 = ld `proj.cols`;
    check L191() else D55();
  L70():
    goto L37();
  L190():
    goto L37();
  D3():
    deopt 14 [i2, proj_cols5];
  D55():
    deopt 200 [i123, proj_cols9];
  L71():
    proj_cols6 = force? proj_cols5;
    checkMissing(proj_cols6);
    c2 = `is.object`(proj_cols6);
    if c2 then L72() else L73(i2, proj_cols6);
  L191():
    proj_cols10 = force? proj_cols9;
    checkMissing(proj_cols10);
    c31 = `is.object`(proj_cols10);
    if c31 then L192() else L193(i123, proj_cols10);
  L6(i8, dx1):
    st terms = dx1;
    sym5 = ldf all;
    base5 = ldf all in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L76() else L77();
  L40(i129, dx86):
    st terms = dx86;
    sym17 = ldf length;
    base17 = ldf length in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L196() else L197();
  L72():
    dr = tryDispatchBuiltin.1("[[", proj_cols6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L74() else L73(i2, dr);
  L73(i6, proj_cols8):
    i9 = ld i;
    check L75() else D4();
  L192():
    dr46 = tryDispatchBuiltin.1("[[", proj_cols10);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L194() else L193(i123, dr46);
  L193(i127, proj_cols12):
    i130 = ld i;
    check L195() else D56();
  D4():
    deopt 16 [i6, proj_cols8, i9];
  D56():
    deopt 202 [i127, proj_cols12, i130];
  L7(i13, r21):
    c3 = `as.logical`(r21);
    if c3 then L90() else L11();
  L41(i134, r137):
    r139 = `==`(r137, 1);
    c32 = `as.logical`(r139);
    if c32 then L200() else L42();
  L74():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(i2, dx);
  L75():
    i10 = force? i9;
    __ = ldf `[[` in base;
    r19 = dyn __(proj_cols8, i10);
    goto L6(i6, r19);
  L76():
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L78() else L79();
  L77():
    r20 = dyn base5(<lang is.na(`<-`(eff.i, match(terms, names(eff))))>);
    goto L7(i8, r20);
  L194():
    dx85 = getTryDispatchBuiltinValue(dr46);
    goto L40(i123, dx85);
  L195():
    i131 = force? i130;
    __20 = ldf `[[` in base;
    r135 = dyn __20(proj_cols12, i131);
    goto L40(i127, r135);
  L196():
    terms31 = ld terms;
    check L198() else D57();
  L197():
    r136 = dyn base17(<sym terms>);
    goto L41(i129, r136);
  D57():
    deopt 208 [i129, terms31];
  L8(i16, r23):
    all = ldf all in base;
    r31 = dyn all(r23);
    check L89() else D10();
  L11():
    goto L14(i13);
  L14(i31):
    sym11 = ldf length;
    base11 = ldf length in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L99() else L100();
  L42():
    sym18 = ldf length;
    base18 = ldf length in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L215() else L216();
  L46(i151):
    tapply1 = ldf tapply;
    check L242() else D79();
  L78():
    sym7 = ldf match;
    base7 = ldf match in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L80() else L81();
  L79():
    r22 = dyn base6(<lang `<-`(eff.i, match(terms, names(eff)))>);
    goto L8(i8, r22);
  L90():
    sym9 = ldf `rep.int`;
    base9 = ldf `rep.int` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L91() else L92();
  L198():
    terms32 = force? terms31;
    checkMissing(terms32);
    length4 = ldf length in base;
    r138 = dyn length4(terms32);
    check L199() else D58();
  L200():
    projections17 = ld projections;
    check L201() else D59();
  D10():
    deopt 42 [i16, r31];
  D58():
    deopt 211 [i129, r138];
  D59():
    deopt 214 [i134, projections17];
  D79():
    deopt 282 [i151];
  L9(i19, r25):
    st `eff.i` = r25;
    is_na = ldf `is.na` in base;
    r30 = dyn is_na(r25);
    check L88() else D9();
  L12(i27, r33):
    st `eff.i` = r33;
    goto L14(i27);
  L15(i34, r40):
    r42 = `==`(r40, 1);
    c4 = `as.logical`(r42);
    if c4 then L103() else L16();
  L47(i154, r144):
    r149 = `==`(r144, 1);
    c37 = `as.logical`(r149);
    if c37 then L220() else L48();
  L80():
    terms = ld terms;
    check L82() else D5();
  L81():
    r24 = dyn base7(<sym terms>, <lang names(eff)>);
    goto L9(i8, r24);
  L89():
    goto L7(i16, r31);
  L91():
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L93() else L94();
  L92():
    r32 = dyn base9(1.0, <lang length(terms)>);
    goto L12(i13, r32);
  L99():
    terms4 = ld terms;
    check L101() else D14();
  L100():
    r39 = dyn base11(<sym terms>);
    goto L15(i31, r39);
  L199():
    goto L41(i129, r138);
  L201():
    projections18 = force? projections17;
    checkMissing(projections18);
    c33 = `is.object`(projections18);
    if c33 then L202() else L203(i134, projections18);
  L215():
    unique1 = ldf unique;
    check L217() else D63();
  L216():
    r143 = dyn base18(<lang `<-`(strata, unique(`[`(strata.cols, terms)))>);
    goto L47(i134, r143);
  L242():
    p17 = prom<V +>{
      data2 = ld data;
      data3 = force? data2;
      checkMissing(data3);
      return data3;
    };
    p18 = prom<V +>{
      model9 = ld model;
      model10 = force? model9;
      checkMissing(model10);
      c45 = `is.object`(model10);
      if c45 then L2() else L3(model10);
    L0(dx132):
      return dx132;
    L2():
      dr68 = tryDispatchBuiltin.1("[", model10);
      dc34 = getTryDispatchBuiltinDispatched(dr68);
      if dc34 then L4() else L3(dr68);
    L3(model12):
      model_cols5 = ld `model.cols`;
      model_cols6 = force? model_cols5;
      checkMissing(model_cols6);
      c46 = `is.object`(model_cols6);
      if c46 then L5() else L6(model12, model_cols6);
    L1(model16, dx134):
      __32 = ldf `[` in base;
      r192 = dyn __32(model16, dx134);
      goto L0(r192);
    L4():
      dx131 = getTryDispatchBuiltinValue(dr68);
      goto L0(dx131);
    L5():
      dr70 = tryDispatchBuiltin.1("[[", model_cols6);
      dc35 = getTryDispatchBuiltinDispatched(dr70);
      if dc35 then L7() else L6(model12, dr70);
    L6(model14, model_cols8):
      i173 = ld i;
      i174 = force? i173;
      __31 = ldf `[[` in base;
      r191 = dyn __31(model_cols8, i174);
      goto L1(model14, r191);
    L7():
      dx133 = getTryDispatchBuiltinValue(dr70);
      goto L1(model12, dx133);
    };
    p20 = prom<V +>{
      get1 = ldf get;
      p19 = prom<V +>{
        fun3 = ld fun;
        fun4 = force? fun3;
        checkMissing(fun4);
        return fun4;
      };
      r195 = dyn get1(p19);
      return r195;
    };
    r197 = dyn tapply1(p17, p18, p20);
    check L243() else D80();
  D5():
    deopt 26 [i8, terms];
  D9():
    deopt 40 [i19, r30];
  D14():
    deopt 59 [i31, terms4];
  D63():
    deopt 231 [i134];
  D80():
    deopt 286 [i151, r197];
  L13(i30, r35):
    rep_int = ldf `rep.int` in base;
    r37 = dyn rep_int(1.0, r35);
    check L97() else D13();
  L16():
    sym12 = ldf length;
    base12 = ldf length in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L123() else L124();
  L21(i55):
    tapply = ldf tapply;
    check L150() else D38();
  L43(i140, dx88):
    c35 = `is.object`(dx88);
    if c35 then L210() else L211(i140, dx88);
  L48():
    st mat = NULL;
    strata6 = ld strata;
    check L234() else D72();
  L82():
    terms1 = force? terms;
    checkMissing(terms1);
    sym8 = ldf names;
    base8 = ldf names in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L83() else L84();
  L88():
    goto L8(i19, r30);
  L93():
    terms2 = ld terms;
    check L95() else D11();
  L94():
    r34 = dyn base10(<sym terms>);
    goto L13(i13, r34);
  L101():
    terms5 = force? terms4;
    checkMissing(terms5);
    length2 = ldf length in base;
    r41 = dyn length2(terms5);
    check L102() else D15();
  L103():
    projections1 = ld projections;
    check L104() else D16();
  L202():
    dr48 = tryDispatchBuiltin.1("[[", projections18);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L204() else L203(i134, dr48);
  L203(i138, projections20):
    strata_cols17 = ld `strata.cols`;
    check L205() else D60();
  L217():
    p12 = prom<V +>{
      strata_cols21 = ld `strata.cols`;
      strata_cols22 = force? strata_cols21;
      checkMissing(strata_cols22);
      c36 = `is.object`(strata_cols22);
      if c36 then L1() else L2(strata_cols22);
    L0(dx97):
      return dx97;
    L1():
      dr54 = tryDispatchBuiltin.1("[", strata_cols22);
      dc27 = getTryDispatchBuiltinDispatched(dr54);
      if dc27 then L3() else L2(dr54);
    L2(strata_cols24):
      terms35 = ld terms;
      terms36 = force? terms35;
      __24 = ldf `[` in base;
      r145 = dyn __24(strata_cols24, terms36);
      goto L0(r145);
    L3():
      dx96 = getTryDispatchBuiltinValue(dr54);
      goto L0(dx96);
    };
    r147 = dyn unique1(p12);
    check L218() else D64();
  L220():
    projections25 = ld projections;
    check L221() else D66();
  L243():
    l25 = ld tables;
    c47 = `is.object`(l25);
    if c47 then L244() else L245(i151, r197, l25);
  D11():
    deopt 48 [i13, terms2];
  D13():
    deopt 53 [i30, r37];
  D15():
    deopt 62 [i31, r41];
  D16():
    deopt 65 [i34, projections1];
  D38():
    deopt 138 [i55];
  D60():
    deopt 216 [i138, projections20, strata_cols17];
  D64():
    deopt 233 [i134, r147];
  D66():
    deopt 240 [i154, projections25];
  D72():
    deopt 260 [i154, strata6];
  L10(i22, r27):
    match = ldf match in base;
    r29 = dyn match(terms1, r27, NA_INT, NULL);
    check L87() else D8();
  L22(i58, r50):
    r55 = `==`(r50, 1);
    c10 = `as.logical`(r55);
    if c10 then L128() else L23();
  L45(i150, dx94):
    st data = dx94;
    goto L46(i150);
  L53(i178, dx136):
    st tables = dx136;
    strata_cols29 = ld `strata.cols`;
    check L248() else D82();
  L83():
    eff1 = ld eff;
    check L85() else D6();
  L84():
    r26 = dyn base8(<sym eff>);
    goto L10(i8, r26);
  L95():
    terms3 = force? terms2;
    checkMissing(terms3);
    length1 = ldf length in base;
    r36 = dyn length1(terms3);
    check L96() else D12();
  L97():
    goto L12(i30, r37);
  L102():
    goto L15(i31, r41);
  L104():
    projections2 = force? projections1;
    checkMissing(projections2);
    c5 = `is.object`(projections2);
    if c5 then L105() else L106(i34, projections2);
  L123():
    unique = ldf unique;
    check L125() else D22();
  L124():
    r49 = dyn base12(<lang `<-`(strata, unique(`[`(strata.cols, terms)))>);
    goto L22(i34, r49);
  L150():
    p7 = prom<V +>{
      data = ld data;
      data1 = force? data;
      checkMissing(data1);
      return data1;
    };
    p8 = prom<V +>{
      model1 = ld model;
      model2 = force? model1;
      checkMissing(model2);
      c20 = `is.object`(model2);
      if c20 then L2() else L3(model2);
    L0(dx56):
      return dx56;
    L2():
      dr28 = tryDispatchBuiltin.1("[", model2);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L4() else L3(dr28);
    L3(model4):
      model_cols1 = ld `model.cols`;
      model_cols2 = force? model_cols1;
      checkMissing(model_cols2);
      c21 = `is.object`(model_cols2);
      if c21 then L5() else L6(model4, model_cols2);
    L1(model8, dx58):
      __15 = ldf `[` in base;
      r98 = dyn __15(model8, dx58);
      goto L0(r98);
    L4():
      dx55 = getTryDispatchBuiltinValue(dr28);
      goto L0(dx55);
    L5():
      dr30 = tryDispatchBuiltin.1("[[", model_cols2);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L7() else L6(model4, dr30);
    L6(model6, model_cols4):
      i77 = ld i;
      i78 = force? i77;
      __14 = ldf `[[` in base;
      r97 = dyn __14(model_cols4, i78);
      goto L1(model6, r97);
    L7():
      dx57 = getTryDispatchBuiltinValue(dr30);
      goto L1(model4, dx57);
    };
    p10 = prom<V +>{
      get = ldf get;
      p9 = prom<V +>{
        fun1 = ld fun;
        fun2 = force? fun1;
        checkMissing(fun2);
        return fun2;
      };
      r101 = dyn get[, mode](p9, "function");
      return r101;
    };
    r103 = dyn tapply(p7, p8, p10);
    check L151() else D39();
  L204():
    dx87 = getTryDispatchBuiltinValue(dr48);
    goto L43(i134, dx87);
  L205():
    strata_cols18 = force? strata_cols17;
    checkMissing(strata_cols18);
    c34 = `is.object`(strata_cols18);
    if c34 then L206() else L207(i138, projections20, strata_cols18);
  L210():
    dr52 = tryDispatchBuiltin.1("[", dx88);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L212() else L211(i140, dr52);
  L211(i148, dx92):
    terms33 = ld terms;
    check L213() else D62();
  L218():
    st strata = r147;
    length5 = ldf length in base;
    r148 = dyn length5(r147);
    check L219() else D65();
  L221():
    projections26 = force? projections25;
    checkMissing(projections26);
    c38 = `is.object`(projections26);
    if c38 then L222() else L223(i154, projections26);
  L234():
    strata7 = force? strata6;
    checkMissing(strata7);
    s3 = toForSeq(strata7);
    l24 = length(s3);
    i165 = 0;
    goto L51(i154, i165);
  L244():
    dr72 = tryDispatchBuiltin.0("[[<-", l25, r197);
    dc36 = getTryDispatchBuiltinDispatched(dr72);
    if dc36 then L246() else L245(i151, r197, dr72);
  L245(i176, r199, l27):
    i179 = ld i;
    check L247() else D81();
  D6():
    deopt 30 [i8, eff1];
  D8():
    deopt 37 [i22, r29];
  D12():
    deopt 51 [i13, r36];
  D22():
    deopt 87 [i34];
  D39():
    deopt 142 [i55, r103];
  D62():
    deopt 223 [i148, dx92, terms33];
  D65():
    deopt 236 [i134, r148];
  D81():
    deopt 288 [i176, r199, l27, r197, i179];
  D82():
    deopt 292 [i178, strata_cols29];
  L17(i40, dx3):
    c7 = `is.object`(dx3);
    if c7 then L113() else L114(i40, dx3);
  L23():
    st mat = NULL;
    strata2 = ld strata;
    check L142() else D31();
  L44(i144, projections24, dx90):
    __22 = ldf `[[` in base;
    r141 = dyn __22(projections24, dx90);
    goto L43(i144, r141);
  L49(i160, dx99):
    c39 = `is.object`(dx99);
    if c39 then L226() else L227(i160, dx99);
  L51(i166, i167):
    i168 = `+`.1(i167, 1);
    c40 = `<`.1(l24, i168);
    if c40 then L235() else L52();
  L85():
    eff2 = force? eff1;
    checkMissing(eff2);
    names1 = ldf names in base;
    r28 = dyn names1(eff2);
    check L86() else D7();
  L87():
    goto L9(i22, r29);
  L96():
    goto L13(i13, r36);
  L105():
    dr2 = tryDispatchBuiltin.1("[[", projections2);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L107() else L106(i34, dr2);
  L106(i38, projections4):
    strata_cols1 = ld `strata.cols`;
    check L108() else D17();
  L125():
    p2 = prom<V +>{
      strata_cols5 = ld `strata.cols`;
      strata_cols6 = force? strata_cols5;
      checkMissing(strata_cols6);
      c9 = `is.object`(strata_cols6);
      if c9 then L1() else L2(strata_cols6);
    L0(dx17):
      return dx17;
    L1():
      dr10 = tryDispatchBuiltin.1("[", strata_cols6);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(strata_cols8):
      terms8 = ld terms;
      terms9 = force? terms8;
      __5 = ldf `[` in base;
      r51 = dyn __5(strata_cols8, terms9);
      goto L0(r51);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx16);
    };
    r53 = dyn unique(p2);
    check L126() else D23();
  L128():
    projections9 = ld projections;
    check L129() else D25();
  L151():
    l2 = ld tables;
    c22 = `is.object`(l2);
    if c22 then L152() else L153(i55, r103, l2);
  L206():
    dr50 = tryDispatchBuiltin.1("[", strata_cols18);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L208() else L207(i138, projections20, dr50);
  L207(i142, projections22, strata_cols20):
    i145 = ld i;
    check L209() else D61();
  L212():
    dx93 = getTryDispatchBuiltinValue(dr52);
    goto L45(i140, dx93);
  L213():
    terms34 = force? terms33;
    __23 = ldf `[` in base;
    r142 = dyn __23(dx88, <missing>, terms34);
    goto L45(i148, r142);
  L219():
    goto L47(i134, r148);
  L222():
    dr56 = tryDispatchBuiltin.1("[[", projections26);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L224() else L223(i154, dr56);
  L223(i158, projections28):
    strata4 = ld strata;
    check L225() else D67();
  L246():
    dx135 = getTryDispatchBuiltinValue(dr72);
    goto L53(i151, dx135);
  L247():
    i180 = force? i179;
    ____3 = ldf `[[<-` in base;
    r202 = dyn ____3(l27, r197, i180);
    goto L53(i176, r202);
  L248():
    strata_cols30 = force? strata_cols29;
    checkMissing(strata_cols30);
    c48 = `is.object`(strata_cols30);
    if c48 then L249() else L250(i178, strata_cols30);
  D7():
    deopt 33 [i8, r28];
  D17():
    deopt 67 [i38, projections4, strata_cols1];
  D23():
    deopt 89 [i34, r53];
  D25():
    deopt 96 [i58, projections9];
  D31():
    deopt 116 [i58, strata2];
  D61():
    deopt 218 [i142, projections22, strata_cols20, i145];
  D67():
    deopt 242 [i158, projections28, strata4];
  L19(i50, dx9):
    eff3 = ld eff;
    check L117() else D20();
  L28(i82, dx60):
    st tables = dx60;
    strata_cols13 = ld `strata.cols`;
    check L156() else D41();
  L50(i164, dx103):
    as_matrix2 = ldf `as.matrix`;
    check L230() else D69();
  L52():
    x3 = `[[`(s3, i168, NULL, TRUE);
    st j = x3;
    cbind1 = ldf cbind;
    check L236() else D73();
  L54(i184, dx138):
    l28 = ld tables;
    c49 = `is.object`(l28);
    if c49 then L253() else L254(i184, dx138, l28, dx138, l28);
  L86():
    goto L10(i8, r28);
  L107():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L17(i34, dx2);
  L108():
    strata_cols2 = force? strata_cols1;
    checkMissing(strata_cols2);
    c6 = `is.object`(strata_cols2);
    if c6 then L109() else L110(i38, projections4, strata_cols2);
  L113():
    dr6 = tryDispatchBuiltin.1("[", dx3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L115() else L114(i40, dr6);
  L114(i48, dx7):
    terms6 = ld terms;
    check L116() else D19();
  L126():
    st strata = r53;
    length3 = ldf length in base;
    r54 = dyn length3(r53);
    check L127() else D24();
  L129():
    projections10 = force? projections9;
    checkMissing(projections10);
    c11 = `is.object`(projections10);
    if c11 then L130() else L131(i58, projections10);
  L142():
    strata3 = force? strata2;
    checkMissing(strata3);
    s1 = toForSeq(strata3);
    l1 = length(s1);
    i69 = 0;
    goto L26(i58, i69);
  L152():
    dr32 = tryDispatchBuiltin.0("[[<-", l2, r103);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L154() else L153(i55, r103, dr32);
  L153(i80, r105, l4):
    i83 = ld i;
    check L155() else D40();
  L208():
    dx89 = getTryDispatchBuiltinValue(dr50);
    goto L44(i138, projections20, dx89);
  L209():
    i146 = force? i145;
    __21 = ldf `[` in base;
    r140 = dyn __21(strata_cols20, i146);
    goto L44(i142, projections22, r140);
  L224():
    dx98 = getTryDispatchBuiltinValue(dr56);
    goto L49(i154, dx98);
  L225():
    strata5 = force? strata4;
    __25 = ldf `[[` in base;
    r150 = dyn __25(projections28, strata5);
    goto L49(i158, r150);
  L226():
    dr58 = tryDispatchBuiltin.1("[", dx99);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L228() else L227(i160, dr58);
  L227(i162, dx101):
    terms37 = ld terms;
    check L229() else D68();
  L235():
    mat6 = ld mat;
    check L238() else D75();
  L249():
    dr74 = tryDispatchBuiltin.1("[", strata_cols30);
    dc37 = getTryDispatchBuiltinDispatched(dr74);
    if dc37 then L251() else L250(i178, dr74);
  L250(i182, strata_cols32):
    i185 = ld i;
    check L252() else D83();
  D19():
    deopt 74 [i48, dx7, terms6];
  D20():
    deopt 77 [i50, dx9, eff3];
  D24():
    deopt 92 [i34, r54];
  D40():
    deopt 144 [i80, r105, l4, r103, i83];
  D41():
    deopt 148 [i82, strata_cols13];
  D68():
    deopt 246 [i162, dx101, terms37];
  D69():
    deopt 251 [i164];
  D73():
    deopt 263 [i166, i168];
  D75():
    deopt 272 [i166, mat6];
  D83():
    deopt 294 [i182, strata_cols32, i185];
  L18(i44, projections8, dx5):
    __2 = ldf `[[` in base;
    r44 = dyn __2(projections8, dx5);
    goto L17(i44, r44);
  L24(i64, dx19):
    c12 = `is.object`(dx19);
    if c12 then L134() else L135(i64, dx19);
  L26(i70, i71):
    i72 = `+`.1(i71, 1);
    c14 = `<`.1(l1, i72);
    if c14 then L143() else L27();
  L55(i190, dx146, l34, dx147, dx148):
    attr__1 = ldf `attr<-`;
    check L257() else D85();
  L109():
    dr4 = tryDispatchBuiltin.1("[", strata_cols2);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L111() else L110(i38, projections4, dr4);
  L110(i42, projections6, strata_cols4):
    i45 = ld i;
    check L112() else D18();
  L115():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L19(i40, dx8);
  L116():
    terms7 = force? terms6;
    __3 = ldf `[` in base;
    r45 = dyn __3(dx3, <missing>, terms7);
    goto L19(i48, r45);
  L117():
    eff4 = force? eff3;
    checkMissing(eff4);
    c8 = `is.object`(eff4);
    if c8 then L118() else L119(i50, dx9, eff4);
  L127():
    goto L22(i34, r54);
  L130():
    dr12 = tryDispatchBuiltin.1("[[", projections10);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L132() else L131(i58, dr12);
  L131(i62, projections12):
    strata = ld strata;
    check L133() else D26();
  L154():
    dx59 = getTryDispatchBuiltinValue(dr32);
    goto L28(i55, dx59);
  L155():
    i84 = force? i83;
    ____ = ldf `[[<-` in base;
    r108 = dyn ____(l4, r103, i84);
    goto L28(i80, r108);
  L156():
    strata_cols14 = force? strata_cols13;
    checkMissing(strata_cols14);
    c23 = `is.object`(strata_cols14);
    if c23 then L157() else L158(i82, strata_cols14);
  L228():
    dx102 = getTryDispatchBuiltinValue(dr58);
    goto L50(i160, dx102);
  L229():
    terms38 = force? terms37;
    __26 = ldf `[` in base;
    r151 = dyn __26(dx99, <missing>, terms38);
    goto L50(i162, r151);
  L230():
    p13 = prom<V +>{
      sym19 = ldf `rep.int`;
      base19 = ldf `rep.int` in base;
      guard19 = `==`.4(sym19, base19);
      if guard19 then L2() else L3();
    L0(r153):
      return r153;
    L2():
      sym20 = ldf length;
      base20 = ldf length in base;
      guard20 = `==`.4(sym20, base20);
      if guard20 then L4() else L5();
    L3():
      r152 = dyn base19(1.0, <lang length(terms)>);
      goto L0(r152);
    L1(r155):
      rep_int1 = ldf `rep.int` in base;
      r157 = dyn rep_int1(1.0, r155);
      goto L0(r157);
    L4():
      terms39 = ld terms;
      terms40 = force? terms39;
      checkMissing(terms40);
      length6 = ldf length in base;
      r156 = dyn length6(terms40);
      goto L1(r156);
    L5():
      r154 = dyn base20(<sym terms>);
      goto L1(r154);
    };
    r159 = dyn as_matrix2(p13);
    check L231() else D70();
  L236():
    p14 = prom<V +>{
      mat4 = ld mat;
      mat5 = force? mat4;
      checkMissing(mat5);
      return mat5;
    };
    p15 = prom<V +>{
      projections29 = ld projections;
      projections30 = force? projections29;
      checkMissing(projections30);
      c41 = `is.object`(projections30);
      if c41 then L7() else L8(projections30);
    L0(dx105):
      c42 = `is.object`(dx105);
      if c42 then L10() else L11(dx105);
    L7():
      dr60 = tryDispatchBuiltin.1("[[", projections30);
      dc30 = getTryDispatchBuiltinDispatched(dr60);
      if dc30 then L9() else L8(dr60);
    L8(projections32):
      j4 = ld j;
      j5 = force? j4;
      __27 = ldf `[[` in base;
      r162 = dyn __27(projections32, j5);
      goto L0(r162);
    L1(dx109):
      return dx109;
    L9():
      dx104 = getTryDispatchBuiltinValue(dr60);
      goto L0(dx104);
    L10():
      dr62 = tryDispatchBuiltin.1("[", dx105);
      dc31 = getTryDispatchBuiltinDispatched(dr62);
      if dc31 then L12() else L11(dr62);
    L11(dx107):
      terms41 = ld terms;
      terms42 = force? terms41;
      checkMissing(terms42);
      c43 = `is.object`(terms42);
      if c43 then L13() else L14(dx107, terms42);
    L2(dx115):
      __30 = ldf `[` in base;
      r178 = dyn __30(dx105, <missing>, dx115);
      goto L1(r178);
    L12():
      dx108 = getTryDispatchBuiltinValue(dr62);
      goto L1(dx108);
    L13():
      dr64 = tryDispatchBuiltin.1("[", terms42);
      dc32 = getTryDispatchBuiltinDispatched(dr64);
      if dc32 then L15() else L14(dx107, dr64);
    L14(dx111, terms44):
      sym21 = ldf `is.na`;
      base21 = ldf `is.na` in base;
      guard21 = `==`.4(sym21, base21);
      if guard21 then L16() else L17();
    L3(dx118, terms47, r164):
      r176 = `!`(r164);
      __29 = ldf `[` in base;
      r177 = dyn __29(terms47, r176);
      goto L2(r177);
    L15():
      dx113 = getTryDispatchBuiltinValue(dr64);
      goto L2(dx113);
    L16():
      sym22 = ldf match;
      base22 = ldf match in base;
      guard22 = `==`.4(sym22, base22);
      if guard22 then L18() else L19();
    L17():
      r163 = dyn base21(<lang match(terms, `[`(names(strata.cols), `==`(strata.cols, j)))>);
      goto L3(dx111, terms44, r163);
    L4(dx121, terms50, r166):
      is_na2 = ldf `is.na` in base;
      r175 = dyn is_na2(r166);
      goto L3(dx121, terms50, r175);
    L18():
      terms51 = ld terms;
      terms52 = force? terms51;
      checkMissing(terms52);
      sym23 = ldf names;
      base23 = ldf names in base;
      guard23 = `==`.4(sym23, base23);
      if guard23 then L20() else L21();
    L19():
      r165 = dyn base22(<sym terms>, <lang `[`(names(strata.cols), `==`(strata.cols, j))>);
      goto L4(dx111, terms44, r165);
    L5(dx124, terms55, r168):
      c44 = `is.object`(r168);
      if c44 then L22() else L23(dx124, terms55, r168);
    L20():
      strata_cols25 = ld `strata.cols`;
      strata_cols26 = force? strata_cols25;
      checkMissing(strata_cols26);
      names3 = ldf names in base;
      r169 = dyn names3(strata_cols26);
      goto L5(dx111, terms44, r169);
    L21():
      r167 = dyn base23(<sym strata.cols>);
      goto L5(dx111, terms44, r167);
    L6(dx129, terms59, dx130):
      match2 = ldf match in base;
      r174 = dyn match2(terms52, dx130, NA_INT, NULL);
      goto L4(dx129, terms59, r174);
    L22():
      dr66 = tryDispatchBuiltin.1("[", r168);
      dc33 = getTryDispatchBuiltinDispatched(dr66);
      if dc33 then L24() else L23(dx124, terms55, dr66);
    L23(dx126, terms57, r171):
      strata_cols27 = ld `strata.cols`;
      strata_cols28 = force? strata_cols27;
      checkMissing(strata_cols28);
      j6 = ld j;
      j7 = force? j6;
      checkMissing(j7);
      r172 = `==`(strata_cols28, j7);
      __28 = ldf `[` in base;
      r173 = dyn __28(r171, r172);
      goto L6(dx126, terms57, r173);
    L24():
      dx128 = getTryDispatchBuiltinValue(dr66);
      goto L6(dx124, terms55, dx128);
    };
    r180 = dyn cbind1(p14, p15);
    check L237() else D74();
  L238():
    mat7 = force? mat6;
    checkMissing(mat7);
    as_matrix3 = ldf `as.matrix`;
    check L239() else D76();
  L251():
    dx137 = getTryDispatchBuiltinValue(dr74);
    goto L54(i178, dx137);
  L252():
    i186 = force? i185;
    __33 = ldf `[` in base;
    r203 = dyn __33(strata_cols32, i186);
    goto L54(i182, r203);
  L253():
    dr76 = tryDispatchBuiltin.1("[[", l28);
    dc38 = getTryDispatchBuiltinDispatched(dr76);
    if dc38 then L255() else L254(i184, dx138, l28, dx138, dr76);
  L254(i188, dx141, l31, dx142, l32):
    i191 = ld i;
    check L256() else D84();
  D18():
    deopt 69 [i42, projections6, strata_cols4, i45];
  D26():
    deopt 98 [i62, projections12, strata];
  D70():
    deopt 253 [i164, r159];
  D74():
    deopt 266 [i166, i168, r180];
  D76():
    deopt 275 [i166];
  D84():
    deopt 299 [i188, dx141, l31, dx142, l32, i191];
  D85():
    deopt 303 [i190, dx146, l34, dx148, dx147];
  L20(i54, dx14, dx15):
    r47 = `/`(dx14, dx15);
    st data = r47;
    goto L21(i54);
  L25(i68, dx23):
    as_matrix = ldf `as.matrix`;
    check L138() else D28();
  L27():
    x1 = `[[`(s1, i72, NULL, TRUE);
    st j = x1;
    cbind = ldf cbind;
    check L144() else D32();
  L29(i88, dx62):
    l5 = ld tables;
    c24 = `is.object`(l5);
    if c24 then L161() else L162(i88, dx62, l5, dx62, l5);
  L111():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L18(i38, projections4, dx4);
  L112():
    i46 = force? i45;
    __1 = ldf `[` in base;
    r43 = dyn __1(strata_cols4, i46);
    goto L18(i42, projections6, r43);
  L118():
    dr8 = tryDispatchBuiltin.1("[", eff4);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L120() else L119(i50, dx9, dr8);
  L119(i52, dx11, eff6):
    eff_i = ld `eff.i`;
    check L121() else D21();
  L132():
    dx18 = getTryDispatchBuiltinValue(dr12);
    goto L24(i58, dx18);
  L133():
    strata1 = force? strata;
    __6 = ldf `[[` in base;
    r56 = dyn __6(projections12, strata1);
    goto L24(i62, r56);
  L134():
    dr14 = tryDispatchBuiltin.1("[", dx19);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L136() else L135(i64, dr14);
  L135(i66, dx21):
    terms10 = ld terms;
    check L137() else D27();
  L143():
    mat2 = ld mat;
    check L146() else D34();
  L157():
    dr34 = tryDispatchBuiltin.1("[", strata_cols14);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L159() else L158(i82, dr34);
  L158(i86, strata_cols16):
    i89 = ld i;
    check L160() else D42();
  L231():
    ___2 = ldf `%*%` in base;
    r160 = dyn ___2(dx103, r159);
    check L232() else D71();
  L237():
    st mat = r180;
    goto L51(i166, i168);
  L239():
    p16 = prom<V +>{
      sym24 = ldf `rep.int`;
      base24 = ldf `rep.int` in base;
      guard24 = `==`.4(sym24, base24);
      if guard24 then L2() else L3();
    L0(r182):
      return r182;
    L2():
      sym25 = ldf length;
      base25 = ldf length in base;
      guard25 = `==`.4(sym25, base25);
      if guard25 then L4() else L5();
    L3():
      r181 = dyn base24(1.0, <lang length(terms)>);
      goto L0(r181);
    L1(r184):
      rep_int2 = ldf `rep.int` in base;
      r186 = dyn rep_int2(1.0, r184);
      goto L0(r186);
    L4():
      terms60 = ld terms;
      terms61 = force? terms60;
      checkMissing(terms61);
      length7 = ldf length in base;
      r185 = dyn length7(terms61);
      goto L1(r185);
    L5():
      r183 = dyn base25(<sym terms>);
      goto L1(r183);
    };
    r188 = dyn as_matrix3(p16);
    check L240() else D77();
  L255():
    dx145 = getTryDispatchBuiltinValue(dr76);
    goto L55(i184, dx138, l28, dx138, dx145);
  L256():
    i192 = force? i191;
    __34 = ldf `[[` in base;
    r204 = dyn __34(l32, i192);
    goto L55(i188, dx141, l31, dx142, r204);
  L257():
    r205 = dyn attr__1(dx148, NULL, "strata", dx147);
    check L258() else D86();
  D21():
    deopt 79 [i52, dx11, eff6, eff_i];
  D27():
    deopt 102 [i66, dx21, terms10];
  D28():
    deopt 107 [i68];
  D32():
    deopt 119 [i70, i72];
  D34():
    deopt 128 [i70, mat2];
  D42():
    deopt 150 [i86, strata_cols16, i89];
  D71():
    deopt 255 [i164, r160];
  D77():
    deopt 277 [i166, r188];
  D86():
    deopt 306 [i190, dx146, l34, r205];
  L30(i94, dx70, l11, dx71, dx72):
    attr__ = ldf `attr<-`;
    check L165() else D44();
  L120():
    dx13 = getTryDispatchBuiltinValue(dr8);
    goto L20(i50, dx9, dx13);
  L121():
    eff_i1 = force? eff_i;
    __4 = ldf `[` in base;
    r46 = dyn __4(eff6, eff_i1);
    goto L20(i52, dx11, r46);
  L136():
    dx22 = getTryDispatchBuiltinValue(dr14);
    goto L25(i64, dx22);
  L137():
    terms11 = force? terms10;
    __7 = ldf `[` in base;
    r57 = dyn __7(dx19, <missing>, terms11);
    goto L25(i66, r57);
  L138():
    p3 = prom<V +>{
      eff7 = ld eff;
      eff8 = force? eff7;
      checkMissing(eff8);
      c13 = `is.object`(eff8);
      if c13 then L1() else L2(1.0, eff8);
    L0(r61, dx25):
      r63 = `/`(r61, dx25);
      return r63;
    L1():
      dr16 = tryDispatchBuiltin.1("[", eff8);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(1.0, dr16);
    L2(r59, eff10):
      eff_i2 = ld `eff.i`;
      eff_i3 = force? eff_i2;
      __8 = ldf `[` in base;
      r62 = dyn __8(eff10, eff_i3);
      goto L0(r59, r62);
    L3():
      dx24 = getTryDispatchBuiltinValue(dr16);
      goto L0(1.0, dx24);
    };
    r65 = dyn as_matrix(p3);
    check L139() else D29();
  L144():
    p4 = prom<V +>{
      mat = ld mat;
      mat1 = force? mat;
      checkMissing(mat1);
      return mat1;
    };
    p5 = prom<V +>{
      projections13 = ld projections;
      projections14 = force? projections13;
      checkMissing(projections14);
      c15 = `is.object`(projections14);
      if c15 then L7() else L8(projections14);
    L0(dx27):
      c16 = `is.object`(dx27);
      if c16 then L10() else L11(dx27);
    L7():
      dr18 = tryDispatchBuiltin.1("[[", projections14);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L9() else L8(dr18);
    L8(projections16):
      j = ld j;
      j1 = force? j;
      __9 = ldf `[[` in base;
      r68 = dyn __9(projections16, j1);
      goto L0(r68);
    L1(dx31):
      return dx31;
    L9():
      dx26 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx26);
    L10():
      dr20 = tryDispatchBuiltin.1("[", dx27);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L12() else L11(dr20);
    L11(dx29):
      terms12 = ld terms;
      terms13 = force? terms12;
      checkMissing(terms13);
      c17 = `is.object`(terms13);
      if c17 then L13() else L14(dx29, terms13);
    L2(dx37):
      __12 = ldf `[` in base;
      r84 = dyn __12(dx27, <missing>, dx37);
      goto L1(r84);
    L12():
      dx30 = getTryDispatchBuiltinValue(dr20);
      goto L1(dx30);
    L13():
      dr22 = tryDispatchBuiltin.1("[", terms13);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L15() else L14(dx29, dr22);
    L14(dx33, terms15):
      sym13 = ldf `is.na`;
      base13 = ldf `is.na` in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L16() else L17();
    L3(dx40, terms18, r70):
      r82 = `!`(r70);
      __11 = ldf `[` in base;
      r83 = dyn __11(terms18, r82);
      goto L2(r83);
    L15():
      dx35 = getTryDispatchBuiltinValue(dr22);
      goto L2(dx35);
    L16():
      sym14 = ldf match;
      base14 = ldf match in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L18() else L19();
    L17():
      r69 = dyn base13(<lang match(terms, `[`(names(strata.cols), `==`(strata.cols, j)))>);
      goto L3(dx33, terms15, r69);
    L4(dx43, terms21, r72):
      is_na1 = ldf `is.na` in base;
      r81 = dyn is_na1(r72);
      goto L3(dx43, terms21, r81);
    L18():
      terms22 = ld terms;
      terms23 = force? terms22;
      checkMissing(terms23);
      sym15 = ldf names;
      base15 = ldf names in base;
      guard15 = `==`.4(sym15, base15);
      if guard15 then L20() else L21();
    L19():
      r71 = dyn base14(<sym terms>, <lang `[`(names(strata.cols), `==`(strata.cols, j))>);
      goto L4(dx33, terms15, r71);
    L5(dx46, terms26, r74):
      c18 = `is.object`(r74);
      if c18 then L22() else L23(dx46, terms26, r74);
    L20():
      strata_cols9 = ld `strata.cols`;
      strata_cols10 = force? strata_cols9;
      checkMissing(strata_cols10);
      names2 = ldf names in base;
      r75 = dyn names2(strata_cols10);
      goto L5(dx33, terms15, r75);
    L21():
      r73 = dyn base15(<sym strata.cols>);
      goto L5(dx33, terms15, r73);
    L6(dx51, terms30, dx52):
      match1 = ldf match in base;
      r80 = dyn match1(terms23, dx52, NA_INT, NULL);
      goto L4(dx51, terms30, r80);
    L22():
      dr24 = tryDispatchBuiltin.1("[", r74);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L24() else L23(dx46, terms26, dr24);
    L23(dx48, terms28, r77):
      strata_cols11 = ld `strata.cols`;
      strata_cols12 = force? strata_cols11;
      checkMissing(strata_cols12);
      j2 = ld j;
      j3 = force? j2;
      checkMissing(j3);
      r78 = `==`(strata_cols12, j3);
      __10 = ldf `[` in base;
      r79 = dyn __10(r77, r78);
      goto L6(dx48, terms28, r79);
    L24():
      dx50 = getTryDispatchBuiltinValue(dr24);
      goto L6(dx46, terms26, dx50);
    };
    r86 = dyn cbind(p4, p5);
    check L145() else D33();
  L146():
    mat3 = force? mat2;
    checkMissing(mat3);
    as_matrix1 = ldf `as.matrix`;
    check L147() else D35();
  L159():
    dx61 = getTryDispatchBuiltinValue(dr34);
    goto L29(i82, dx61);
  L160():
    i90 = force? i89;
    __16 = ldf `[` in base;
    r109 = dyn __16(strata_cols16, i90);
    goto L29(i86, r109);
  L161():
    dr36 = tryDispatchBuiltin.1("[[", l5);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L163() else L162(i88, dx62, l5, dx62, dr36);
  L162(i92, dx65, l8, dx66, l9):
    i95 = ld i;
    check L164() else D43();
  L232():
    st data = r160;
    goto L46(i164);
  L240():
    ___3 = ldf `%*%` in base;
    r189 = dyn ___3(mat7, r188);
    check L241() else D78();
  L258():
    c50 = `is.object`(l34);
    if c50 then L259() else L260(i190, dx146, l34);
  D29():
    deopt 109 [i68, r65];
  D33():
    deopt 122 [i70, i72, r86];
  D35():
    deopt 131 [i70];
  D43():
    deopt 155 [i92, dx65, l8, dx66, l9, i95];
  D44():
    deopt 159 [i94, dx70, l11, dx72, dx71];
  D78():
    deopt 279 [i166, r189];
  L56(i196, dx154):
    st tables = dx154;
    l37 = ld tables;
    c51 = `is.object`(l37);
    if c51 then L263() else L264(i196, "mtable", l37, "mtable", l37);
  L139():
    ___ = ldf `%*%` in base;
    r66 = dyn ___(dx23, r65);
    check L140() else D30();
  L145():
    st mat = r86;
    goto L26(i70, i72);
  L147():
    p6 = prom<V +>{
      eff11 = ld eff;
      eff12 = force? eff11;
      checkMissing(eff12);
      c19 = `is.object`(eff12);
      if c19 then L1() else L2(1.0, eff12);
    L0(r90, dx54):
      r92 = `/`(r90, dx54);
      return r92;
    L1():
      dr26 = tryDispatchBuiltin.1("[", eff12);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L3() else L2(1.0, dr26);
    L2(r88, eff14):
      eff_i4 = ld `eff.i`;
      eff_i5 = force? eff_i4;
      __13 = ldf `[` in base;
      r91 = dyn __13(eff14, eff_i5);
      goto L0(r88, r91);
    L3():
      dx53 = getTryDispatchBuiltinValue(dr26);
      goto L0(1.0, dx53);
    };
    r94 = dyn as_matrix1(p6);
    check L148() else D36();
  L163():
    dx69 = getTryDispatchBuiltinValue(dr36);
    goto L30(i88, dx62, l5, dx62, dx69);
  L164():
    i96 = force? i95;
    __17 = ldf `[[` in base;
    r110 = dyn __17(l9, i96);
    goto L30(i92, dx65, l8, dx66, r110);
  L165():
    r111 = dyn attr__(dx72, NULL, "strata", dx71);
    check L166() else D45();
  L241():
    st data = r189;
    goto L46(i166);
  L259():
    dr78 = tryDispatchBuiltin.0("[[<-", l34, r205);
    dc39 = getTryDispatchBuiltinDispatched(dr78);
    if dc39 then L261() else L260(i190, dx146, dr78);
  L260(i194, dx150, l36):
    i197 = ld i;
    check L262() else D87();
  D30():
    deopt 111 [i68, r66];
  D36():
    deopt 133 [i70, r94];
  D45():
    deopt 162 [i94, dx70, l11, r111];
  D87():
    deopt 307 [i194, dx150, l36, r205, i197];
  L57(i202, r213, l43, r214, dx156):
    class__1 = ldf `class<-`;
    check L267() else D89();
  L140():
    st data = r66;
    goto L21(i68);
  L148():
    ___1 = ldf `%*%` in base;
    r95 = dyn ___1(mat3, r94);
    check L149() else D37();
  L166():
    c25 = `is.object`(l11);
    if c25 then L167() else L168(i94, dx70, l11);
  L261():
    dx152 = getTryDispatchBuiltinValue(dr78);
    goto L56(i190, dx152);
  L262():
    i198 = force? i197;
    ____4 = ldf `[[<-` in base;
    r206 = dyn ____4(l36, r205, i198);
    goto L56(i194, r206);
  L263():
    dr80 = tryDispatchBuiltin.1("[[", l37);
    dc40 = getTryDispatchBuiltinDispatched(dr80);
    if dc40 then L265() else L264(i196, "mtable", l37, "mtable", dr80);
  L264(i200, r209, l40, r210, l41):
    i203 = ld i;
    check L266() else D88();
  D37():
    deopt 135 [i70, r95];
  D88():
    deopt 315 [i200, r209, l40, r210, l41, i203];
  D89():
    deopt 319 [i202, r213, l43, dx156, r214];
  L31(i100, dx78):
    st tables = dx78;
    l14 = ld tables;
    c26 = `is.object`(l14);
    if c26 then L171() else L172(i100, "mtable", l14, "mtable", l14);
  L149():
    st data = r95;
    goto L21(i70);
  L167():
    dr38 = tryDispatchBuiltin.0("[[<-", l11, r111);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L169() else L168(i94, dx70, dr38);
  L168(i98, dx74, l13):
    i101 = ld i;
    check L170() else D46();
  L265():
    dx155 = getTryDispatchBuiltinValue(dr80);
    goto L57(i196, "mtable", l37, "mtable", dx155);
  L266():
    i204 = force? i203;
    __35 = ldf `[[` in base;
    r215 = dyn __35(l41, i204);
    goto L57(i200, r209, l40, r210, r215);
  L267():
    r216 = dyn class__1(dx156, NULL, r214);
    check L268() else D90();
  D46():
    deopt 163 [i98, dx74, l13, r111, i101];
  D90():
    deopt 321 [i202, r213, l43, r216];
  L32(i106, r119, l20, r120, dx80):
    class__ = ldf `class<-`;
    check L175() else D48();
  L169():
    dx76 = getTryDispatchBuiltinValue(dr38);
    goto L31(i94, dx76);
  L170():
    i102 = force? i101;
    ____1 = ldf `[[<-` in base;
    r112 = dyn ____1(l13, r111, i102);
    goto L31(i98, r112);
  L171():
    dr40 = tryDispatchBuiltin.1("[[", l14);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L173() else L172(i100, "mtable", l14, "mtable", dr40);
  L172(i104, r115, l17, r116, l18):
    i107 = ld i;
    check L174() else D47();
  L268():
    c52 = `is.object`(l43);
    if c52 then L269() else L270(i202, r213, l43);
  D47():
    deopt 171 [i104, r115, l17, r116, l18, i107];
  D48():
    deopt 175 [i106, r119, l20, dx80, r120];
  L58(i208, dx158):
    st tables = dx158;
    prt3 = ld prt;
    check L273() else D92();
  L173():
    dx79 = getTryDispatchBuiltinValue(dr40);
    goto L32(i100, "mtable", l14, "mtable", dx79);
  L174():
    i108 = force? i107;
    __18 = ldf `[[` in base;
    r121 = dyn __18(l18, i108);
    goto L32(i104, r115, l17, r116, r121);
  L175():
    r122 = dyn class__(dx80, NULL, r120);
    check L176() else D49();
  L269():
    dr82 = tryDispatchBuiltin.0("[[<-", l43, r216);
    dc41 = getTryDispatchBuiltinDispatched(dr82);
    if dc41 then L271() else L270(i202, r213, dr82);
  L270(i206, r218, l45):
    i209 = ld i;
    check L272() else D91();
  D49():
    deopt 177 [i106, r119, l20, r122];
  D91():
    deopt 322 [i206, r218, l45, r216, i209];
  D92():
    deopt 326 [i208, prt3];
  L176():
    c27 = `is.object`(l20);
    if c27 then L177() else L178(i106, r119, l20);
  L271():
    dx157 = getTryDispatchBuiltinValue(dr82);
    goto L58(i202, dx157);
  L272():
    i210 = force? i209;
    ____5 = ldf `[[<-` in base;
    r221 = dyn ____5(l45, r216, i210);
    goto L58(i206, r221);
  L273():
    prt4 = force? prt3;
    checkMissing(prt4);
    c53 = `as.logical`(prt4);
    if c53 then L274() else L59();
  L33(i112, dx82):
    st tables = dx82;
    prt1 = ld prt;
    check L181() else D51();
  L59():
    goto L60(i208);
  L60(i215):
    goto L39(i215);
  L177():
    dr42 = tryDispatchBuiltin.0("[[<-", l20, r122);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L179() else L178(i106, r119, dr42);
  L178(i110, r124, l22):
    i113 = ld i;
    check L180() else D50();
  L274():
    print1 = ldf print;
    check L275() else D93();
  D50():
    deopt 178 [i110, r124, l22, r122, i113];
  D51():
    deopt 182 [i112, prt1];
  D93():
    deopt 329 [i208];
  L179():
    dx81 = getTryDispatchBuiltinValue(dr42);
    goto L33(i106, dx81);
  L180():
    i114 = force? i113;
    ____2 = ldf `[[<-` in base;
    r127 = dyn ____2(l22, r122, i114);
    goto L33(i110, r127);
  L181():
    prt2 = force? prt1;
    checkMissing(prt2);
    c28 = `as.logical`(prt2);
    if c28 then L182() else L34();
  L275():
    p21 = prom<V +>{
      tables8 = ld tables;
      tables9 = force? tables8;
      checkMissing(tables9);
      c54 = `is.object`(tables9);
      if c54 then L1() else L2(tables9);
    L0(dx160):
      return dx160;
    L1():
      dr84 = tryDispatchBuiltin.1("[", tables9);
      dc42 = getTryDispatchBuiltinDispatched(dr84);
      if dc42 then L3() else L2(dr84);
    L2(tables11):
      i213 = ld i;
      i214 = force? i213;
      __36 = ldf `[` in base;
      r222 = dyn __36(tables11, i214);
      goto L0(r222);
    L3():
      dx159 = getTryDispatchBuiltinValue(dr84);
      goto L0(dx159);
    };
    ddd2 = ld `...`;
    r224 = dyn print1[, `...`, quote](p21, ddd2, FALSE);
    check L276() else D94();
  D94():
    deopt 334 [i208, r224];
  L34():
    goto L35(i112);
  L35(i119):
    goto L5(i119);
  L182():
    print = ldf print;
    check L183() else D52();
  L276():
    goto L60(i208);
  D52():
    deopt 185 [i112];
  L183():
    p11 = prom<V +>{
      tables2 = ld tables;
      tables3 = force? tables2;
      checkMissing(tables3);
      c29 = `is.object`(tables3);
      if c29 then L1() else L2(tables3);
    L0(dx84):
      return dx84;
    L1():
      dr44 = tryDispatchBuiltin.1("[", tables3);
      dc22 = getTryDispatchBuiltinDispatched(dr44);
      if dc22 then L3() else L2(dr44);
    L2(tables5):
      i117 = ld i;
      i118 = force? i117;
      __19 = ldf `[` in base;
      r128 = dyn __19(tables5, i118);
      goto L0(r128);
    L3():
      dx83 = getTryDispatchBuiltinValue(dr44);
      goto L0(dx83);
    };
    ddd1 = ld `...`;
    r130 = dyn print[, `...`, quote](p11, ddd1, FALSE);
    check L184() else D53();
  D53():
    deopt 190 [i112, r130];
  L184():
    goto L35(i112);
  }
}