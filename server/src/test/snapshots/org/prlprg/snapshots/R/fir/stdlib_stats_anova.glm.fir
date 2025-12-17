fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg utils:*, reg utils1:V, reg p:p(V +), reg r4:V, reg example:cls, reg r5:V, reg anova:cls, reg glm_D93:*, reg glm_D94:V, reg p1:p(V +), reg r7:V, reg anova1:cls, reg glm_D95:*, reg glm_D96:V, reg p2:p(V +), reg r9:V, reg anova2:cls, reg glm_D97:*, reg glm_D98:V, reg p3:p(V +), reg r11:V, reg update:cls, reg glm_D99:*, reg glm_D100:V, reg p4:p(V +), reg __:cls, reg r13:V, reg p5:p(V +), reg r15:V, reg anova3:cls, reg glm_D101:*, reg glm_D102:V, reg p6:p(V +), reg glm_D93a:*, reg glm_D93a1:V, reg p7:p(V +), reg r18:V |
    mkenv;
    r = clos inner3950183433;
    st `anova.glm` = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    example = ldf example;
    check L5() else D2();
  L1():
    require = ldf require;
    check L3() else D0();
  L2():
    r1 = dyn base(<sym utils>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L3():
    p = prom<V +>{
      utils = ld utils;
      utils1 = force? utils;
      checkMissing(utils1);
      return utils1;
    };
    r4 = dyn require(p);
    check L4() else D1();
  L5():
    r5 = dyn example[, echo]("glm", FALSE);
    check L6() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 13 [r5];
  L4():
    goto L0();
  L6():
    anova = ldf anova;
    check L7() else D4();
  D4():
    deopt 15 [];
  L7():
    p1 = prom<V +>{
      glm_D93 = ld `glm.D93`;
      glm_D94 = force? glm_D93;
      checkMissing(glm_D94);
      return glm_D94;
    };
    r7 = dyn anova[, test](p1, FALSE);
    check L8() else D5();
  D5():
    deopt 19 [r7];
  L8():
    anova1 = ldf anova;
    check L9() else D6();
  D6():
    deopt 21 [];
  L9():
    p2 = prom<V +>{
      glm_D95 = ld `glm.D93`;
      glm_D96 = force? glm_D95;
      checkMissing(glm_D96);
      return glm_D96;
    };
    r9 = dyn anova1[, test](p2, "Cp");
    check L10() else D7();
  D7():
    deopt 25 [r9];
  L10():
    anova2 = ldf anova;
    check L11() else D8();
  D8():
    deopt 27 [];
  L11():
    p3 = prom<V +>{
      glm_D97 = ld `glm.D93`;
      glm_D98 = force? glm_D97;
      checkMissing(glm_D98);
      return glm_D98;
    };
    r11 = dyn anova2[, test](p3, "Chisq");
    check L12() else D9();
  D9():
    deopt 31 [r11];
  L12():
    update = ldf update;
    check L13() else D10();
  D10():
    deopt 33 [];
  L13():
    p4 = prom<V +>{
      glm_D99 = ld `glm.D93`;
      glm_D100 = force? glm_D99;
      checkMissing(glm_D100);
      return glm_D100;
    };
    p5 = prom<V +>{
      __ = ldf `~` in base;
      r13 = dyn __(<lang `*`(treatment, outcome)>);
      return r13;
    };
    r15 = dyn update(p4, p5);
    check L14() else D11();
  D11():
    deopt 36 [r15];
  L14():
    st `glm.D93a` = r15;
    anova3 = ldf anova;
    check L15() else D12();
  D12():
    deopt 39 [];
  L15():
    p6 = prom<V +>{
      glm_D101 = ld `glm.D93`;
      glm_D102 = force? glm_D101;
      checkMissing(glm_D102);
      return glm_D102;
    };
    p7 = prom<V +>{
      glm_D93a = ld `glm.D93a`;
      glm_D93a1 = force? glm_D93a;
      checkMissing(glm_D93a1);
      return glm_D93a1;
    };
    r18 = dyn anova3[, , test](p6, p7, "Rao");
    check L16() else D13();
  D13():
    deopt 44 [r18];
  L16():
    popenv;
    return r18;
  }
}
fun inner3950183433(object, `...`, dispersion, test) {
  (reg object:*, reg ddd:dots, reg dispersion:*, reg test:*) -+> V { var object:*, var `...`:dots?, var dispersion:*, reg dispersion_isMissing:L, reg dispersion_orDefault:*, var test:*, reg test_isMissing:L, reg test_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg ddd1:dots?, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg dotargs:*, reg dotargs1:V, reg names:cls, reg r7:V, reg c:V, reg c1:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r8:V, reg r9:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r10:V, reg r11:V, reg dotargs2:*, reg dotargs3:V, reg length:cls, reg r12:V, reg rep_len:cls, reg r13:V, reg r14:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r15:V, reg r16:V, reg dotargs4:*, reg dotargs5:V, reg names1:cls, reg r17:V, reg r18:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r19:V, reg r20:V, reg named:*, reg named1:V, reg any:cls, reg r21:V, reg c2:L, reg warning:cls, reg paste:cls, reg deparse:cls, reg dotargs6:*, reg dotargs7:V, reg c3:L, reg dotargs9:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg named2:*, reg named3:V, reg __:cls, reg r22:V, reg p:p(V +), reg r24:V, reg p1:p(V +), reg r26:V, reg p2:p(V +), reg r28:V, reg dotargs10:*, reg dotargs11:V, reg c4:L, reg dotargs13:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg named4:*, reg named5:V, reg r30:V, reg __1:cls, reg r31:V, reg vapply:cls, reg dotargs14:*, reg dotargs15:V, reg p3:p(V +), reg r33:cls, reg p4:p(V +), reg r35:V, reg dotargs16:*, reg dotargs17:V, reg c5:L, reg dotargs19:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg is_glm:*, reg is_glm1:V, reg __2:cls, reg r36:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r37:V, reg r38:V, reg dotargs20:*, reg dotargs21:V, reg length1:cls, reg r39:V, reg c6:L, reg anova_glmlist:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r40:V, reg r41:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r42:V, reg r43:V, reg object1:*, reg object2:V, reg list1:cls, reg r44:V, reg dotargs22:*, reg dotargs23:V, reg c7:cls, reg r45:V, reg p5:p(V +), reg dispersion1:*, reg dispersion2:V, reg p6:p(V +), reg test1:*, reg test2:V, reg p7:p(V +), reg r49:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r52:V, reg r53:V, reg test3:*, reg test4:V, reg c8:V, reg r54:V, reg c9:L, reg c11:V, reg isTRUE:cls, reg test5:*, reg test6:V, reg r55:V, reg p8:p(V +), reg r57:V, reg c12:L, reg c13:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r58:V, reg r59:V, reg object3:*, reg object4:V, reg c15:L, reg object6:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r60:V, reg attr:cls, reg r61:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r62:V, reg r63:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r64:V, reg r65:V, reg object7:*, reg object8:V, reg names2:cls, reg r66:V, reg match:cls, reg r67:V, reg c16:L, reg object9:*, reg object10:V, reg c17:L, reg object12:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg n:*, reg n1:V, reg __3:cls, reg r68:V, reg dx10:V, reg model_matrix:cls, reg object13:*, reg object14:V, reg p9:p(V +), reg r70:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r71:V, reg r72:V, reg x:*, reg x1:V, reg attr1:cls, reg r73:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r74:V, reg r75:V, reg varseq:*, reg varseq1:V, reg max:cls, reg r76:V, reg doscore:*, reg doscore1:V, reg c18:L, reg numeric:cls, reg nvars:*, reg nvars1:V, reg p10:p(V +), reg r78:V, reg object15:*, reg object16:V, reg c19:L, reg object18:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg r79:V, reg object19:*, reg object20:V, reg c20:L, reg object22:V, reg dr12:V, reg dc6:L, reg dx13:V, reg dx14:V, reg r80:V, reg eval:cls, reg sym16:cls, reg base16:cls, reg guard16:L, reg r81:V, reg r82:V, reg call:cls, reg r83:V, reg p11:p(V +), reg r85:V, reg fit:*, reg fit1:V, reg c21:L, reg fit3:V, reg dr14:V, reg dc7:L, reg dx15:V, reg dx16:V, reg r86:V, reg fit4:*, reg fit5:V, reg c22:L, reg fit7:V, reg dr16:V, reg dc8:L, reg dx17:V, reg dx18:V, reg r87:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r88:V, reg r89:V, reg object23:*, reg object24:V, reg c23:L, reg object26:V, reg dr18:V, reg dc9:L, reg dx19:V, reg dx20:V, reg r90:V, reg attr2:cls, reg r91:V, reg nvars2:*, reg nvars3:V, reg r93:V, reg c24:L, reg c25:V, reg doscore2:*, reg doscore3:V, reg c27:L, reg c28:V, reg c30:L, reg object27:*, reg object28:V, reg c31:L, reg object30:V, reg dr20:V, reg dc10:L, reg dx21:V, reg dx22:V, reg r94:V, reg object31:*, reg object32:V, reg c32:L, reg object34:V, reg dr22:V, reg dc11:L, reg dx23:V, reg dx24:V, reg r95:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r96:V, reg r97:V, reg y:*, reg y1:V, reg c33:V, reg c34:L, reg object35:*, reg object36:V, reg c35:L, reg object38:V, reg dr24:V, reg dc12:L, reg dx25:V, reg dx26:V, reg r98:V, reg c36:L, reg dx28:V, reg dr26:V, reg dc13:L, reg dx29:V, reg dx30:V, reg r99:V, reg object39:*, reg object40:V, reg c37:L, reg object42:V, reg dr28:V, reg dc14:L, reg dx31:V, reg dx32:V, reg r100:V, reg object43:*, reg object44:V, reg c38:L, reg object46:V, reg dr30:V, reg dc15:L, reg dx33:V, reg dx34:V, reg r101:V, reg object47:*, reg object48:V, reg c39:L, reg dx36:V, reg object50:V, reg dr32:V, reg dc16:L, reg dx38:V, reg dx39:V, reg dx40:V, reg r102:V, reg mu_eta:cls, reg eta:*, reg eta1:V, reg p12:p(V +), reg r104:V, reg r105:V, reg r106:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r108:V, reg r109:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r110:V, reg r111:V, reg nvars4:*, reg nvars5:V, reg r112:V, reg max1:cls, reg r113:V, reg r114:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c40:L, reg x2:V, reg eval1:cls, reg sym21:cls, reg base21:cls, reg guard21:L, reg r115:V, reg r116:V, reg call1:cls, reg r117:V, reg p13:p(V +), reg r119:V, reg doscore4:*, reg doscore5:V, reg c41:L, reg eval2:cls, reg sym22:cls, reg base22:cls, reg guard22:L, reg r120:V, reg r121:V, reg call2:cls, reg r122:V, reg p14:p(V +), reg r124:V, reg zz:*, reg zz1:V, reg c42:L, reg i8:I, reg zz3:V, reg dr34:V, reg dc17:L, reg dx41:V, reg i10:I, reg dx42:V, reg r125:V, reg zz4:*, reg zz5:V, reg c43:L, reg i12:I, reg dx44:V, reg zz7:V, reg dr36:V, reg dc18:L, reg dx46:V, reg i14:I, reg dx47:V, reg dx48:V, reg r126:V, reg r127:V, reg l1:*, reg c44:L, reg i16:I, reg r129:V, reg l3:*, reg dr38:V, reg dc19:L, reg dx49:V, reg i18:I, reg dx50:V, reg i19:*, reg i20:V, reg ___:cls, reg r132:V, reg fit8:*, reg fit9:V, reg c45:L, reg i22:I, reg fit11:V, reg dr40:V, reg dc20:L, reg dx51:V, reg i24:I, reg dx52:V, reg r133:V, reg fit12:*, reg fit13:V, reg c46:L, reg i26:I, reg fit15:V, reg dr42:V, reg dc21:L, reg dx53:V, reg i28:I, reg dx54:V, reg r134:V, reg i29:I, reg sym23:cls, reg base23:cls, reg guard23:L, reg r135:V, reg i32:I, reg r136:V, reg resdev:*, reg resdev1:V, reg fit16:*, reg fit17:V, reg c47:L, reg i34:I, reg fit19:V, reg dr44:V, reg dc22:L, reg dx56:V, reg i36:I, reg dx57:V, reg r137:V, reg c48:cls, reg r138:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r139:V, reg i39:I, reg r140:V, reg resdf:*, reg resdf1:V, reg fit20:*, reg fit21:V, reg c49:L, reg i41:I, reg fit23:V, reg dr46:V, reg dc23:L, reg dx58:V, reg i43:I, reg dx59:V, reg r141:V, reg c50:cls, reg r142:V, reg doscore6:*, reg doscore7:V, reg c51:L, reg eval3:cls, reg sym25:cls, reg base25:cls, reg guard25:L, reg r143:V, reg r144:V, reg call3:cls, reg r145:V, reg p15:p(V +), reg r147:V, reg zz8:*, reg zz9:V, reg c52:L, reg zz11:V, reg dr48:V, reg dc24:L, reg dx60:V, reg dx61:V, reg r148:V, reg zz12:*, reg zz13:V, reg c53:L, reg dx63:V, reg zz15:V, reg dr50:V, reg dc25:L, reg dx65:V, reg dx66:V, reg dx67:V, reg r149:V, reg r150:V, reg l4:*, reg c54:L, reg r152:V, reg l6:*, reg dr52:V, reg dc26:L, reg dx68:V, reg r154:V, reg dx69:V, reg nvars6:*, reg nvars7:V, reg ___1:cls, reg r155:V, reg r156:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r158:V, reg r159:V, reg object51:*, reg object52:V, reg c55:L, reg object54:V, reg dr54:V, reg dc27:L, reg dx70:V, reg dx71:V, reg r160:V, reg resdf2:*, reg resdf3:V, reg object55:*, reg object56:V, reg c56:L, reg object58:V, reg dr56:V, reg dc28:L, reg dx72:V, reg dx73:V, reg r161:V, reg c57:cls, reg r162:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r163:V, reg r164:V, reg object59:*, reg object60:V, reg c58:L, reg object62:V, reg dr58:V, reg dc29:L, reg dx74:V, reg dx75:V, reg r165:V, reg resdev2:*, reg resdev3:V, reg object63:*, reg object64:V, reg c59:L, reg object66:V, reg dr60:V, reg dc30:L, reg dx76:V, reg dx77:V, reg r166:V, reg c60:cls, reg r167:V, reg data_frame:cls, reg sym28:cls, reg base28:cls, reg guard28:L, reg r168:V, reg r169:V, reg diff:cls, reg resdf4:*, reg resdf5:V, reg p16:p(V +), reg r171:V, reg r172:V, reg c61:cls, reg r173:V, reg p17:p(V +), reg sym29:cls, reg base29:cls, reg guard29:L, reg r175:V, reg r176:V, reg pmax:cls, reg diff1:cls, reg resdev4:*, reg resdev5:V, reg p18:p(V +), reg r178:V, reg r179:V, reg p19:p(V +), reg r181:V, reg c62:cls, reg r182:V, reg p20:p(V +), reg resdf6:*, reg resdf7:V, reg p21:p(V +), reg resdev6:*, reg resdev7:V, reg p22:p(V +), reg r186:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r187:V, reg r188:V, reg object67:*, reg object68:V, reg c63:L, reg object70:V, reg dr62:V, reg dc31:L, reg dx78:V, reg dx79:V, reg r189:V, reg attr3:cls, reg r190:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r191:V, reg r192:V, reg tl:*, reg tl1:V, reg length2:cls, reg r193:V, reg r194:V, reg c64:L, reg table:*, reg table1:V, reg c65:L, reg dr64:V, reg dc32:L, reg dx80:V, reg dx81:V, reg __4:cls, reg r195:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r196:V, reg r197:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r198:V, reg r199:V, reg tl2:*, reg tl3:V, reg c66:cls, reg r200:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r201:V, reg r202:V, reg c67:cls, reg r203:V, reg list2:cls, reg r204:V, reg l7:*, reg dimnames__:cls, reg r205:V, reg doscore8:*, reg doscore9:V, reg c68:L, reg cbind:cls, reg table4:*, reg table5:V, reg p23:p(V +), reg sym35:cls, reg base35:cls, reg guard35:L, reg r207:V, reg r208:V, reg score:*, reg score1:V, reg c69:cls, reg r209:V, reg p24:p(V +), reg r211:V, reg paste1:cls, reg object71:*, reg object72:V, reg c70:L, reg object74:V, reg dr66:V, reg dc33:L, reg dx83:V, reg dx84:V, reg r213:V, reg c71:L, reg dx86:V, reg dr68:V, reg dc34:L, reg dx87:V, reg dx88:V, reg r214:V, reg p25:p(V +), reg object75:*, reg object76:V, reg c72:L, reg object78:V, reg dr70:V, reg dc35:L, reg dx89:V, reg dx90:V, reg r216:V, reg c73:L, reg dx92:V, reg dr72:V, reg dc36:L, reg dx93:V, reg dx94:V, reg r217:V, reg p26:p(V +), reg sym36:cls, reg base36:cls, reg guard36:L, reg r219:V, reg r220:V, reg varlist:*, reg varlist1:V, reg c74:L, reg varlist3:V, reg dr74:V, reg dc37:L, reg dx95:V, reg dx96:V, reg __5:cls, reg r221:V, reg as_character:cls, reg r222:V, reg c75:L, reg r224:V, reg dr76:V, reg dc38:L, reg dx97:V, reg dx98:V, reg __6:cls, reg r225:V, reg p27:p(V +), reg r227:V, reg object79:*, reg object80:V, reg c76:L, reg object82:V, reg dr78:V, reg dc39:L, reg dx99:V, reg dx100:V, reg r228:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r229:V, reg r230:V, reg test7:*, reg test8:V, reg c77:V, reg c78:L, reg sym38:cls, reg base38:cls, reg guard38:L, reg r231:V, reg r232:V, reg dispersion3:*, reg dispersion4:V, reg c79:V, reg r233:V, reg c80:L, reg r234:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r235:V, reg r236:V, reg fam:*, reg fam1:V, reg c81:L, reg fam3:V, reg dr80:V, reg dc40:L, reg dx101:V, reg dx102:V, reg r237:V, reg c82:V, reg r238:V, reg c83:L, reg sym40:cls, reg base40:cls, reg guard40:L, reg r239:V, reg r240:V, reg fam4:*, reg fam5:V, reg c84:L, reg fam7:V, reg dr82:V, reg dc41:L, reg dx103:V, reg dx104:V, reg r241:V, reg is_na:cls, reg r242:V, reg c85:L, reg r243:S, reg isFALSE:cls, reg test9:*, reg test10:V, reg p28:p(V +), reg r246:V, reg r247:V, reg c86:L, reg sym41:cls, reg base41:cls, reg guard41:L, reg r248:V, reg r249:V, reg dispersion5:*, reg dispersion6:V, reg c87:V, reg c88:L, reg summary:cls, reg object83:*, reg object84:V, reg p29:p(V +), reg r251:V, reg c89:L, reg r253:V, reg dr84:V, reg dc42:L, reg dx105:V, reg dx106:V, reg r254:V, reg sym42:cls, reg base42:cls, reg guard42:L, reg r255:V, reg r256:V, reg fam8:*, reg fam9:V, reg c90:L, reg fam11:V, reg dr86:V, reg dc43:L, reg dx108:V, reg dx109:V, reg r257:V, reg c91:V, reg c92:L, reg isTRUE1:cls, reg dispersion7:*, reg dispersion8:V, reg r258:V, reg p30:p(V +), reg r260:V, reg c93:L, reg r261:V, reg object85:*, reg object86:V, reg c94:L, reg object88:V, reg dr88:V, reg dc44:L, reg dx110:V, reg dx111:V, reg r262:V, reg r263:V, reg sym43:cls, reg base43:cls, reg guard43:L, reg r264:V, reg r265:V, reg fam12:*, reg fam13:V, reg c95:L, reg fam15:V, reg dr90:V, reg dc45:L, reg dx112:V, reg dx113:V, reg r266:V, reg is_na1:cls, reg r267:V, reg c96:L, reg object89:*, reg object90:V, reg c97:L, reg object92:V, reg dr92:V, reg dc46:L, reg dx114:V, reg dx115:V, reg r268:V, reg isTRUE2:cls, reg test11:*, reg test12:V, reg r269:V, reg p31:p(V +), reg r271:V, reg c98:L, reg c100:V, reg df_dispersion:*, reg df_dispersion1:V, reg r272:V, reg c101:L, reg c102:V, reg c104:L, reg r273:V, reg isFALSE1:cls, reg test13:*, reg test14:V, reg p32:p(V +), reg r276:V, reg r277:V, reg c105:L, reg isTRUE3:cls, reg test15:*, reg test16:V, reg r278:V, reg p33:p(V +), reg r280:V, reg c106:L, reg c108:V, reg df_dispersion2:*, reg df_dispersion3:V, reg r281:V, reg c109:L, reg c110:V, reg c112:L, reg fam16:*, reg fam17:V, reg c113:L, reg fam19:V, reg dr94:V, reg dc47:L, reg dx116:V, reg dx117:V, reg r282:V, reg fname:*, reg fname1:V, reg r283:V, reg c114:L, reg c115:V, reg fname2:*, reg fname3:V, reg r284:V, reg c117:L, reg c118:V, reg c120:L, reg warning1:cls, reg gettextf:cls, reg fname4:*, reg fname5:V, reg p34:p(V +), reg r286:V, reg p35:p(V +), reg r288:V, reg r289:V, reg warning2:cls, reg r290:V, reg stat_anova:cls, reg table6:*, reg table7:V, reg p36:p(V +), reg test17:*, reg test18:V, reg p37:p(V +), reg dispersion9:*, reg dispersion10:V, reg p38:p(V +), reg df_dispersion4:*, reg df_dispersion5:V, reg p39:p(V +), reg NROW:cls, reg x3:*, reg x4:V, reg p40:p(V +), reg r297:V, reg p41:p(V +), reg r299:V, reg structure:cls, reg table8:*, reg table9:V, reg p42:p(V +), reg title:*, reg title1:V, reg p43:p(V +), reg sym44:cls, reg base44:cls, reg guard44:L, reg r303:V, reg r304:V, reg c121:cls, reg r305:V, reg p44:p(V +), reg r307:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    dispersion_isMissing = missing.0(dispersion);
    if dispersion_isMissing then L0(NULL) else L0(dispersion);
  L0(dispersion_orDefault):
    st dispersion = dispersion_orDefault;
    test_isMissing = missing.0(test);
    if test_isMissing then L1(NULL) else L1(test);
  L1(test_orDefault):
    st test = test_orDefault;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L97() else L98();
  L2(r1):
    st dotargs = r1;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L101() else L102();
  L97():
    list = ldf list;
    check L99() else D0();
  L98():
    r = dyn base(<sym ...>);
    goto L2(r);
  D0():
    deopt 2 [];
  L3(r4):
    c1 = `as.logical`(r4);
    if c1 then L107() else L5();
  L99():
    ddd1 = ld `...`;
    r2 = dyn list[`...`](ddd1);
    check L100() else D1();
  L101():
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L103() else L104();
  L102():
    r3 = dyn base1(<lang names(dotargs)>);
    goto L3(r3);
  D1():
    deopt 4 [r2];
  L4(r6):
    c = `==`(r6, NULL);
    goto L3(c);
  L5():
    sym5 = ldf names;
    base5 = ldf names in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L116() else L117();
  L8(r14):
    st named = r14;
    sym6 = ldf any;
    base6 = ldf any in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L120() else L121();
  L100():
    goto L2(r2);
  L103():
    dotargs = ld dotargs;
    check L105() else D2();
  L104():
    r5 = dyn base2(<sym dotargs>);
    goto L4(r5);
  L107():
    sym3 = ldf rep_len;
    base3 = ldf rep_len in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L108() else L109();
  D2():
    deopt 9 [dotargs];
  L6(r9):
    goto L8(r9);
  L9(r16):
    r18 = `!=`(r16, "");
    goto L8(r18);
  L10(r20):
    c2 = `as.logical`(r20);
    if c2 then L124() else L11();
  L105():
    dotargs1 = force? dotargs;
    checkMissing(dotargs1);
    names = ldf names in base;
    r7 = dyn names(dotargs1);
    check L106() else D3();
  L108():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L110() else L111();
  L109():
    r8 = dyn base3(FALSE, <lang length(dotargs)>);
    goto L6(r8);
  L116():
    dotargs4 = ld dotargs;
    check L118() else D7();
  L117():
    r15 = dyn base5(<sym dotargs>);
    goto L9(r15);
  L120():
    named = ld named;
    check L122() else D9();
  L121():
    r19 = dyn base6(<sym named>);
    goto L10(r19);
  D3():
    deopt 12 [r7];
  D7():
    deopt 27 [dotargs4];
  D9():
    deopt 36 [named];
  L7(r11):
    rep_len = ldf rep_len in base;
    r13 = dyn rep_len(FALSE, r11);
    check L114() else D6();
  L11():
    goto L12();
  L12():
    dotargs10 = ld dotargs;
    check L128() else D13();
  L106():
    goto L4(r7);
  L110():
    dotargs2 = ld dotargs;
    check L112() else D4();
  L111():
    r10 = dyn base4(<sym dotargs>);
    goto L7(r10);
  L118():
    dotargs5 = force? dotargs4;
    checkMissing(dotargs5);
    names1 = ldf names in base;
    r17 = dyn names1(dotargs5);
    check L119() else D8();
  L122():
    named1 = force? named;
    checkMissing(named1);
    any = ldf any in base;
    r21 = dyn any(named1);
    check L123() else D10();
  L124():
    warning = ldf warning;
    check L125() else D11();
  D4():
    deopt 19 [dotargs2];
  D6():
    deopt 24 [r13];
  D8():
    deopt 30 [r17];
  D10():
    deopt 39 [r21];
  D11():
    deopt 41 [];
  D13():
    deopt 47 [dotargs10];
  L112():
    dotargs3 = force? dotargs2;
    checkMissing(dotargs3);
    length = ldf length in base;
    r12 = dyn length(dotargs3);
    check L113() else D5();
  L114():
    goto L6(r13);
  L119():
    goto L9(r17);
  L123():
    goto L10(r21);
  L125():
    p2 = prom<V +>{
      paste = ldf paste;
      p1 = prom<V +>{
        deparse = ldf deparse;
        p = prom<V +>{
          dotargs6 = ld dotargs;
          dotargs7 = force? dotargs6;
          checkMissing(dotargs7);
          c3 = `is.object`(dotargs7);
          if c3 then L1() else L2(dotargs7);
        L0(dx1):
          return dx1;
        L1():
          dr = tryDispatchBuiltin.1("[", dotargs7);
          dc = getTryDispatchBuiltinDispatched(dr);
          if dc then L3() else L2(dr);
        L2(dotargs9):
          named2 = ld named;
          named3 = force? named2;
          __ = ldf `[` in base;
          r22 = dyn __(dotargs9, named3);
          goto L0(r22);
        L3():
          dx = getTryDispatchBuiltinValue(dr);
          goto L0(dx);
        };
        r24 = dyn deparse(p);
        return r24;
      };
      r26 = dyn paste[, collapse](p1, ", ");
      return r26;
    };
    r28 = dyn warning("the following arguments to 'anova.glm' are invalid and dropped: ", p2);
    check L126() else D12();
  L128():
    dotargs11 = force? dotargs10;
    checkMissing(dotargs11);
    c4 = `is.object`(dotargs11);
    if c4 then L129() else L130(dotargs11);
  D5():
    deopt 22 [r12];
  D12():
    deopt 44 [r28];
  L13(dx3):
    st dotargs = dx3;
    vapply = ldf vapply;
    check L133() else D15();
  L113():
    goto L7(r12);
  L126():
    goto L12();
  L129():
    dr2 = tryDispatchBuiltin.1("[", dotargs11);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L131() else L130(dr2);
  L130(dotargs13):
    named4 = ld named;
    check L132() else D14();
  D14():
    deopt 49 [dotargs13, named4];
  D15():
    deopt 55 [];
  L131():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L13(dx2);
  L132():
    named5 = force? named4;
    checkMissing(named5);
    r30 = `!`(named5);
    __1 = ldf `[` in base;
    r31 = dyn __1(dotargs13, r30);
    goto L13(r31);
  L133():
    p3 = prom<V +>{
      dotargs14 = ld dotargs;
      dotargs15 = force? dotargs14;
      checkMissing(dotargs15);
      return dotargs15;
    };
    p4 = prom<V +>{
      r33 = clos inner2501545716;
      return r33;
    };
    r35 = dyn vapply(p3, p4, NA_LGL);
    check L134() else D16();
  D16():
    deopt 59 [r35];
  L134():
    st `is.glm` = r35;
    dotargs16 = ld dotargs;
    check L135() else D17();
  D17():
    deopt 61 [dotargs16];
  L135():
    dotargs17 = force? dotargs16;
    checkMissing(dotargs17);
    c5 = `is.object`(dotargs17);
    if c5 then L136() else L137(dotargs17);
  L14(dx5):
    st dotargs = dx5;
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L140() else L141();
  L136():
    dr4 = tryDispatchBuiltin.1("[", dotargs17);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L138() else L137(dr4);
  L137(dotargs19):
    is_glm = ld `is.glm`;
    check L139() else D18();
  D18():
    deopt 63 [dotargs19, is_glm];
  L15(r38):
    c6 = `as.logical`(r38);
    if c6 then L144() else L16();
  L138():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L14(dx4);
  L139():
    is_glm1 = force? is_glm;
    __2 = ldf `[` in base;
    r36 = dyn __2(dotargs19, is_glm1);
    goto L14(r36);
  L140():
    dotargs20 = ld dotargs;
    check L142() else D19();
  L141():
    r37 = dyn base7(<sym dotargs>);
    goto L15(r37);
  D19():
    deopt 69 [dotargs20];
  L16():
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L149() else L150();
  L142():
    dotargs21 = force? dotargs20;
    checkMissing(dotargs21);
    length1 = ldf length in base;
    r39 = dyn length1(dotargs21);
    check L143() else D20();
  L144():
    anova_glmlist = ldf `anova.glmlist`;
    check L145() else D21();
  D20():
    deopt 72 [r39];
  D21():
    deopt 74 [];
  L18(r53):
    r54 = `!`(r53);
    c9 = `as.logical`(r54);
    if c9 then L152() else L19(c9);
  L143():
    goto L15(r39);
  L145():
    p5 = prom<V +>{
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L2() else L3();
    L0(r41):
      return r41;
    L2():
      sym9 = ldf list;
      base9 = ldf list in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L4() else L5();
    L3():
      r40 = dyn base8(<lang list(object)>, <sym dotargs>);
      goto L0(r40);
    L1(r43):
      dotargs22 = ld dotargs;
      dotargs23 = force? dotargs22;
      checkMissing(dotargs23);
      c7 = ldf c in base;
      r45 = dyn c7(r43, dotargs23);
      goto L0(r45);
    L4():
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      list1 = ldf list in base;
      r44 = dyn list1(object2);
      goto L1(r44);
    L5():
      r42 = dyn base9(<sym object>);
      goto L1(r42);
    };
    p6 = prom<V +>{
      dispersion1 = ld dispersion;
      dispersion2 = force? dispersion1;
      checkMissing(dispersion2);
      return dispersion2;
    };
    p7 = prom<V +>{
      test1 = ld test;
      test2 = force? test1;
      checkMissing(test2);
      return test2;
    };
    r49 = dyn anova_glmlist[, dispersion, test](p5, p6, p7);
    check L146() else D22();
  L149():
    test3 = ld test;
    check L151() else D23();
  L150():
    r52 = dyn base10(<sym test>);
    goto L18(r52);
  D22():
    deopt 80 [r49];
  D23():
    deopt 85 [test3];
  L19(c11):
    st doscore = c11;
    sym11 = ldf attr;
    base11 = ldf attr in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L156() else L157();
  L146():
    popenv;
    return r49;
  L151():
    test4 = force? test3;
    checkMissing(test4);
    c8 = `==`(test4, NULL);
    goto L18(c8);
  L152():
    isTRUE = ldf isTRUE;
    check L153() else D24();
  D24():
    deopt 90 [c9];
  L20(r59):
    st varlist = r59;
    sym12 = ldf match;
    base12 = ldf match in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L164() else L165();
  L153():
    p8 = prom<V +>{
      test5 = ld test;
      test6 = force? test5;
      checkMissing(test6);
      r55 = `==`(test6, "Rao");
      return r55;
    };
    r57 = dyn isTRUE(p8);
    check L154() else D25();
  L156():
    object3 = ld object;
    check L158() else D26();
  L157():
    r58 = dyn base11(<lang `$`(object, terms)>, "variables");
    goto L20(r58);
  D25():
    deopt 92 [c9, r57];
  D26():
    deopt 97 [object3];
  L21(r63):
    st n = r63;
    c16 = `as.logical`(r63);
    if c16 then L171() else L23();
  L154():
    c12 = `as.logical`(r57);
    c13 = `&&`(c9, c12);
    goto L19(c13);
  L158():
    object4 = force? object3;
    checkMissing(object4);
    c15 = `is.object`(object4);
    if c15 then L160() else L161(object4);
  L164():
    sym13 = ldf names;
    base13 = ldf names in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L166() else L167();
  L165():
    r62 = dyn base12("x", <lang names(object)>, 0);
    goto L21(r62);
  L22(r65):
    match = ldf match in base;
    r67 = dyn match("x", r65, 0, NULL);
    check L170() else D30();
  L23():
    model_matrix = ldf `model.matrix`;
    check L178() else D33();
  L25(dx10):
    st x = dx10;
    sym14 = ldf attr;
    base14 = ldf attr in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L180() else L181();
  L159(dx7):
    attr = ldf attr in base;
    r61 = dyn attr(dx7, "variables");
    check L163() else D27();
  L160():
    dr6 = tryDispatchBuiltin.1("$", object4);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L162() else L161(dr6);
  L161(object6):
    r60 = `$`(object6, <sym terms>);
    goto L159(r60);
  L166():
    object7 = ld object;
    check L168() else D28();
  L167():
    r64 = dyn base13(<sym object>);
    goto L22(r64);
  L171():
    object9 = ld object;
    check L172() else D31();
  D27():
    deopt 102 [r61];
  D28():
    deopt 109 [object7];
  D30():
    deopt 116 [r67];
  D31():
    deopt 118 [object9];
  D33():
    deopt 124 [];
  L26(r72):
    st varseq = r72;
    sym15 = ldf max;
    base15 = ldf max in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L184() else L185();
  L162():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L159(dx6);
  L163():
    goto L20(r61);
  L168():
    object8 = force? object7;
    checkMissing(object8);
    names2 = ldf names in base;
    r66 = dyn names2(object8);
    check L169() else D29();
  L170():
    goto L21(r67);
  L172():
    object10 = force? object9;
    checkMissing(object10);
    c17 = `is.object`(object10);
    if c17 then L173() else L174(object10);
  L178():
    p9 = prom<V +>{
      object13 = ld object;
      object14 = force? object13;
      checkMissing(object14);
      return object14;
    };
    r70 = dyn model_matrix(p9);
    check L179() else D34();
  L180():
    x = ld x;
    check L182() else D35();
  L181():
    r71 = dyn base14(<sym x>, "assign");
    goto L26(r71);
  D29():
    deopt 112 [r66];
  D34():
    deopt 126 [r70];
  D35():
    deopt 130 [x];
  L24(dx9):
    goto L25(dx9);
  L27(r75):
    st nvars = r75;
    st resdf = NULL;
    st resdev = NULL;
    doscore = ld doscore;
    check L188() else D39();
  L169():
    goto L22(r66);
  L173():
    dr8 = tryDispatchBuiltin.1("[[", object10);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L175() else L174(dr8);
  L174(object12):
    n = ld n;
    check L176() else D32();
  L179():
    goto L25(r70);
  L182():
    x1 = force? x;
    checkMissing(x1);
    attr1 = ldf attr in base;
    r73 = dyn attr1(x1, "assign");
    check L183() else D36();
  L184():
    varseq = ld varseq;
    check L186() else D37();
  L185():
    r74 = dyn base15(0.0, <sym varseq>);
    goto L27(r74);
  D32():
    deopt 120 [object12, n];
  D36():
    deopt 134 [r73];
  D37():
    deopt 139 [varseq];
  D39():
    deopt 148 [doscore];
  L175():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L24(dx8);
  L176():
    n1 = force? n;
    __3 = ldf `[[` in base;
    r68 = dyn __3(object12, n1);
    goto L24(r68);
  L183():
    goto L26(r73);
  L186():
    varseq1 = force? varseq;
    checkMissing(varseq1);
    max = ldf max in base;
    r76 = dyn max(0.0, varseq1);
    check L187() else D38();
  L188():
    doscore1 = force? doscore;
    checkMissing(doscore1);
    c18 = `as.logical`(doscore1);
    if c18 then L189() else L28();
  D38():
    deopt 142 [r76];
  L28():
    goto L30();
  L30():
    nvars2 = ld nvars;
    check L223() else D50();
  L187():
    goto L27(r76);
  L189():
    numeric = ldf numeric;
    check L190() else D40();
  D40():
    deopt 151 [];
  D50():
    deopt 187 [nvars2];
  L190():
    p10 = prom<V +>{
      nvars = ld nvars;
      nvars1 = force? nvars;
      checkMissing(nvars1);
      return nvars1;
    };
    r78 = dyn numeric(p10);
    check L191() else D41();
  L223():
    nvars3 = force? nvars2;
    checkMissing(nvars3);
    r93 = `>`(nvars3, 1.0);
    c24 = `as.logical`(r93);
    if c24 then L31(c24) else L224();
  D41():
    deopt 153 [r78];
  L31(c25):
    c30 = `as.logical`(c25);
    if c30 then L227() else L32();
  L191():
    st score = r78;
    object15 = ld object;
    check L192() else D42();
  L224():
    doscore2 = ld doscore;
    check L225() else D51();
  D42():
    deopt 155 [object15];
  D51():
    deopt 191 [c24, doscore2];
  L32():
    goto L50();
  L50():
    sym26 = ldf c;
    base26 = ldf c in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L344() else L345();
  L192():
    object16 = force? object15;
    checkMissing(object16);
    c19 = `is.object`(object16);
    if c19 then L194() else L195(object16);
  L225():
    doscore3 = force? doscore2;
    checkMissing(doscore3);
    c27 = `as.logical`(doscore3);
    c28 = `||`(c24, c27);
    goto L31(c28);
  L227():
    object27 = ld object;
    check L228() else D52();
  D52():
    deopt 194 [object27];
  L51(r159):
    st resdf = r159;
    sym27 = ldf c;
    base27 = ldf c in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L358() else L359();
  L193(dx12):
    st method = dx12;
    object19 = ld object;
    check L197() else D43();
  L194():
    dr10 = tryDispatchBuiltin.1("$", object16);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L196() else L195(dr10);
  L195(object18):
    r79 = `$`(object18, <sym method>);
    goto L193(r79);
  L228():
    object28 = force? object27;
    checkMissing(object28);
    c31 = `is.object`(object28);
    if c31 then L230() else L231(object28);
  L344():
    object51 = ld object;
    check L346() else D85();
  L345():
    r158 = dyn base26(<lang `$`(object, df.null)>, <sym resdf>, <lang `$`(object, df.residual)>);
    goto L51(r158);
  D43():
    deopt 159 [object19];
  D85():
    deopt 322 [object51];
  L52(r164):
    st resdev = r164;
    data_frame = ldf `data.frame`;
    check L372() else D93();
  L196():
    dx11 = getTryDispatchBuiltinValue(dr10);
    goto L193(dx11);
  L197():
    object20 = force? object19;
    checkMissing(object20);
    c20 = `is.object`(object20);
    if c20 then L199() else L200(object20);
  L229(dx22):
    st method = dx22;
    object31 = ld object;
    check L233() else D53();
  L230():
    dr20 = tryDispatchBuiltin.1("$", object28);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L232() else L231(dr20);
  L231(object30):
    r94 = `$`(object30, <sym method>);
    goto L229(r94);
  L346():
    object52 = force? object51;
    checkMissing(object52);
    c55 = `is.object`(object52);
    if c55 then L348() else L349(object52);
  L358():
    object59 = ld object;
    check L360() else D89();
  L359():
    r163 = dyn base27(<lang `$`(object, null.deviance)>, <sym resdev>, <lang `$`(object, deviance)>);
    goto L52(r163);
  D53():
    deopt 198 [object31];
  D89():
    deopt 335 [object59];
  D93():
    deopt 347 [];
  L198(dx14):
    st y = dx14;
    eval = ldf eval;
    check L202() else D44();
  L199():
    dr12 = tryDispatchBuiltin.1("$", object20);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L201() else L200(dr12);
  L200(object22):
    r80 = `$`(object22, <sym y>);
    goto L198(r80);
  L232():
    dx21 = getTryDispatchBuiltinValue(dr20);
    goto L229(dx21);
  L233():
    object32 = force? object31;
    checkMissing(object32);
    c32 = `is.object`(object32);
    if c32 then L235() else L236(object32);
  L347(dx71):
    resdf2 = ld resdf;
    check L351() else D86();
  L348():
    dr54 = tryDispatchBuiltin.1("$", object52);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L350() else L349(dr54);
  L349(object54):
    r160 = `$`(object54, <sym df.null>);
    goto L347(r160);
  L360():
    object60 = force? object59;
    checkMissing(object60);
    c58 = `is.object`(object60);
    if c58 then L362() else L363(object60);
  L372():
    p17 = prom<V +>{
      sym28 = ldf c;
      base28 = ldf c in base;
      guard28 = `==`.4(sym28, base28);
      if guard28 then L1() else L2();
    L0(r169):
      return r169;
    L1():
      diff = ldf diff;
      p16 = prom<V +>{
        resdf4 = ld resdf;
        resdf5 = force? resdf4;
        checkMissing(resdf5);
        return resdf5;
      };
      r171 = dyn diff(p16);
      r172 = `-`(<missing>, r171);
      c61 = ldf c in base;
      r173 = dyn c61(NA_LGL, r172);
      goto L0(r173);
    L2():
      r168 = dyn base28(NA_LGL, <lang `-`(diff(resdf))>);
      goto L0(r168);
    };
    p20 = prom<V +>{
      sym29 = ldf c;
      base29 = ldf c in base;
      guard29 = `==`.4(sym29, base29);
      if guard29 then L1() else L2();
    L0(r176):
      return r176;
    L1():
      pmax = ldf pmax;
      p19 = prom<V +>{
        diff1 = ldf diff;
        p18 = prom<V +>{
          resdev4 = ld resdev;
          resdev5 = force? resdev4;
          checkMissing(resdev5);
          return resdev5;
        };
        r178 = dyn diff1(p18);
        r179 = `-`(<missing>, r178);
        return r179;
      };
      r181 = dyn pmax(0.0, p19);
      c62 = ldf c in base;
      r182 = dyn c62(NA_LGL, r181);
      goto L0(r182);
    L2():
      r175 = dyn base29(NA_LGL, <lang pmax(0.0, `-`(diff(resdev)))>);
      goto L0(r175);
    };
    p21 = prom<V +>{
      resdf6 = ld resdf;
      resdf7 = force? resdf6;
      checkMissing(resdf7);
      return resdf7;
    };
    p22 = prom<V +>{
      resdev6 = ld resdev;
      resdev7 = force? resdev6;
      checkMissing(resdev7);
      return resdev7;
    };
    r186 = dyn data_frame(p17, p20, p21, p22);
    check L373() else D94();
  D44():
    deopt 164 [];
  D86():
    deopt 325 [resdf2];
  D94():
    deopt 352 [r186];
  L201():
    dx13 = getTryDispatchBuiltinValue(dr12);
    goto L198(dx13);
  L202():
    p11 = prom<V +>{
      sym16 = ldf call;
      base16 = ldf call in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L1() else L2();
    L0(r82):
      return r82;
    L1():
      call = ldf call in base;
      r83 = dyn call(<lang if(is.function(method), "method", method)>, <lang `[`(x, , `==`(varseq, 0.0), drop=FALSE)>, <sym y>, <lang `$`(object, prior.weights)>, <lang `$`(object, start)>, <lang `$`(object, offset)>, <lang `$`(object, family)>, <lang `$`(object, control)>);
      goto L0(r83);
    L2():
      r81 = dyn base16[, x, y, weights, start, offset, family, control](<lang if(is.function(method), "method", method)>, <lang `[`(x, , `==`(varseq, 0.0), drop=FALSE)>, <sym y>, <lang `$`(object, prior.weights)>, <lang `$`(object, start)>, <lang `$`(object, offset)>, <lang `$`(object, family)>, <lang `$`(object, control)>);
      goto L0(r81);
    };
    r85 = dyn eval(p11);
    check L203() else D45();
  L234(dx24):
    st y = dx24;
    sym18 = ldf `is.null`;
    base18 = ldf `is.null` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L238() else L239();
  L235():
    dr22 = tryDispatchBuiltin.1("$", object32);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L237() else L236(dr22);
  L236(object34):
    r95 = `$`(object34, <sym y>);
    goto L234(r95);
  L350():
    dx70 = getTryDispatchBuiltinValue(dr54);
    goto L347(dx70);
  L351():
    resdf3 = force? resdf2;
    checkMissing(resdf3);
    object55 = ld object;
    check L352() else D87();
  L361(dx75):
    resdev2 = ld resdev;
    check L365() else D90();
  L362():
    dr58 = tryDispatchBuiltin.1("$", object60);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L364() else L363(dr58);
  L363(object62):
    r165 = `$`(object62, <sym null.deviance>);
    goto L361(r165);
  L373():
    st table = r186;
    sym30 = ldf attr;
    base30 = ldf attr in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L374() else L375();
  D45():
    deopt 166 [r85];
  D87():
    deopt 327 [object55];
  D90():
    deopt 338 [resdev2];
  L33(r97):
    c34 = `as.logical`(r97);
    if c34 then L241() else L34();
  L53(r188):
    st tl = r188;
    sym31 = ldf length;
    base31 = ldf length in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L382() else L383();
  L203():
    st fit = r85;
    fit = ld fit;
    check L204() else D46();
  L237():
    dx23 = getTryDispatchBuiltinValue(dr22);
    goto L234(dx23);
  L238():
    y = ld y;
    check L240() else D54();
  L239():
    r96 = dyn base18(<sym y>);
    goto L33(r96);
  L352():
    object56 = force? object55;
    checkMissing(object56);
    c56 = `is.object`(object56);
    if c56 then L354() else L355(object56);
  L364():
    dx74 = getTryDispatchBuiltinValue(dr58);
    goto L361(dx74);
  L365():
    resdev3 = force? resdev2;
    checkMissing(resdev3);
    object63 = ld object;
    check L366() else D91();
  L374():
    object67 = ld object;
    check L376() else D95();
  L375():
    r187 = dyn base30(<lang `$`(object, terms)>, "term.labels");
    goto L53(r187);
  D46():
    deopt 168 [fit];
  D54():
    deopt 203 [y];
  D91():
    deopt 340 [object63];
  D95():
    deopt 356 [object67];
  L34():
    goto L35();
  L35():
    sym19 = ldf seq_len;
    base19 = ldf seq_len in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L269() else L270();
  L54(r192):
    r194 = `==`(r192, 0);
    c64 = `as.logical`(r194);
    if c64 then L386() else L55();
  L204():
    fit1 = force? fit;
    checkMissing(fit1);
    c21 = `is.object`(fit1);
    if c21 then L206() else L207(fit1);
  L240():
    y1 = force? y;
    checkMissing(y1);
    c33 = `==`(y1, NULL);
    goto L33(c33);
  L241():
    object35 = ld object;
    check L242() else D55();
  L353(dx73):
    c57 = ldf c in base;
    r162 = dyn c57(dx71, resdf3, dx73);
    check L357() else D88();
  L354():
    dr56 = tryDispatchBuiltin.1("$", object56);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L356() else L355(dr56);
  L355(object58):
    r161 = `$`(object58, <sym df.residual>);
    goto L353(r161);
  L366():
    object64 = force? object63;
    checkMissing(object64);
    c59 = `is.object`(object64);
    if c59 then L368() else L369(object64);
  L376():
    object68 = force? object67;
    checkMissing(object68);
    c63 = `is.object`(object68);
    if c63 then L378() else L379(object68);
  L382():
    tl = ld tl;
    check L384() else D97();
  L383():
    r191 = dyn base31(<sym tl>);
    goto L54(r191);
  D55():
    deopt 206 [object35];
  D88():
    deopt 331 [r162];
  D97():
    deopt 365 [tl];
  L36(r109):
    s = toForSeq(r109);
    l = length(s);
    i = 0;
    goto L40(i);
  L55():
    goto L57();
  L57():
    sym32 = ldf list;
    base32 = ldf list in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L392() else L393();
  L205(dx16):
    st r = dx16;
    fit4 = ld fit;
    check L209() else D47();
  L206():
    dr14 = tryDispatchBuiltin.1("$", fit1);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L208() else L207(dr14);
  L207(fit3):
    r86 = `$`(fit3, <sym residuals>);
    goto L205(r86);
  L242():
    object36 = force? object35;
    checkMissing(object36);
    c35 = `is.object`(object36);
    if c35 then L244() else L245(object36);
  L269():
    sym20 = ldf max;
    base20 = ldf max in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L271() else L272();
  L270():
    r108 = dyn base19(<lang max(`-`(nvars, 1), 0.0)>);
    goto L36(r108);
  L356():
    dx72 = getTryDispatchBuiltinValue(dr56);
    goto L353(dx72);
  L357():
    goto L51(r162);
  L367(dx77):
    c60 = ldf c in base;
    r167 = dyn c60(dx75, resdev3, dx77);
    check L371() else D92();
  L368():
    dr60 = tryDispatchBuiltin.1("$", object64);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L370() else L369(dr60);
  L369(object66):
    r166 = `$`(object66, <sym deviance>);
    goto L367(r166);
  L377(dx79):
    attr3 = ldf attr in base;
    r190 = dyn attr3(dx79, "term.labels");
    check L381() else D96();
  L378():
    dr62 = tryDispatchBuiltin.1("$", object68);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L380() else L379(dr62);
  L379(object70):
    r189 = `$`(object70, <sym terms>);
    goto L377(r189);
  L384():
    tl1 = force? tl;
    checkMissing(tl1);
    length2 = ldf length in base;
    r193 = dyn length2(tl1);
    check L385() else D98();
  L386():
    table = ld table;
    check L387() else D99();
  D47():
    deopt 172 [fit4];
  D92():
    deopt 344 [r167];
  D96():
    deopt 361 [r190];
  D98():
    deopt 368 [r193];
  D99():
    deopt 371 [table];
  L37(r111):
    r114 = seq_len(r111);
    goto L36(r114);
  L40(i1):
    i2 = `+`.1(i1, 1);
    c40 = `<`.1(l, i2);
    if c40 then L39() else L46();
  L58(r197):
    l7 = ld table;
    dimnames__ = ldf `dimnames<-`;
    check L402() else D104();
  L208():
    dx15 = getTryDispatchBuiltinValue(dr14);
    goto L205(dx15);
  L209():
    fit5 = force? fit4;
    checkMissing(fit5);
    c22 = `is.object`(fit5);
    if c22 then L211() else L212(fit5);
  L243(dx26):
    c36 = `is.object`(dx26);
    if c36 then L248() else L249(dx26);
  L244():
    dr24 = tryDispatchBuiltin.1("$", object36);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L246() else L245(dr24);
  L245(object38):
    r98 = `$`(object38, <sym family>);
    goto L243(r98);
  L271():
    nvars4 = ld nvars;
    check L273() else D61();
  L272():
    r110 = dyn base20(<lang `-`(nvars, 1)>, 0.0);
    goto L37(r110);
  L370():
    dx76 = getTryDispatchBuiltinValue(dr60);
    goto L367(dx76);
  L371():
    goto L52(r167);
  L380():
    dx78 = getTryDispatchBuiltinValue(dr62);
    goto L377(dx78);
  L381():
    goto L53(r190);
  L385():
    goto L54(r193);
  L387():
    table1 = force? table;
    checkMissing(table1);
    c65 = `is.object`(table1);
    if c65 then L388() else L389();
  L392():
    sym33 = ldf c;
    base33 = ldf c in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L394() else L395();
  L393():
    r196 = dyn base32(<lang c("NULL", tl)>, <lang c("Df", "Deviance", "Resid. Df", "Resid. Dev")>);
    goto L58(r196);
  D61():
    deopt 231 [nvars4];
  D104():
    deopt 402 [r197, l7, r197];
  L39():
    doscore6 = ld doscore;
    check L324() else D79();
  L46():
    x2 = `[[`(s, i2, NULL, TRUE);
    st i = x2;
    eval1 = ldf eval;
    check L275() else D63();
  L56(dx81):
    st table = dx81;
    goto L57();
  L59(r199):
    sym34 = ldf c;
    base34 = ldf c in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L398() else L399();
  L210(dx18):
    st w = dx18;
    sym17 = ldf attr;
    base17 = ldf attr in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L214() else L215();
  L211():
    dr16 = tryDispatchBuiltin.1("$", fit5);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L213() else L212(dr16);
  L212(fit7):
    r87 = `$`(fit7, <sym weights>);
    goto L210(r87);
  L246():
    dx25 = getTryDispatchBuiltinValue(dr24);
    goto L243(dx25);
  L247(dx30):
    st `mu.eta` = dx30;
    object39 = ld object;
    check L251() else D56();
  L248():
    dr26 = tryDispatchBuiltin.1("$", dx26);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L250() else L249(dr26);
  L249(dx28):
    r99 = `$`(dx28, <sym mu.eta>);
    goto L247(r99);
  L273():
    nvars5 = force? nvars4;
    checkMissing(nvars5);
    r112 = `-`(nvars5, 1);
    max1 = ldf max in base;
    r113 = dyn max1(r112, 0.0);
    check L274() else D62();
  L388():
    dr64 = tryDispatchBuiltin.1("[", table1);
    dc32 = getTryDispatchBuiltinDispatched(dr64);
    if dc32 then L390() else L389();
  L389():
    __4 = ldf `[` in base;
    r195 = dyn __4(table1, 1.0, <missing>, FALSE);
    goto L56(r195);
  L394():
    tl2 = ld tl;
    check L396() else D100();
  L395():
    r198 = dyn base33("NULL", <sym tl>);
    goto L59(r198);
  L402():
    r205 = dyn dimnames__(l7, NULL, r197);
    check L403() else D105();
  D56():
    deopt 211 [object39];
  D62():
    deopt 237 [r113];
  D63():
    deopt 242 [i2];
  D79():
    deopt 298 [doscore6];
  D100():
    deopt 387 [tl2];
  D105():
    deopt 404 [r197, r205];
  L29(r89):
    st icpt = r89;
    goto L30();
  L60(r202):
    list2 = ldf list in base;
    r204 = dyn list2(r199, r202);
    check L401() else D103();
  L213():
    dx17 = getTryDispatchBuiltinValue(dr16);
    goto L210(dx17);
  L214():
    object23 = ld object;
    check L216() else D48();
  L215():
    r88 = dyn base17(<lang `$`(object, terms)>, "intercept");
    goto L29(r88);
  L250():
    dx29 = getTryDispatchBuiltinValue(dr26);
    goto L247(dx29);
  L251():
    object40 = force? object39;
    checkMissing(object40);
    c37 = `is.object`(object40);
    if c37 then L253() else L254(object40);
  L274():
    goto L37(r113);
  L275():
    p13 = prom<V +>{
      sym21 = ldf call;
      base21 = ldf call in base;
      guard21 = `==`.4(sym21, base21);
      if guard21 then L1() else L2();
    L0(r116):
      return r116;
    L1():
      call1 = ldf call in base;
      r117 = dyn call1(<lang if(is.function(method), "method", method)>, <lang `[`(x, , `<=`(varseq, i), drop=FALSE)>, <sym y>, <lang `$`(object, prior.weights)>, <lang `$`(object, start)>, <lang `$`(object, offset)>, <lang `$`(object, family)>, <lang `$`(object, control)>);
      goto L0(r117);
    L2():
      r115 = dyn base21[, x, y, weights, start, offset, family, control](<lang if(is.function(method), "method", method)>, <lang `[`(x, , `<=`(varseq, i), drop=FALSE)>, <sym y>, <lang `$`(object, prior.weights)>, <lang `$`(object, start)>, <lang `$`(object, offset)>, <lang `$`(object, family)>, <lang `$`(object, control)>);
      goto L0(r115);
    };
    r119 = dyn eval1(p13);
    check L276() else D64();
  L324():
    doscore7 = force? doscore6;
    checkMissing(doscore7);
    c51 = `as.logical`(doscore7);
    if c51 then L325() else L47();
  L390():
    dx80 = getTryDispatchBuiltinValue(dr64);
    goto L56(dx80);
  L396():
    tl3 = force? tl2;
    checkMissing(tl3);
    c66 = ldf c in base;
    r200 = dyn c66("NULL", tl3);
    check L397() else D101();
  L398():
    c67 = ldf c in base;
    r203 = dyn c67("Df", "Deviance", "Resid. Df", "Resid. Dev");
    check L400() else D102();
  L399():
    r201 = dyn base34("Df", "Deviance", "Resid. Df", "Resid. Dev");
    goto L60(r201);
  L403():
    st table = r205;
    doscore8 = ld doscore;
    check L404() else D106();
  D48():
    deopt 178 [object23];
  D64():
    deopt 244 [i2, r119];
  D101():
    deopt 390 [r200];
  D102():
    deopt 398 [r203];
  D103():
    deopt 400 [r204];
  D106():
    deopt 406 [doscore8];
  L47():
    goto L49(NULL);
  L49(r156):
    goto L50();
  L216():
    object24 = force? object23;
    checkMissing(object24);
    c23 = `is.object`(object24);
    if c23 then L218() else L219(object24);
  L252(dx32):
    st eta = dx32;
    object43 = ld object;
    check L256() else D57();
  L253():
    dr28 = tryDispatchBuiltin.1("$", object40);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L255() else L254(dr28);
  L254(object42):
    r100 = `$`(object42, <sym linear.predictors>);
    goto L252(r100);
  L276():
    st fit = r119;
    doscore4 = ld doscore;
    check L277() else D65();
  L325():
    eval3 = ldf eval;
    check L326() else D80();
  L397():
    goto L59(r200);
  L400():
    goto L60(r203);
  L401():
    goto L58(r204);
  L404():
    doscore9 = force? doscore8;
    checkMissing(doscore9);
    c68 = `as.logical`(doscore9);
    if c68 then L405() else L61();
  D57():
    deopt 215 [object43];
  D65():
    deopt 246 [i2, doscore4];
  D80():
    deopt 301 [];
  L61():
    goto L62();
  L62():
    paste1 = ldf paste0;
    check L409() else D109();
  L217(dx20):
    attr2 = ldf attr in base;
    r91 = dyn attr2(dx20, "intercept");
    check L221() else D49();
  L218():
    dr18 = tryDispatchBuiltin.1("$", object24);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L220() else L219(dr18);
  L219(object26):
    r90 = `$`(object26, <sym terms>);
    goto L217(r90);
  L255():
    dx31 = getTryDispatchBuiltinValue(dr28);
    goto L252(dx31);
  L256():
    object44 = force? object43;
    checkMissing(object44);
    c38 = `is.object`(object44);
    if c38 then L258() else L259(object44);
  L277():
    doscore5 = force? doscore4;
    checkMissing(doscore5);
    c41 = `as.logical`(doscore5);
    if c41 then L278() else L41();
  L326():
    p15 = prom<V +>{
      sym25 = ldf call;
      base25 = ldf call in base;
      guard25 = `==`.4(sym25, base25);
      if guard25 then L1() else L2();
    L0(r144):
      return r144;
    L1():
      call3 = ldf call in base;
      r145 = dyn call3(<lang if(is.function(method), "method", method)>, <sym x>, <sym r>, <sym w>, <sym icpt>);
      goto L0(r145);
    L2():
      r143 = dyn base25[, x, y, weights, intercept](<lang if(is.function(method), "method", method)>, <sym x>, <sym r>, <sym w>, <sym icpt>);
      goto L0(r143);
    };
    r147 = dyn eval3(p15);
    check L327() else D81();
  L405():
    cbind = ldf cbind;
    check L406() else D107();
  D49():
    deopt 183 [r91];
  D81():
    deopt 303 [r147];
  D107():
    deopt 409 [];
  D109():
    deopt 418 [];
  L41():
    goto L43(i2);
  L43(i29):
    sym23 = ldf c;
    base23 = ldf c in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L306() else L307();
  L220():
    dx19 = getTryDispatchBuiltinValue(dr18);
    goto L217(dx19);
  L221():
    goto L29(r91);
  L257(dx34):
    object47 = ld object;
    check L261() else D58();
  L258():
    dr30 = tryDispatchBuiltin.1("$", object44);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L260() else L259(dr30);
  L259(object46):
    r101 = `$`(object46, <sym fitted.values>);
    goto L257(r101);
  L278():
    eval2 = ldf eval;
    check L279() else D66();
  L327():
    st zz = r147;
    zz8 = ld zz;
    check L328() else D82();
  L406():
    p23 = prom<V +>{
      table4 = ld table;
      table5 = force? table4;
      checkMissing(table5);
      return table5;
    };
    p24 = prom<V +>{
      sym35 = ldf c;
      base35 = ldf c in base;
      guard35 = `==`.4(sym35, base35);
      if guard35 then L1() else L2();
    L0(r208):
      return r208;
    L1():
      score = ld score;
      score1 = force? score;
      checkMissing(score1);
      c69 = ldf c in base;
      r209 = dyn c69(NA_LGL, score1);
      goto L0(r209);
    L2():
      r207 = dyn base35(NA_LGL, <sym score>);
      goto L0(r207);
    };
    r211 = dyn cbind[, Rao](p23, p24);
    check L407() else D108();
  L409():
    p25 = prom<V +>{
      object71 = ld object;
      object72 = force? object71;
      checkMissing(object72);
      c70 = `is.object`(object72);
      if c70 then L1() else L2(object72);
    L0(dx84):
      c71 = `is.object`(dx84);
      if c71 then L5() else L6(dx84);
    L1():
      dr66 = tryDispatchBuiltin.1("$", object72);
      dc33 = getTryDispatchBuiltinDispatched(dr66);
      if dc33 then L3() else L2(dr66);
    L2(object74):
      r213 = `$`(object74, <sym family>);
      goto L0(r213);
    L3():
      dx83 = getTryDispatchBuiltinValue(dr66);
      goto L0(dx83);
    L4(dx88):
      return dx88;
    L5():
      dr68 = tryDispatchBuiltin.1("$", dx84);
      dc34 = getTryDispatchBuiltinDispatched(dr68);
      if dc34 then L7() else L6(dr68);
    L6(dx86):
      r214 = `$`(dx86, <sym family>);
      goto L4(r214);
    L7():
      dx87 = getTryDispatchBuiltinValue(dr68);
      goto L4(dx87);
    };
    p26 = prom<V +>{
      object75 = ld object;
      object76 = force? object75;
      checkMissing(object76);
      c72 = `is.object`(object76);
      if c72 then L1() else L2(object76);
    L0(dx90):
      c73 = `is.object`(dx90);
      if c73 then L5() else L6(dx90);
    L1():
      dr70 = tryDispatchBuiltin.1("$", object76);
      dc35 = getTryDispatchBuiltinDispatched(dr70);
      if dc35 then L3() else L2(dr70);
    L2(object78):
      r216 = `$`(object78, <sym family>);
      goto L0(r216);
    L3():
      dx89 = getTryDispatchBuiltinValue(dr70);
      goto L0(dx89);
    L4(dx94):
      return dx94;
    L5():
      dr72 = tryDispatchBuiltin.1("$", dx90);
      dc36 = getTryDispatchBuiltinDispatched(dr72);
      if dc36 then L7() else L6(dr72);
    L6(dx92):
      r217 = `$`(dx92, <sym link>);
      goto L4(r217);
    L7():
      dx93 = getTryDispatchBuiltinValue(dr72);
      goto L4(dx93);
    };
    p27 = prom<V +>{
      sym36 = ldf `as.character`;
      base36 = ldf `as.character` in base;
      guard36 = `==`.4(sym36, base36);
      if guard36 then L3() else L4();
    L0(r220):
      c75 = `is.object`(r220);
      if c75 then L8() else L9(r220);
    L3():
      varlist = ld varlist;
      varlist1 = force? varlist;
      checkMissing(varlist1);
      c74 = `is.object`(varlist1);
      if c74 then L5() else L6(varlist1);
    L4():
      r219 = dyn base36(<lang `[`(varlist, `-`(1))>);
      goto L0(r219);
    L1(dx96):
      as_character = ldf `as.character` in base;
      r222 = dyn as_character(dx96);
      goto L0(r222);
    L2(dx98):
      return dx98;
    L5():
      dr74 = tryDispatchBuiltin.1("[", varlist1);
      dc37 = getTryDispatchBuiltinDispatched(dr74);
      if dc37 then L7() else L6(dr74);
    L6(varlist3):
      __5 = ldf `[` in base;
      r221 = dyn __5(varlist3, -1);
      goto L1(r221);
    L8():
      dr76 = tryDispatchBuiltin.1("[", r220);
      dc38 = getTryDispatchBuiltinDispatched(dr76);
      if dc38 then L10() else L9(dr76);
    L9(r224):
      __6 = ldf `[` in base;
      r225 = dyn __6(r224, 1);
      goto L2(r225);
    L7():
      dx95 = getTryDispatchBuiltinValue(dr74);
      goto L1(dx95);
    L10():
      dx97 = getTryDispatchBuiltinValue(dr76);
      goto L2(dx97);
    };
    r227 = dyn paste1("Analysis of Deviance Table", "\n\nModel: ", p25, ", link: ", p26, "\n\nResponse: ", p27, "\n\nTerms added sequentially (first to last)\n\n");
    check L410() else D110();
  D58():
    deopt 217 [dx34, object47];
  D66():
    deopt 249 [i2];
  D82():
    deopt 305 [zz8];
  D108():
    deopt 413 [r211];
  D110():
    deopt 427 [r227];
  L44(i32, r136):
    st resdev = r136;
    sym24 = ldf c;
    base24 = ldf c in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L315() else L316();
  L260():
    dx33 = getTryDispatchBuiltinValue(dr30);
    goto L257(dx33);
  L261():
    object48 = force? object47;
    checkMissing(object48);
    c39 = `is.object`(object48);
    if c39 then L263() else L264(dx34, object48);
  L279():
    p14 = prom<V +>{
      sym22 = ldf call;
      base22 = ldf call in base;
      guard22 = `==`.4(sym22, base22);
      if guard22 then L1() else L2();
    L0(r121):
      return r121;
    L1():
      call2 = ldf call in base;
      r122 = dyn call2(<lang if(is.function(method), "method", method)>, <lang `[`(x, , `<=`(varseq, i), drop=FALSE)>, <sym r>, <sym w>, <sym icpt>);
      goto L0(r122);
    L2():
      r120 = dyn base22[, x, y, weights, intercept](<lang if(is.function(method), "method", method)>, <lang `[`(x, , `<=`(varseq, i), drop=FALSE)>, <sym r>, <sym w>, <sym icpt>);
      goto L0(r120);
    };
    r124 = dyn eval2(p14);
    check L280() else D67();
  L306():
    resdev = ld resdev;
    check L308() else D73();
  L307():
    r135 = dyn base23(<sym resdev>, <lang `$`(fit, deviance)>);
    goto L44(i29, r135);
  L328():
    zz9 = force? zz8;
    checkMissing(zz9);
    c52 = `is.object`(zz9);
    if c52 then L330() else L331(zz9);
  L407():
    st table = r211;
    goto L62();
  L410():
    st title = r227;
    object79 = ld object;
    check L411() else D111();
  D67():
    deopt 251 [i2, r124];
  D73():
    deopt 276 [i29, resdev];
  D111():
    deopt 429 [object79];
  L45(i39, r140):
    st resdf = r140;
    goto L40(i39);
  L262(dx39, dx40):
    mu_eta = ldf `mu.eta`;
    check L266() else D59();
  L263():
    dr32 = tryDispatchBuiltin.1("$", object48);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L265() else L264(dx34, dr32);
  L264(dx36, object50):
    r102 = `$`(object50, <sym residuals>);
    goto L262(dx36, r102);
  L280():
    st zz = r124;
    zz = ld zz;
    check L281() else D68();
  L308():
    resdev1 = force? resdev;
    checkMissing(resdev1);
    fit16 = ld fit;
    check L309() else D74();
  L315():
    resdf = ld resdf;
    check L317() else D76();
  L316():
    r139 = dyn base24(<sym resdf>, <lang `$`(fit, df.residual)>);
    goto L45(i32, r139);
  L329(dx61):
    zz12 = ld zz;
    check L333() else D83();
  L330():
    dr48 = tryDispatchBuiltin.1("$", zz9);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L332() else L331(dr48);
  L331(zz11):
    r148 = `$`(zz11, <sym null.deviance>);
    goto L329(r148);
  L411():
    object80 = force? object79;
    checkMissing(object80);
    c76 = `is.object`(object80);
    if c76 then L413() else L414(object80);
  D59():
    deopt 220 [dx39, dx40];
  D68():
    deopt 253 [i2, zz];
  D74():
    deopt 278 [i29, fit16];
  D76():
    deopt 286 [i32, resdf];
  D83():
    deopt 307 [dx61, zz12];
  L265():
    dx38 = getTryDispatchBuiltinValue(dr32);
    goto L262(dx34, dx38);
  L266():
    p12 = prom<V +>{
      eta = ld eta;
      eta1 = force? eta;
      checkMissing(eta1);
      return eta1;
    };
    r104 = dyn mu_eta(p12);
    check L267() else D60();
  L281():
    zz1 = force? zz;
    checkMissing(zz1);
    c42 = `is.object`(zz1);
    if c42 then L283() else L284(i2, zz1);
  L309():
    fit17 = force? fit16;
    checkMissing(fit17);
    c47 = `is.object`(fit17);
    if c47 then L311() else L312(i29, fit17);
  L317():
    resdf1 = force? resdf;
    checkMissing(resdf1);
    fit20 = ld fit;
    check L318() else D77();
  L332():
    dx60 = getTryDispatchBuiltinValue(dr48);
    goto L329(dx60);
  L333():
    zz13 = force? zz12;
    checkMissing(zz13);
    c53 = `is.object`(zz13);
    if c53 then L335() else L336(dx61, zz13);
  L412(dx100):
    st fam = dx100;
    sym37 = ldf `is.null`;
    base37 = ldf `is.null` in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L416() else L417();
  L413():
    dr78 = tryDispatchBuiltin.1("$", object80);
    dc39 = getTryDispatchBuiltinDispatched(dr78);
    if dc39 then L415() else L414(dr78);
  L414(object82):
    r228 = `$`(object82, <sym family>);
    goto L412(r228);
  D60():
    deopt 222 [dx39, dx40, r104];
  D77():
    deopt 288 [i32, fit20];
  L63(r230):
    c78 = `as.logical`(r230);
    if c78 then L419() else L64();
  L267():
    r105 = `*`(dx40, r104);
    r106 = `+`(dx39, r105);
    st y = r106;
    goto L35();
  L282(i10, dx42):
    zz4 = ld zz;
    check L286() else D69();
  L283():
    dr34 = tryDispatchBuiltin.1("$", zz1);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L285() else L284(i2, dr34);
  L284(i8, zz3):
    r125 = `$`(zz3, <sym null.deviance>);
    goto L282(i8, r125);
  L310(i36, dx57):
    c48 = ldf c in base;
    r138 = dyn c48(resdev1, dx57);
    check L314() else D75();
  L311():
    dr44 = tryDispatchBuiltin.1("$", fit17);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L313() else L312(i29, dr44);
  L312(i34, fit19):
    r137 = `$`(fit19, <sym deviance>);
    goto L310(i34, r137);
  L318():
    fit21 = force? fit20;
    checkMissing(fit21);
    c49 = `is.object`(fit21);
    if c49 then L320() else L321(i32, fit21);
  L334(dx66, dx67):
    r150 = `-`(dx66, dx67);
    l4 = ld score;
    c54 = `is.object`(l4);
    if c54 then L338() else L339(r150, l4);
  L335():
    dr50 = tryDispatchBuiltin.1("$", zz13);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L337() else L336(dx61, dr50);
  L336(dx63, zz15):
    r149 = `$`(zz15, <sym deviance>);
    goto L334(dx63, r149);
  L415():
    dx99 = getTryDispatchBuiltinValue(dr78);
    goto L412(dx99);
  L416():
    test7 = ld test;
    check L418() else D112();
  L417():
    r229 = dyn base37(<sym test>);
    goto L63(r229);
  D69():
    deopt 255 [i10, dx42, zz4];
  D75():
    deopt 282 [i36, r138];
  D112():
    deopt 434 [test7];
  L48(r154, dx69):
    st score = dx69;
    goto L49(r154);
  L64():
    goto L73();
  L73():
    isFALSE = ldf isFALSE;
    check L445() else D117();
  L285():
    dx41 = getTryDispatchBuiltinValue(dr34);
    goto L282(i2, dx41);
  L286():
    zz5 = force? zz4;
    checkMissing(zz5);
    c43 = `is.object`(zz5);
    if c43 then L288() else L289(i10, dx42, zz5);
  L313():
    dx56 = getTryDispatchBuiltinValue(dr44);
    goto L310(i29, dx56);
  L314():
    goto L44(i36, r138);
  L319(i43, dx59):
    c50 = ldf c in base;
    r142 = dyn c50(resdf1, dx59);
    check L323() else D78();
  L320():
    dr46 = tryDispatchBuiltin.1("$", fit21);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L322() else L321(i32, dr46);
  L321(i41, fit23):
    r141 = `$`(fit23, <sym df.residual>);
    goto L319(i41, r141);
  L337():
    dx65 = getTryDispatchBuiltinValue(dr50);
    goto L334(dx61, dx65);
  L338():
    dr52 = tryDispatchBuiltin.0("[<-", l4, r150);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L340() else L339(r150, dr52);
  L339(r152, l6):
    nvars6 = ld nvars;
    check L341() else D84();
  L418():
    test8 = force? test7;
    checkMissing(test8);
    c77 = `==`(test8, NULL);
    goto L63(c77);
  L419():
    sym38 = ldf `is.null`;
    base38 = ldf `is.null` in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L420() else L421();
  D78():
    deopt 292 [i43, r142];
  D84():
    deopt 312 [r152, l6, r150, nvars6];
  D117():
    deopt 467 [];
  L65(r232):
    r233 = `!`(r232);
    c80 = `as.logical`(r233);
    if c80 then L423() else L66();
  L287(i14, dx47, dx48):
    r127 = `-`(dx47, dx48);
    l1 = ld score;
    c44 = `is.object`(l1);
    if c44 then L291() else L292(i14, r127, l1);
  L288():
    dr36 = tryDispatchBuiltin.1("$", zz5);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L290() else L289(i10, dx42, dr36);
  L289(i12, dx44, zz7):
    r126 = `$`(zz7, <sym deviance>);
    goto L287(i12, dx44, r126);
  L322():
    dx58 = getTryDispatchBuiltinValue(dr46);
    goto L319(i32, dx58);
  L323():
    goto L45(i43, r142);
  L340():
    dx68 = getTryDispatchBuiltinValue(dr52);
    goto L48(r150, dx68);
  L341():
    nvars7 = force? nvars6;
    ___1 = ldf `[<-` in base;
    r155 = dyn ___1(l6, r150, nvars7);
    goto L48(r152, r155);
  L420():
    dispersion3 = ld dispersion;
    check L422() else D113();
  L421():
    r231 = dyn base38(<sym dispersion>);
    goto L65(r231);
  L445():
    p28 = prom<V +>{
      test9 = ld test;
      test10 = force? test9;
      checkMissing(test10);
      return test10;
    };
    r246 = dyn isFALSE(p28);
    check L446() else D118();
  D113():
    deopt 438 [dispersion3];
  D118():
    deopt 469 [r246];
  L42(i18, dx50):
    st score = dx50;
    fit8 = ld fit;
    check L295() else D71();
  L66():
    sym39 = ldf `is.null`;
    base39 = ldf `is.null` in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L425() else L426();
  L67(r234):
    st test = r234;
    goto L73();
  L290():
    dx46 = getTryDispatchBuiltinValue(dr36);
    goto L287(i10, dx42, dx46);
  L291():
    dr38 = tryDispatchBuiltin.0("[<-", l1, r127);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L293() else L292(i14, r127, dr38);
  L292(i16, r129, l3):
    i19 = ld i;
    check L294() else D70();
  L422():
    dispersion4 = force? dispersion3;
    checkMissing(dispersion4);
    c79 = `==`(dispersion4, NULL);
    goto L65(c79);
  L423():
    goto L67("Chisq");
  L446():
    r247 = `!`(r246);
    c86 = `as.logical`(r247);
    if c86 then L447() else L74();
  D70():
    deopt 260 [i16, r129, l3, r127, i19];
  D71():
    deopt 264 [i18, fit8];
  L68(r236):
    r238 = `!`(r236);
    c83 = `as.logical`(r238);
    if c83 then L432() else L69();
  L74():
    goto L88();
  L88():
    isFALSE1 = ldf isFALSE;
    check L500() else D132();
  L293():
    dx49 = getTryDispatchBuiltinValue(dr38);
    goto L42(i14, dx49);
  L294():
    i20 = force? i19;
    ___ = ldf `[<-` in base;
    r132 = dyn ___(l3, r127, i20);
    goto L42(i16, r132);
  L295():
    fit9 = force? fit8;
    checkMissing(fit9);
    c45 = `is.object`(fit9);
    if c45 then L297() else L298(i18, fit9);
  L425():
    fam = ld fam;
    check L427() else D114();
  L426():
    r235 = dyn base39(<lang `$`(fam, dispersion)>);
    goto L68(r235);
  L447():
    sym41 = ldf `is.null`;
    base41 = ldf `is.null` in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L448() else L449();
  D114():
    deopt 445 [fam];
  D132():
    deopt 527 [];
  L69():
    goto L67(FALSE);
  L75(r249):
    c88 = `as.logical`(r249);
    if c88 then L451() else L76();
  L296(i24, dx52):
    st r = dx52;
    fit12 = ld fit;
    check L300() else D72();
  L297():
    dr40 = tryDispatchBuiltin.1("$", fit9);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L299() else L298(i18, dr40);
  L298(i22, fit11):
    r133 = `$`(fit11, <sym residuals>);
    goto L296(i22, r133);
  L427():
    fam1 = force? fam;
    checkMissing(fam1);
    c81 = `is.object`(fam1);
    if c81 then L429() else L430(fam1);
  L432():
    sym40 = ldf `is.na`;
    base40 = ldf `is.na` in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L433() else L434();
  L448():
    dispersion5 = ld dispersion;
    check L450() else D119();
  L449():
    r248 = dyn base41(<sym dispersion>);
    goto L75(r248);
  L500():
    p32 = prom<V +>{
      test13 = ld test;
      test14 = force? test13;
      checkMissing(test14);
      return test14;
    };
    r276 = dyn isFALSE1(p32);
    check L501() else D133();
  D72():
    deopt 268 [i24, fit12];
  D119():
    deopt 472 [dispersion5];
  D133():
    deopt 529 [r276];
  L70(r240):
    c85 = `as.logical`(r240);
    if c85 then L441() else L71();
  L76():
    goto L77();
  L77():
    sym42 = ldf `is.null`;
    base42 = ldf `is.null` in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L459() else L460();
  L299():
    dx51 = getTryDispatchBuiltinValue(dr40);
    goto L296(i18, dx51);
  L300():
    fit13 = force? fit12;
    checkMissing(fit13);
    c46 = `is.object`(fit13);
    if c46 then L302() else L303(i24, fit13);
  L428(dx102):
    c82 = `==`(dx102, NULL);
    goto L68(c82);
  L429():
    dr80 = tryDispatchBuiltin.1("$", fam1);
    dc40 = getTryDispatchBuiltinDispatched(dr80);
    if dc40 then L431() else L430(dr80);
  L430(fam3):
    r237 = `$`(fam3, <sym dispersion>);
    goto L428(r237);
  L433():
    fam4 = ld fam;
    check L435() else D115();
  L434():
    r239 = dyn base40(<lang `$`(fam, dispersion)>);
    goto L70(r239);
  L450():
    dispersion6 = force? dispersion5;
    checkMissing(dispersion6);
    c87 = `==`(dispersion6, NULL);
    goto L75(c87);
  L451():
    summary = ldf summary;
    check L452() else D120();
  L501():
    r277 = `!`(r276);
    c105 = `as.logical`(r277);
    if c105 then L502() else L89();
  D115():
    deopt 452 [fam4];
  D120():
    deopt 476 [];
  L71():
    goto L72("Chisq");
  L72(r243):
    goto L67(r243);
  L78(r256):
    c92 = `as.logical`(r256);
    if c92 then L466() else L79();
  L89():
    goto L96();
  L96():
    structure = ldf structure;
    check L528() else D146();
  L301(i28, dx54):
    st w = dx54;
    goto L43(i28);
  L302():
    dr42 = tryDispatchBuiltin.1("$", fit13);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L304() else L303(i24, dr42);
  L303(i26, fit15):
    r134 = `$`(fit15, <sym weights>);
    goto L301(i26, r134);
  L431():
    dx101 = getTryDispatchBuiltinValue(dr80);
    goto L428(dx101);
  L435():
    fam5 = force? fam4;
    checkMissing(fam5);
    c84 = `is.object`(fam5);
    if c84 then L437() else L438(fam5);
  L441():
    goto L72("F");
  L452():
    p29 = prom<V +>{
      object83 = ld object;
      object84 = force? object83;
      checkMissing(object84);
      return object84;
    };
    r251 = dyn summary(p29);
    check L453() else D121();
  L459():
    fam8 = ld fam;
    check L461() else D122();
  L460():
    r255 = dyn base42(<lang `$`(fam, dispersion)>);
    goto L78(r255);
  L502():
    isTRUE3 = ldf isTRUE;
    check L503() else D134();
  D121():
    deopt 478 [r251];
  D122():
    deopt 484 [fam8];
  D134():
    deopt 532 [];
  D146():
    deopt 582 [];
  L79():
    sym43 = ldf `is.na`;
    base43 = ldf `is.na` in base;
    guard43 = `==`.4(sym43, base43);
    if guard43 then L477() else L478();
  L82(r263):
    st `df.dispersion` = r263;
    isTRUE2 = ldf isTRUE;
    check L492() else D129();
  L304():
    dx53 = getTryDispatchBuiltinValue(dr42);
    goto L301(i24, dx53);
  L436(dx104):
    is_na = ldf `is.na` in base;
    r242 = dyn is_na(dx104);
    check L440() else D116();
  L437():
    dr82 = tryDispatchBuiltin.1("$", fam5);
    dc41 = getTryDispatchBuiltinDispatched(dr82);
    if dc41 then L439() else L438(dr82);
  L438(fam7):
    r241 = `$`(fam7, <sym dispersion>);
    goto L436(r241);
  L453():
    c89 = `is.object`(r251);
    if c89 then L455() else L456(r251);
  L461():
    fam9 = force? fam8;
    checkMissing(fam9);
    c90 = `is.object`(fam9);
    if c90 then L463() else L464(fam9);
  L466():
    isTRUE1 = ldf isTRUE;
    check L467() else D123();
  L503():
    p33 = prom<V +>{
      test15 = ld test;
      test16 = force? test15;
      checkMissing(test16);
      r278 = `==`(test16, "F");
      return r278;
    };
    r280 = dyn isTRUE3(p33);
    check L504() else D135();
  L528():
    p42 = prom<V +>{
      table8 = ld table;
      table9 = force? table8;
      checkMissing(table9);
      return table9;
    };
    p43 = prom<V +>{
      title = ld title;
      title1 = force? title;
      checkMissing(title1);
      return title1;
    };
    p44 = prom<V +>{
      sym44 = ldf c;
      base44 = ldf c in base;
      guard44 = `==`.4(sym44, base44);
      if guard44 then L1() else L2();
    L0(r304):
      return r304;
    L1():
      c121 = ldf c in base;
      r305 = dyn c121("anova", "data.frame");
      goto L0(r305);
    L2():
      r303 = dyn base44("anova", "data.frame");
      goto L0(r303);
    };
    r307 = dyn structure[, heading, class](p42, p43, p44);
    check L529() else D147();
  D116():
    deopt 456 [r242];
  D123():
    deopt 489 [];
  D129():
    deopt 511 [];
  D135():
    deopt 534 [r280];
  D147():
    deopt 588 [r307];
  L83(r265):
    c96 = `as.logical`(r265);
    if c96 then L485() else L84();
  L439():
    dx103 = getTryDispatchBuiltinValue(dr82);
    goto L436(dx103);
  L440():
    goto L70(r242);
  L454(dx106):
    st dispersion = dx106;
    goto L77();
  L455():
    dr84 = tryDispatchBuiltin.1("$", r251);
    dc42 = getTryDispatchBuiltinDispatched(dr84);
    if dc42 then L457() else L456(dr84);
  L456(r253):
    r254 = `$`(r253, <sym dispersion>);
    goto L454(r254);
  L462(dx109):
    c91 = `==`(dx109, NULL);
    goto L78(c91);
  L463():
    dr86 = tryDispatchBuiltin.1("$", fam9);
    dc43 = getTryDispatchBuiltinDispatched(dr86);
    if dc43 then L465() else L464(dr86);
  L464(fam11):
    r257 = `$`(fam11, <sym dispersion>);
    goto L462(r257);
  L467():
    p30 = prom<V +>{
      dispersion7 = ld dispersion;
      dispersion8 = force? dispersion7;
      checkMissing(dispersion8);
      r258 = `==`(dispersion8, 1.0);
      return r258;
    };
    r260 = dyn isTRUE1(p30);
    check L468() else D124();
  L477():
    fam12 = ld fam;
    check L479() else D126();
  L478():
    r264 = dyn base43(<lang `$`(fam, dispersion)>);
    goto L83(r264);
  L492():
    p31 = prom<V +>{
      test11 = ld test;
      test12 = force? test11;
      checkMissing(test12);
      r269 = `==`(test12, "F");
      return r269;
    };
    r271 = dyn isTRUE2(p31);
    check L493() else D130();
  L504():
    c106 = `as.logical`(r280);
    if c106 then L505() else L90(c106);
  L529():
    popenv;
    return r307;
  D124():
    deopt 491 [r260];
  D126():
    deopt 499 [fam12];
  D130():
    deopt 513 [r271];
  L84():
    goto L82(+Infinity);
  L90(c108):
    c112 = `as.logical`(c108);
    if c112 then L508() else L91();
  L457():
    dx105 = getTryDispatchBuiltinValue(dr84);
    goto L454(dx105);
  L465():
    dx108 = getTryDispatchBuiltinValue(dr86);
    goto L462(dx108);
  L468():
    c93 = `as.logical`(r260);
    if c93 then L469() else L80();
  L479():
    fam13 = force? fam12;
    checkMissing(fam13);
    c95 = `is.object`(fam13);
    if c95 then L481() else L482(fam13);
  L485():
    object89 = ld object;
    check L486() else D128();
  L493():
    c98 = `as.logical`(r271);
    if c98 then L494() else L85(c98);
  L505():
    df_dispersion2 = ld `df.dispersion`;
    check L506() else D136();
  D128():
    deopt 504 [object89];
  D136():
    deopt 535 [c106, df_dispersion2];
  L80():
    object85 = ld object;
    check L471() else D125();
  L81(r261):
    goto L82(r261);
  L85(c100):
    c104 = `as.logical`(c100);
    if c104 then L497() else L86();
  L91():
    goto L95();
  L95():
    stat_anova = ldf `stat.anova`;
    check L525() else D144();
  L469():
    goto L81(+Infinity);
  L480(dx113):
    is_na1 = ldf `is.na` in base;
    r267 = dyn is_na1(dx113);
    check L484() else D127();
  L481():
    dr90 = tryDispatchBuiltin.1("$", fam13);
    dc45 = getTryDispatchBuiltinDispatched(dr90);
    if dc45 then L483() else L482(dr90);
  L482(fam15):
    r266 = `$`(fam15, <sym dispersion>);
    goto L480(r266);
  L486():
    object90 = force? object89;
    checkMissing(object90);
    c97 = `is.object`(object90);
    if c97 then L488() else L489(object90);
  L494():
    df_dispersion = ld `df.dispersion`;
    check L495() else D131();
  L506():
    df_dispersion3 = force? df_dispersion2;
    checkMissing(df_dispersion3);
    r281 = `==`(df_dispersion3, +Infinity);
    c109 = `as.logical`(r281);
    c110 = `&&`(c106, c109);
    goto L90(c110);
  L508():
    fam16 = ld fam;
    check L509() else D137();
  D125():
    deopt 494 [object85];
  D127():
    deopt 503 [r267];
  D131():
    deopt 514 [c98, df_dispersion];
  D137():
    deopt 540 [fam16];
  D144():
    deopt 566 [];
  L86():
    goto L87(NULL);
  L87(r273):
    goto L88();
  L471():
    object86 = force? object85;
    checkMissing(object86);
    c94 = `is.object`(object86);
    if c94 then L473() else L474(object86);
  L483():
    dx112 = getTryDispatchBuiltinValue(dr90);
    goto L480(dx112);
  L484():
    goto L83(r267);
  L487(dx115):
    goto L82(dx115);
  L488():
    dr92 = tryDispatchBuiltin.1("$", object90);
    dc46 = getTryDispatchBuiltinDispatched(dr92);
    if dc46 then L490() else L489(dr92);
  L489(object92):
    r268 = `$`(object92, <sym df.residual>);
    goto L487(r268);
  L495():
    df_dispersion1 = force? df_dispersion;
    checkMissing(df_dispersion1);
    r272 = `==`(df_dispersion1, 0.0);
    c101 = `as.logical`(r272);
    c102 = `&&`(c98, c101);
    goto L85(c102);
  L497():
    st test = FALSE;
    goto L87(FALSE);
  L509():
    fam17 = force? fam16;
    checkMissing(fam17);
    c113 = `is.object`(fam17);
    if c113 then L511() else L512(fam17);
  L525():
    p36 = prom<V +>{
      table6 = ld table;
      table7 = force? table6;
      checkMissing(table7);
      return table7;
    };
    p37 = prom<V +>{
      test17 = ld test;
      test18 = force? test17;
      checkMissing(test18);
      return test18;
    };
    p38 = prom<V +>{
      dispersion9 = ld dispersion;
      dispersion10 = force? dispersion9;
      checkMissing(dispersion10);
      return dispersion10;
    };
    p39 = prom<V +>{
      df_dispersion4 = ld `df.dispersion`;
      df_dispersion5 = force? df_dispersion4;
      checkMissing(df_dispersion5);
      return df_dispersion5;
    };
    p41 = prom<V +>{
      NROW = ldf NROW;
      p40 = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      r297 = dyn NROW(p40);
      return r297;
    };
    r299 = dyn stat_anova[table, test, scale, `df.scale`, n](p36, p37, p38, p39, p41);
    check L526() else D145();
  D145():
    deopt 577 [r299];
  L472(dx111):
    goto L81(dx111);
  L473():
    dr88 = tryDispatchBuiltin.1("$", object86);
    dc44 = getTryDispatchBuiltinDispatched(dr88);
    if dc44 then L475() else L474(dr88);
  L474(object88):
    r262 = `$`(object88, <sym df.residual>);
    goto L472(r262);
  L490():
    dx114 = getTryDispatchBuiltinValue(dr92);
    goto L487(dx114);
  L510(dx117):
    st fname = dx117;
    fname = ld fname;
    check L514() else D138();
  L511():
    dr94 = tryDispatchBuiltin.1("$", fam17);
    dc47 = getTryDispatchBuiltinDispatched(dr94);
    if dc47 then L513() else L512(dr94);
  L512(fam19):
    r282 = `$`(fam19, <sym family>);
    goto L510(r282);
  L526():
    st table = r299;
    goto L96();
  D138():
    deopt 544 [fname];
  L475():
    dx110 = getTryDispatchBuiltinValue(dr88);
    goto L472(dx110);
  L513():
    dx116 = getTryDispatchBuiltinValue(dr94);
    goto L510(dx116);
  L514():
    fname1 = force? fname;
    checkMissing(fname1);
    r283 = `==`(fname1, "binomial");
    c114 = `as.logical`(r283);
    if c114 then L92(c114) else L515();
  L92(c115):
    c120 = `as.logical`(c115);
    if c120 then L518() else L93();
  L515():
    fname2 = ld fname;
    check L516() else D139();
  D139():
    deopt 548 [c114, fname2];
  L93():
    warning2 = ldf warning;
    check L522() else D142();
  L94(r289):
    goto L95();
  L516():
    fname3 = force? fname2;
    checkMissing(fname3);
    r284 = `==`(fname3, "poisson");
    c117 = `as.logical`(r284);
    c118 = `||`(c114, c117);
    goto L92(c118);
  L518():
    warning1 = ldf warning;
    check L519() else D140();
  D140():
    deopt 554 [];
  D142():
    deopt 560 [];
  L519():
    p35 = prom<V +>{
      gettextf = ldf gettextf;
      p34 = prom<V +>{
        fname4 = ld fname;
        fname5 = force? fname4;
        checkMissing(fname5);
        return fname5;
      };
      r286 = dyn gettextf("using F test with a '%s' family is inappropriate", p34);
      return r286;
    };
    r288 = dyn warning1[, domain](p35, NA_LGL);
    check L520() else D141();
  L522():
    r290 = dyn warning2("using F test with a fixed dispersion is inappropriate");
    check L523() else D143();
  D141():
    deopt 558 [r288];
  D143():
    deopt 562 [r290];
  L520():
    goto L94(r288);
  L523():
    goto L94(r290);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg inherits:cls, reg r2:V |
    mkenv;
    st x = x;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    x1 = ld x;
    check L3() else D0();
  L2():
    r = dyn base(<sym x>, "glm");
    goto L0(r);
  D0():
    deopt 2 [x1];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(x2, "glm", FALSE);
    check L4() else D1();
  D1():
    deopt 7 [r2];
  L4():
    goto L0(r2);
  }
}