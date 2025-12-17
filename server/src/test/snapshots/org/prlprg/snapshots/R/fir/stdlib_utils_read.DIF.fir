fun main() {
  () -+> V { reg r:cls, reg system_file:cls, reg r1:V, reg read_DIF:cls, reg file_path:cls, reg udir:*, reg udir1:V, reg p:p(V +), reg r3:V, reg p1:p(V +), reg r5:V, reg read_csv:cls, reg file_path1:cls, reg udir2:*, reg udir3:V, reg p2:p(V +), reg r7:V, reg p3:p(V +), reg r9:V, reg stopifnot:cls, reg sym:cls, reg base:cls, reg guard:L, reg r10:V, reg r11:V, reg dd:*, reg dd1:V, reg dc:*, reg dc1:V, reg identical:cls, reg r12:V, reg p4:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg dd2:*, reg dd3:V, reg dim:cls, reg r16:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg r21:V, reg c:cls, reg r22:V, reg r23:V, reg p5:p(V +), reg r25:V |
    mkenv;
    r = clos inner1736833882;
    st `read.DIF` = r;
    system_file = ldf `system.file`;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn system_file[, package]("misc", "utils");
    check L1() else D1();
  D1():
    deopt 8 [r1];
  L1():
    st udir = r1;
    read_DIF = ldf `read.DIF`;
    check L2() else D2();
  D2():
    deopt 11 [];
  L2():
    p1 = prom<V +>{
      file_path = ldf `file.path`;
      p = prom<V +>{
        udir = ld udir;
        udir1 = force? udir;
        checkMissing(udir1);
        return udir1;
      };
      r3 = dyn file_path(p, "exDIF.dif");
      return r3;
    };
    r5 = dyn read_DIF[, header, transpose](p1, TRUE, TRUE);
    check L3() else D3();
  D3():
    deopt 17 [r5];
  L3():
    st dd = r5;
    read_csv = ldf `read.csv`;
    check L4() else D4();
  D4():
    deopt 20 [];
  L4():
    p3 = prom<V +>{
      file_path1 = ldf `file.path`;
      p2 = prom<V +>{
        udir2 = ld udir;
        udir3 = force? udir2;
        checkMissing(udir3);
        return udir3;
      };
      r7 = dyn file_path1(p2, "exDIF.csv");
      return r7;
    };
    r9 = dyn read_csv[, header](p3, TRUE);
    check L5() else D5();
  D5():
    deopt 24 [r9];
  L5():
    st dc = r9;
    stopifnot = ldf stopifnot;
    check L6() else D6();
  D6():
    deopt 27 [];
  L6():
    p4 = prom<V +>{
      sym = ldf identical;
      base = ldf identical in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r11):
      return r11;
    L1():
      dd = ld dd;
      dd1 = force? dd;
      checkMissing(dd1);
      dc = ld dc;
      dc1 = force? dc;
      checkMissing(dc1);
      identical = ldf identical in base;
      r12 = dyn identical(dd1, dc1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r12);
    L2():
      r10 = dyn base(<sym dd>, <sym dc>);
      goto L0(r10);
    };
    p5 = prom<V +>{
      sym1 = ldf dim;
      base1 = ldf dim in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r15):
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L4() else L5();
    L2():
      dd2 = ld dd;
      dd3 = force? dd2;
      checkMissing(dd3);
      dim = ldf dim in base;
      r16 = dyn dim(dd3);
      goto L0(r16);
    L3():
      r14 = dyn base1(<sym dd>);
      goto L0(r14);
    L1(r20, r21):
      r23 = `==`(r20, r21);
      return r23;
    L4():
      c = ldf c in base;
      r22 = dyn c(4.0, 2.0);
      goto L1(r15, r22);
    L5():
      r19 = dyn base2(4.0, 2.0);
      goto L1(r15, r19);
    };
    r25 = dyn stopifnot(p4, p5);
    check L7() else D7();
  D7():
    deopt 30 [r25];
  L7():
    popenv;
    return r25;
  }
}
fun inner1736833882(file, header, dec, numerals, `row.names`, `col.names`, `as.is`, `na.strings`, colClasses, nrows, skip, `check.names`, `blank.lines.skip`, stringsAsFactors, transpose, fileEncoding) {
  (reg file:*, reg header:*, reg dec:*, reg numerals:*, reg row_names:*, reg col_names:*, reg as_is:*, reg na_strings:*, reg colClasses:*, reg nrows:*, reg skip:*, reg check_names:*, reg blank_lines_skip:*, reg stringsAsFactors:*, reg transpose:*, reg fileEncoding:*) -+> V { var file:*, var header:*, reg header_isMissing:L, reg header_orDefault:*, var dec:*, reg dec_isMissing:L, reg dec_orDefault:*, var numerals:*, reg numerals_isMissing:L, reg numerals_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var `row.names`:*, var `col.names`:*, var `as.is`:*, reg as_is_isMissing:L, reg as_is_orDefault:*, reg stringsAsFactors1:*, reg stringsAsFactors2:V, reg r4:V, reg p1:p(V +), var `na.strings`:*, reg na_strings_isMissing:L, reg na_strings_orDefault:*, var colClasses:*, reg colClasses_isMissing:L, reg colClasses_orDefault:*, var nrows:*, reg nrows_isMissing:L, reg nrows_orDefault:*, reg p2:p(V +), var skip:*, reg skip_isMissing:L, reg skip_orDefault:*, var `check.names`:*, reg check_names_isMissing:L, reg check_names_orDefault:*, var `blank.lines.skip`:*, reg blank_lines_skip_isMissing:L, reg blank_lines_skip_orDefault:*, var stringsAsFactors:*, reg stringsAsFactors_isMissing:L, reg stringsAsFactors_orDefault:*, var transpose:*, reg transpose_isMissing:L, reg transpose_orDefault:*, var fileEncoding:*, reg fileEncoding_isMissing:L, reg fileEncoding_orDefault:*, reg _Platform:*, reg _Platform1:V, reg c1:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r7:V, reg r8:V, reg c2:L, reg c4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg c7:L, reg r10:V, reg file1:*, reg file2:V, reg identical:cls, reg r11:V, reg c8:L, reg c9:V, reg c11:L, reg _in_:cls, reg getClipboardFormats:cls, reg r12:V, reg p3:p(V +), reg r14:V, reg r15:V, reg c12:L, reg stop:cls, reg r16:V, reg readClipboard:cls, reg r18:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg r21:V, reg fileEncoding1:*, reg fileEncoding2:V, reg nzchar:cls, reg r22:V, reg c13:L, reg file3:cls, reg file4:*, reg file5:V, reg p4:p(V +), reg fileEncoding3:*, reg fileEncoding4:V, reg p5:p(V +), reg r25:V, reg readLines:cls, reg con:*, reg con1:V, reg p6:p(V +), reg r27:V, reg close:cls, reg con2:*, reg con3:V, reg p7:p(V +), reg r29:V, reg readLines1:cls, reg file6:*, reg file7:V, reg p8:p(V +), reg r31:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r32:V, reg r33:V, reg lines:*, reg lines1:V, reg length:cls, reg r34:V, reg r35:V, reg c14:L, reg stop1:cls, reg r36:V, reg topic:*, reg topic1:V, reg r38:V, reg c15:L, reg lines2:*, reg lines3:V, reg c16:L, reg lines5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i:*, reg i1:V, reg __:cls, reg r39:V, reg lines6:*, reg lines7:V, reg c17:L, reg lines9:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg i2:*, reg i3:V, reg r40:V, reg __1:cls, reg r41:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r42:V, reg r43:V, reg sub:cls, reg vnum:*, reg vnum1:V, reg p9:p(V +), reg r45:V, reg as_numeric:cls, reg r46:V, reg i4:*, reg i5:V, reg r47:V, reg topic2:*, reg topic3:V, reg r48:V, reg c18:L, reg transpose1:*, reg transpose2:V, reg c19:L, reg num:*, reg num1:V, reg num2:V, reg num3:*, reg num4:V, reg topic4:*, reg topic5:V, reg r49:V, reg c20:L, reg transpose3:*, reg transpose4:V, reg c21:L, reg num6:*, reg num7:V, reg num8:V, reg num9:*, reg num10:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r50:V, reg r51:V, reg nrow:*, reg nrow1:V, reg is_na:cls, reg r52:V, reg c22:L, reg c23:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r53:V, reg c27:L, reg r54:V, reg ncol:*, reg ncol1:V, reg is_na1:cls, reg r55:V, reg c28:L, reg c29:V, reg c31:L, reg stop2:cls, reg r56:V, reg matrix:cls, reg nrow2:*, reg nrow3:V, reg p10:p(V +), reg ncol2:*, reg ncol3:V, reg p11:p(V +), reg r60:V, reg matrix1:cls, reg nrow4:*, reg nrow5:V, reg p12:p(V +), reg ncol4:*, reg ncol5:V, reg p13:p(V +), reg r63:V, reg i6:*, reg i7:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r64:V, reg i10:V, reg r65:V, reg lines10:*, reg lines11:V, reg length1:cls, reg r66:V, reg r67:V, reg c32:L, reg lines12:*, reg lines13:V, reg c33:L, reg lines15:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg i11:*, reg i12:V, reg __2:cls, reg r68:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r69:V, reg r70:V, reg sub1:cls, reg typenum:*, reg typenum1:V, reg p14:p(V +), reg r72:V, reg as_numeric1:cls, reg r73:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r74:V, reg r75:V, reg sub2:cls, reg typenum2:*, reg typenum3:V, reg p15:p(V +), reg r77:V, reg as_numeric2:cls, reg r78:V, reg lines16:*, reg lines17:V, reg c34:L, reg lines19:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg i13:*, reg i14:V, reg r79:V, reg __3:cls, reg r80:V, reg i15:*, reg i16:V, reg r81:V, reg type:*, reg type1:V, reg r82:V, reg c35:L, reg stringval:*, reg stringval1:V, reg r83:V, reg c36:L, reg row:*, reg row1:V, reg r84:V, reg row2:*, reg row3:V, reg nrow6:*, reg nrow7:V, reg r85:V, reg c37:L, reg stop3:cls, reg r86:V, reg r88:V, reg stringval2:*, reg stringval3:V, reg r89:V, reg c38:L, reg stop4:cls, reg r90:V, reg col:*, reg col1:V, reg r92:V, reg col2:*, reg col3:V, reg ncol6:*, reg ncol7:V, reg r93:V, reg c39:L, reg stop5:cls, reg r94:V, reg type2:*, reg type3:V, reg r96:V, reg c40:L, reg l:*, reg c41:L, reg r98:S, reg l2:*, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg row4:*, reg row5:V, reg col4:*, reg col5:V, reg ___:cls, reg r101:V, reg stringval4:*, reg stringval5:V, reg r102:V, reg c42:L, reg num11:*, reg num12:V, reg l3:*, reg c43:L, reg num14:V, reg l5:*, reg dr12:V, reg dc6:L, reg dx12:V, reg num16:V, reg dx13:V, reg row6:*, reg row7:V, reg col6:*, reg col7:V, reg ___1:cls, reg r103:V, reg num17:V, reg stringval6:*, reg stringval7:V, reg r104:V, reg c44:L, reg l6:*, reg c45:L, reg r106:L, reg l8:*, reg dr14:V, reg dc7:L, reg dx14:V, reg r108:L, reg dx15:V, reg row8:*, reg row9:V, reg col8:*, reg col9:V, reg ___2:cls, reg r109:V, reg stringval8:*, reg stringval9:V, reg r110:V, reg c46:L, reg l9:*, reg c47:L, reg r112:L, reg l11:*, reg dr16:V, reg dc8:L, reg dx16:V, reg r114:L, reg dx17:V, reg row10:*, reg row11:V, reg col10:*, reg col11:V, reg ___3:cls, reg r115:V, reg stringval10:*, reg stringval11:V, reg r116:V, reg c48:L, reg l12:*, reg c49:L, reg r118:S, reg l14:*, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg row12:*, reg row13:V, reg col12:*, reg col13:V, reg ___4:cls, reg r121:V, reg l15:*, reg c50:L, reg r123:S, reg l17:*, reg dr20:V, reg dc10:L, reg dx20:V, reg r125:S, reg dx21:V, reg row14:*, reg row15:V, reg col14:*, reg col15:V, reg ___5:cls, reg r126:V, reg stringval12:*, reg stringval13:V, reg r127:V, reg c51:L, reg l18:*, reg c52:L, reg r129:S, reg l20:*, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg row16:*, reg row17:V, reg col16:*, reg col17:V, reg ___6:cls, reg r132:V, reg l21:*, reg c53:L, reg r134:S, reg l23:*, reg dr24:V, reg dc12:L, reg dx24:V, reg r136:S, reg dx25:V, reg row18:*, reg row19:V, reg col18:*, reg col19:V, reg ___7:cls, reg r137:V, reg stop6:cls, reg r138:V, reg type4:*, reg type5:V, reg r139:V, reg c54:L, reg l24:*, reg c55:L, reg r141:S, reg l26:*, reg dr26:V, reg dc13:L, reg dx26:V, reg dx27:V, reg row20:*, reg row21:V, reg col20:*, reg col21:V, reg ___8:cls, reg r144:V, reg sub3:cls, reg stringval14:*, reg stringval15:V, reg p16:p(V +), reg r146:V, reg sub4:cls, reg stringval16:*, reg stringval17:V, reg p17:p(V +), reg r148:V, reg stringval18:*, reg stringval19:V, reg l27:*, reg c56:L, reg stringval21:V, reg l29:*, reg dr28:V, reg dc14:L, reg dx28:V, reg stringval23:V, reg dx29:V, reg row22:*, reg row23:V, reg col22:*, reg col23:V, reg ___9:cls, reg r149:V, reg skip1:*, reg skip2:V, reg r150:V, reg c57:L, reg data:*, reg data1:V, reg c58:L, reg data3:V, reg dr30:V, reg dc15:L, reg dx30:V, reg dx31:V, reg skip3:*, reg skip4:V, reg r151:V, reg r152:V, reg __4:cls, reg r153:V, reg nrow8:cls, reg data4:*, reg data5:V, reg p18:p(V +), reg r155:V, reg nlines:*, reg nlines1:V, reg r156:V, reg c59:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r157:V, reg r158:V, reg missing:cls, reg r159:V, reg c60:L, reg stop7:cls, reg r160:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r162:V, reg r163:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r164:V, reg r165:V, reg col_names1:*, reg col_names2:V, reg length2:cls, reg r166:V, reg vector:cls, reg r167:V, reg col_names3:*, reg col_names4:V, reg l30:*, reg names__:cls, reg r168:V, reg l31:*, reg class__:cls, reg r169:V, reg tmp:*, reg tmp1:V, reg data6:*, reg data7:V, reg c61:L, reg dr32:V, reg dc16:L, reg dx33:V, reg dx34:V, reg __5:cls, reg r171:V, reg first:*, reg first1:V, reg c62:L, reg first3:V, reg dr34:V, reg dc17:L, reg dx35:V, reg dx36:V, reg __6:cls, reg r172:V, reg r173:V, reg c63:L, reg first4:*, reg first5:V, reg c64:L, reg first7:V, reg dr36:V, reg dc18:L, reg dx37:V, reg dx38:V, reg __7:cls, reg r174:V, reg ncol8:*, reg ncol9:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r175:V, reg r176:V, reg types:*, reg types1:V, reg c65:L, reg dr38:V, reg dc19:L, reg dx40:V, reg dx41:V, reg __8:cls, reg r177:V, reg c66:L, reg dx43:V, reg dr40:V, reg dc20:L, reg dx44:V, reg dx45:V, reg __9:cls, reg r178:V, reg r179:V, reg all:cls, reg r180:V, reg c67:L, reg c69:V, reg data10:*, reg data11:V, reg c70:L, reg c72:L, reg data13:V, reg dr42:V, reg dc21:L, reg dx46:V, reg c74:L, reg dx47:V, reg __10:cls, reg r181:V, reg r182:V, reg c75:L, reg c76:V, reg rlabp:*, reg rlabp1:V, reg c78:L, reg c80:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r183:V, reg c83:L, reg r184:V, reg missing1:cls, reg r185:V, reg c84:L, reg c85:V, reg c87:L, reg header1:*, reg header2:V, reg r187:V, reg c88:L, reg header3:*, reg header4:V, reg c89:L, reg data14:*, reg data15:V, reg c90:L, reg dr44:V, reg dc22:L, reg dx48:V, reg dx49:V, reg __11:cls, reg r189:V, reg types4:*, reg types5:V, reg c91:L, reg dr46:V, reg dc23:L, reg dx50:V, reg dx51:V, reg __12:cls, reg r190:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r191:V, reg r192:V, reg missing2:cls, reg r193:V, reg c92:L, reg first8:*, reg first9:V, reg first10:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r194:V, reg r195:V, reg first11:*, reg first12:V, reg length3:cls, reg r196:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r199:V, reg r200:V, reg r201:V, reg col_names5:*, reg col_names6:V, reg length4:cls, reg r202:V, reg r203:V, reg c93:L, reg warning:cls, reg r204:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r205:V, reg r206:V, reg missing3:cls, reg r207:V, reg c94:L, reg paste0:cls, reg cols:*, reg cols1:V, reg r208:V, reg p19:p(V +), reg r210:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r211:V, reg r212:V, reg col_names7:*, reg col_names8:V, reg length5:cls, reg r213:V, reg rlabp2:*, reg rlabp3:V, reg r214:V, reg cols2:*, reg cols3:V, reg r215:V, reg c95:L, reg stop8:cls, reg r216:V, reg cols4:*, reg cols5:V, reg r218:V, reg c96:L, reg c98:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r219:V, reg c101:L, reg r220:V, reg col_names9:*, reg col_names10:V, reg length6:cls, reg r221:V, reg cols6:*, reg cols7:V, reg r222:V, reg c102:L, reg c103:V, reg c105:L, reg stop9:cls, reg r223:V, reg cols8:*, reg cols9:V, reg r225:V, reg c106:L, reg stop10:cls, reg r226:V, reg check_names1:*, reg check_names2:V, reg c107:L, reg make_names:cls, reg col_names11:*, reg col_names12:V, reg p20:p(V +), reg r229:V, reg rlabp4:*, reg rlabp5:V, reg c108:L, reg sym21:cls, reg base21:cls, reg guard21:L, reg r231:V, reg r232:V, reg col_names13:*, reg col_names14:V, reg c109:cls, reg r233:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r235:V, reg r236:V, reg colClasses1:*, reg colClasses2:V, reg names:cls, reg r237:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r238:V, reg r239:V, reg colClasses3:*, reg colClasses4:V, reg length7:cls, reg r240:V, reg cols10:*, reg cols11:V, reg r241:V, reg c110:L, reg sym24:cls, reg base24:cls, reg guard24:L, reg r242:V, reg r243:V, reg nmColClasses:*, reg nmColClasses1:V, reg c111:V, reg c112:L, reg sym25:cls, reg base25:cls, reg guard25:L, reg r244:V, reg r245:V, reg colClasses5:*, reg colClasses6:V, reg cols12:*, reg cols13:V, reg rep_len:cls, reg r246:V, reg r247:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r248:V, reg r249:V, reg cols14:*, reg cols15:V, reg rep_len1:cls, reg r250:V, reg col_names15:*, reg col_names16:V, reg l32:*, reg names__1:cls, reg r251:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r252:V, reg r253:V, reg nmColClasses2:*, reg nmColClasses3:V, reg col_names17:*, reg col_names18:V, reg match:cls, reg r254:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r255:V, reg r256:V, reg i17:*, reg i18:V, reg r257:V, reg any:cls, reg r258:V, reg c113:L, reg warning1:cls, reg r259:V, reg colClasses7:*, reg colClasses8:V, reg l33:*, reg c114:L, reg colClasses10:V, reg l35:*, reg dr48:V, reg dc24:L, reg dx52:V, reg dx53:V, reg i19:*, reg i20:V, reg c115:L, reg colClasses15:V, reg l37:*, reg colClasses16:V, reg i22:V, reg dr50:V, reg dc25:L, reg dx54:V, reg colClasses19:V, reg l39:*, reg colClasses20:V, reg dx55:V, reg i23:*, reg i24:V, reg r261:V, reg __13:cls, reg r262:V, reg ___10:cls, reg r263:V, reg tmp2:*, reg tmp3:V, reg l40:*, reg c116:L, reg r266:S, reg l42:*, reg dr52:V, reg dc26:L, reg dx56:V, reg dx57:V, reg _in_1:cls, reg colClasses21:*, reg colClasses22:V, reg p21:p(V +), reg sym29:cls, reg base29:cls, reg guard29:L, reg r270:V, reg r271:V, reg c117:cls, reg r272:V, reg p22:p(V +), reg r274:V, reg ___11:cls, reg r275:V, reg _in_2:cls, reg colClasses23:*, reg colClasses24:V, reg p23:p(V +), reg sym30:cls, reg base30:cls, reg guard30:L, reg r277:V, reg r278:V, reg c118:cls, reg r279:V, reg p24:p(V +), reg r281:V, reg _in_3:cls, reg colClasses25:*, reg colClasses26:V, reg p25:p(V +), reg r283:V, reg r284:V, reg blank_lines_skip1:*, reg blank_lines_skip2:V, reg c119:L, reg data18:*, reg data19:V, reg c120:L, reg data21:V, reg dr54:V, reg dc27:L, reg dx58:V, reg dx59:V, reg apply:cls, reg data22:*, reg data23:V, reg p26:p(V +), reg r286:cls, reg p27:p(V +), reg r288:V, reg __14:cls, reg r289:V, reg nrows1:*, reg nrows2:V, reg r290:V, reg c121:L, reg c123:V, reg nrows3:*, reg nrows4:V, reg nrow9:cls, reg data24:*, reg data25:V, reg p28:p(V +), reg r292:V, reg r293:V, reg c124:L, reg c125:V, reg c127:L, reg data26:*, reg data27:V, reg c128:L, reg data29:V, reg dr56:V, reg dc28:L, reg dx61:V, reg dx62:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r294:V, reg r295:V, reg nrows5:*, reg nrows6:V, reg r296:I, reg __15:cls, reg r297:V, reg nrow10:cls, reg data33:*, reg data34:V, reg p29:p(V +), reg r299:V, reg l43:*, reg c129:L, reg r301:L, reg l45:*, reg dr58:V, reg dc29:L, reg dx64:V, reg dx65:V, reg _in_4:cls, reg data35:*, reg data36:V, reg p30:p(V +), reg na_strings1:*, reg na_strings2:V, reg p31:p(V +), reg r306:V, reg ___12:cls, reg r307:V, reg as_data_frame:cls, reg data37:*, reg data38:V, reg p32:p(V +), reg r309:V, reg col_names19:*, reg col_names20:V, reg l46:*, reg names__2:cls, reg r310:V, reg cols16:*, reg cols17:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r311:V, reg cols20:V, reg r312:V, reg data39:*, reg data40:V, reg length8:cls, reg r313:V, reg r314:V, reg c130:L, reg warning2:cls, reg cols21:*, reg cols22:V, reg p33:p(V +), reg sym33:cls, reg base33:cls, reg guard33:L, reg r316:V, reg r317:V, reg data41:*, reg data42:V, reg length9:cls, reg r318:V, reg p34:p(V +), reg r320:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r321:V, reg r322:V, reg data43:*, reg data44:V, reg length10:cls, reg r323:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r325:V, reg r326:V, reg as_is1:*, reg as_is2:V, reg c131:L, reg c132:L, reg sym36:cls, reg base36:cls, reg guard36:L, reg r327:V, reg r328:V, reg as_is3:*, reg as_is4:V, reg cols23:*, reg cols24:V, reg rep_len2:cls, reg r329:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r331:V, reg r332:V, reg as_is5:*, reg as_is6:V, reg is_numeric:cls, reg r333:V, reg c133:L, reg sym38:cls, reg base38:cls, reg guard38:L, reg r334:V, reg r335:V, reg as_is7:*, reg as_is8:V, reg r336:V, reg as_is9:*, reg as_is10:V, reg cols25:*, reg cols26:V, reg r337:V, reg r338:V, reg any1:cls, reg r339:V, reg c134:L, reg stop11:cls, reg r340:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r342:V, reg r343:V, reg cols27:*, reg cols28:V, reg rep_int:cls, reg r344:V, reg l47:*, reg c135:L, reg r346:L, reg l49:*, reg dr60:V, reg dc30:L, reg dx66:V, reg dx67:V, reg as_is11:*, reg as_is12:V, reg ___13:cls, reg r349:V, reg i25:*, reg i26:V, reg sym40:cls, reg base40:cls, reg guard40:L, reg r350:V, reg r351:V, reg as_is13:*, reg as_is14:V, reg c136:L, reg c137:L, reg sym41:cls, reg base41:cls, reg guard41:L, reg r352:V, reg r353:V, reg as_is15:*, reg as_is16:V, reg col_names21:*, reg col_names22:V, reg match1:cls, reg r354:V, reg sym42:cls, reg base42:cls, reg guard42:L, reg r355:V, reg r356:V, reg i27:*, reg i28:V, reg r357:V, reg any2:cls, reg r358:V, reg c138:L, reg warning3:cls, reg r359:V, reg i29:*, reg i30:V, reg c139:L, reg i32:V, reg dr62:V, reg dc31:L, reg dx68:V, reg dx69:V, reg i33:*, reg i34:V, reg r361:V, reg __16:cls, reg r362:V, reg sym43:cls, reg base43:cls, reg guard43:L, reg r363:V, reg r364:V, reg cols29:*, reg cols30:V, reg rep_int1:cls, reg r365:V, reg l50:*, reg c140:L, reg r367:L, reg l52:*, reg dr64:V, reg dc32:L, reg dx70:V, reg r369:L, reg dx71:V, reg i35:*, reg i36:V, reg ___14:cls, reg r370:V, reg sym44:cls, reg base44:cls, reg guard44:L, reg r371:V, reg r372:V, reg as_is17:*, reg as_is18:V, reg length11:cls, reg r373:V, reg cols31:*, reg cols32:V, reg r374:V, reg c141:L, reg stop12:cls, reg gettextf:cls, reg sym45:cls, reg base45:cls, reg guard45:L, reg r375:V, reg r376:V, reg as_is19:*, reg as_is20:V, reg length12:cls, reg r377:V, reg p35:p(V +), reg cols33:*, reg cols34:V, reg p36:p(V +), reg r380:V, reg p37:p(V +), reg r382:V, reg keep:*, reg keep1:V, reg known:*, reg known1:V, reg r383:V, reg r384:V, reg rlabp6:*, reg rlabp7:V, reg c142:L, reg l53:*, reg c143:L, reg r386:L, reg l55:*, reg dr66:V, reg dc33:L, reg dx72:V, reg r388:L, reg dx73:V, reg ___15:cls, reg r389:V, reg cols35:*, reg cols36:V, reg r391:V, reg c144:L, reg r393:V, reg dr68:V, reg dc34:L, reg dx74:V, reg dx75:V, reg do:*, reg do1:V, reg __17:cls, reg r394:V, reg s:V, reg l56:I, reg i37:I, reg i38:I, reg i39:I, reg c145:L, reg x:V, reg sym46:cls, reg base46:cls, reg guard46:L, reg r395:V, reg i44:I, reg r396:V, reg colClasses27:*, reg colClasses28:V, reg c146:L, reg i46:I, reg colClasses30:V, reg dr70:V, reg dc35:L, reg dx76:V, reg i48:I, reg dx77:V, reg i49:*, reg i50:V, reg __18:cls, reg r397:V, reg is_na2:cls, reg r398:V, reg c147:L, reg sym47:cls, reg base47:cls, reg guard47:L, reg r399:V, reg i55:I, reg r400:V, reg types8:*, reg types9:V, reg c148:L, reg i57:I, reg types11:V, reg dr72:V, reg dc36:L, reg dx78:V, reg i59:I, reg dx79:V, reg i60:*, reg i61:V, reg __19:cls, reg r401:V, reg r402:V, reg any3:cls, reg r403:V, reg c149:L, reg stringsAsFactors3:*, reg stringsAsFactors4:V, reg c150:L, reg i65:I, reg c152:V, reg as_is21:*, reg as_is22:V, reg c153:L, reg i67:I, reg c155:L, reg as_is24:V, reg dr74:V, reg dc37:L, reg dx80:V, reg i69:I, reg c157:L, reg dx81:V, reg i70:*, reg i71:V, reg __20:cls, reg r404:V, reg r405:V, reg c158:L, reg c159:V, reg c161:L, reg as_factor:cls, reg data45:*, reg data46:V, reg c162:L, reg data48:V, reg dr76:V, reg dc38:L, reg dx82:V, reg dx83:V, reg i75:*, reg i76:V, reg __21:cls, reg r406:V, reg p38:p(V +), reg r408:V, reg i77:I, reg r409:V, reg data49:*, reg data50:V, reg c163:L, reg i79:I, reg data52:V, reg dr78:V, reg dc39:L, reg dx84:V, reg i81:*, reg i82:V, reg __22:cls, reg r410:V, reg i83:I, reg r411:V, reg type_convert:cls, reg data53:*, reg data54:V, reg c164:L, reg data56:V, reg dr80:V, reg dc40:L, reg dx85:V, reg dx86:V, reg i84:*, reg i85:V, reg __23:cls, reg r412:V, reg p39:p(V +), reg as_is25:*, reg as_is26:V, reg c165:L, reg as_is28:V, reg dr82:V, reg dc41:L, reg dx87:V, reg dx88:V, reg i86:*, reg i87:V, reg __24:cls, reg r414:V, reg p40:p(V +), reg dec1:*, reg dec2:V, reg p41:p(V +), reg character:cls, reg r417:V, reg p42:p(V +), reg numerals1:*, reg numerals2:V, reg p43:p(V +), reg r420:V, reg i88:I, reg r421:V, reg colClasses31:*, reg colClasses32:V, reg c166:L, reg i90:I, reg colClasses34:V, reg dr84:V, reg dc42:L, reg dx89:V, reg i92:I, reg dx90:V, reg i93:*, reg i94:V, reg __25:cls, reg r422:V, reg r423:V, reg c167:L, reg as_factor1:cls, reg data57:*, reg data58:V, reg c168:L, reg data60:V, reg dr86:V, reg dc43:L, reg dx91:V, reg dx92:V, reg i97:*, reg i98:V, reg __26:cls, reg r424:V, reg p44:p(V +), reg r426:V, reg colClasses35:*, reg colClasses36:V, reg c169:L, reg i100:I, reg colClasses38:V, reg dr88:V, reg dc44:L, reg dx93:V, reg i102:I, reg dx94:V, reg i103:*, reg i104:V, reg __27:cls, reg r427:V, reg r428:V, reg c170:L, reg as_Date:cls, reg data61:*, reg data62:V, reg c171:L, reg data64:V, reg dr90:V, reg dc45:L, reg dx95:V, reg dx96:V, reg i107:*, reg i108:V, reg __28:cls, reg r429:V, reg p45:p(V +), reg r431:V, reg colClasses39:*, reg colClasses40:V, reg c172:L, reg i110:I, reg colClasses42:V, reg dr92:V, reg dc46:L, reg dx97:V, reg i112:I, reg dx98:V, reg i113:*, reg i114:V, reg __29:cls, reg r432:V, reg r433:V, reg c173:L, reg as_POSIXct:cls, reg data65:*, reg data66:V, reg c174:L, reg data68:V, reg dr94:V, reg dc47:L, reg dx99:V, reg dx100:V, reg i117:*, reg i118:V, reg __30:cls, reg r434:V, reg p46:p(V +), reg r436:V, reg __31:cls, reg r437:V, reg r438:cls, reg data69:*, reg data70:V, reg c175:L, reg data72:V, reg dr96:V, reg dc48:L, reg dx101:V, reg dx102:V, reg i119:*, reg i120:V, reg __32:cls, reg r439:V, reg p47:p(V +), reg colClasses43:*, reg colClasses44:V, reg c176:L, reg colClasses46:V, reg dr98:V, reg dc49:L, reg dx103:V, reg dx104:V, reg i121:*, reg i122:V, reg __33:cls, reg r441:V, reg p48:p(V +), reg r443:V, reg l57:*, reg c177:L, reg i124:I, reg r445:V, reg l59:*, reg dr100:V, reg dc50:L, reg dx105:V, reg i126:I, reg dx106:V, reg i127:*, reg i128:V, reg ____:cls, reg r448:V, reg sym48:cls, reg base48:cls, reg guard48:L, reg r449:V, reg r450:V, reg missing4:cls, reg r451:V, reg c178:L, reg rlabp8:*, reg rlabp9:V, reg c179:L, reg data73:*, reg data74:V, reg c180:L, reg data76:V, reg dr102:V, reg dc51:L, reg dx107:V, reg dx108:V, reg __34:cls, reg r452:V, reg data77:*, reg data78:V, reg c181:L, reg data80:V, reg dr104:V, reg dc52:L, reg dx109:V, reg dx110:V, reg __35:cls, reg r453:V, reg keep2:*, reg keep3:V, reg c182:L, reg keep5:V, reg dr106:V, reg dc53:L, reg dx111:V, reg dx112:V, reg __36:cls, reg r454:V, reg r455:V, reg _set_row_names:cls, reg sym49:cls, reg base49:cls, reg guard49:L, reg r456:V, reg r457:V, reg nlines2:*, reg nlines3:V, reg as_integer:cls, reg r458:V, reg p49:p(V +), reg r460:V, reg sym50:cls, reg base50:cls, reg guard50:L, reg r462:V, reg r463:V, reg row_names1:*, reg row_names2:V, reg c183:V, reg c184:L, reg _set_row_names1:cls, reg sym51:cls, reg base51:cls, reg guard51:L, reg r464:V, reg r465:V, reg nlines4:*, reg nlines5:V, reg as_integer1:cls, reg r466:V, reg p50:p(V +), reg r468:V, reg sym52:cls, reg base52:cls, reg guard52:L, reg r469:V, reg r470:V, reg row_names3:*, reg row_names4:V, reg c185:L, reg c186:L, reg sym53:cls, reg base53:cls, reg guard53:L, reg r471:V, reg r472:V, reg row_names5:*, reg row_names6:V, reg length13:cls, reg r473:V, reg r474:V, reg c187:L, reg cols37:*, reg cols38:V, reg r475:V, reg c188:L, reg r477:V, reg dr108:V, reg dc54:L, reg dx113:V, reg dx114:V, reg sym54:cls, reg base54:cls, reg guard54:L, reg r480:V, reg r481:V, reg r482:V, reg col_names23:*, reg col_names24:V, reg row_names7:*, reg row_names8:V, reg match2:cls, reg r483:V, reg r484:V, reg __37:cls, reg r485:V, reg data81:*, reg data82:V, reg c189:L, reg data84:V, reg dr110:V, reg dc55:L, reg dx115:V, reg dx116:V, reg rowvar:*, reg rowvar1:V, reg __38:cls, reg r486:V, reg data85:*, reg data86:V, reg c190:L, reg data88:V, reg dr112:V, reg dc56:L, reg dx117:V, reg dx118:V, reg rowvar2:*, reg rowvar3:V, reg r487:V, reg __39:cls, reg r488:V, reg keep6:*, reg keep7:V, reg c191:L, reg keep9:V, reg dr114:V, reg dc57:L, reg dx119:V, reg dx120:V, reg rowvar4:*, reg rowvar5:V, reg r489:V, reg __40:cls, reg r490:V, reg dx121:V, reg sym55:cls, reg base55:cls, reg guard55:L, reg r491:V, reg r492:V, reg row_names9:*, reg row_names10:V, reg is_numeric1:cls, reg r493:V, reg c192:L, reg c194:V, reg sym56:cls, reg base56:cls, reg guard56:L, reg r494:V, reg c197:L, reg r495:V, reg row_names11:*, reg row_names12:V, reg length14:cls, reg r496:V, reg r497:V, reg c198:L, reg c199:V, reg c201:L, reg row_names13:*, reg row_names14:V, reg data89:*, reg data90:V, reg c202:L, reg data92:V, reg dr116:V, reg dc58:L, reg dx122:V, reg dx123:V, reg rlabp10:*, reg rlabp11:V, reg __41:cls, reg r498:V, reg data93:*, reg data94:V, reg c203:L, reg data96:V, reg dr118:V, reg dc59:L, reg dx124:V, reg dx125:V, reg rlabp12:*, reg rlabp13:V, reg r499:V, reg __42:cls, reg r500:V, reg keep10:*, reg keep11:V, reg c204:L, reg keep13:V, reg dr120:V, reg dc60:L, reg dx126:V, reg dx127:V, reg rlabp14:*, reg rlabp15:V, reg r501:V, reg __43:cls, reg r502:V, reg stop13:cls, reg r503:V, reg data97:*, reg data98:V, reg c205:L, reg data100:V, reg dr122:V, reg dc61:L, reg dx128:V, reg dx129:V, reg keep14:*, reg keep15:V, reg __44:cls, reg r504:V, reg sym57:cls, reg base57:cls, reg guard57:L, reg r505:V, reg r506:V, reg row_names15:*, reg row_names16:V, reg c206:L, reg c207:L, reg c208:V, reg sym58:cls, reg base58:cls, reg guard58:L, reg r507:V, reg c212:L, reg r508:V, reg row_names17:*, reg row_names18:V, reg c213:L, reg r509:V, reg c214:L, reg c215:V, reg c217:L, reg sym59:cls, reg base59:cls, reg guard59:L, reg r510:V, reg r511:V, reg row_names19:*, reg row_names20:V, reg as_character:cls, reg r512:V, reg compactRN:*, reg compactRN1:V, reg r514:V, reg c218:L, reg sym60:cls, reg base60:cls, reg guard60:L, reg r515:V, reg r516:V, reg row_names21:*, reg row_names22:V, reg length15:cls, reg r517:V, reg nlines6:*, reg nlines7:V, reg r518:V, reg c219:L, reg stop14:cls, reg r519:V, reg anyDuplicated:cls, reg row_names23:*, reg row_names24:V, reg p51:p(V +), reg r522:V, reg c220:L, reg stop15:cls, reg r523:V, reg sym61:cls, reg base61:cls, reg guard61:L, reg r525:V, reg r526:V, reg row_names25:*, reg row_names26:V, reg anyNA:cls, reg r527:V, reg c221:L, reg stop16:cls, reg r528:V, reg r529:V, reg row_names27:*, reg row_names28:V, reg l60:*, reg attr__:cls, reg r531:V, reg data101:*, reg data102:V |
    mkenv;
    st file = file;
    header_isMissing = missing.0(header);
    if header_isMissing then L0(FALSE) else L0(header);
  L0(header_orDefault):
    st header = header_orDefault;
    dec_isMissing = missing.0(dec);
    if dec_isMissing then L1(".") else L1(dec);
  L1(dec_orDefault):
    st dec = dec_orDefault;
    numerals_isMissing = missing.0(numerals);
    if numerals_isMissing then L2() else L3(numerals);
  L2():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("allow.loss", "warn.loss", "no.loss");
      goto L0(r2);
    L2():
      r = dyn base("allow.loss", "warn.loss", "no.loss");
      goto L0(r);
    };
    goto L3(p);
  L3(numerals_orDefault):
    st numerals = numerals_orDefault;
    st `row.names` = row_names;
    st `col.names` = col_names;
    as_is_isMissing = missing.0(as_is);
    if as_is_isMissing then L4() else L5(as_is);
  L4():
    p1 = prom<V +>{
      stringsAsFactors1 = ld stringsAsFactors;
      stringsAsFactors2 = force? stringsAsFactors1;
      checkMissing(stringsAsFactors2);
      r4 = `!`(stringsAsFactors2);
      return r4;
    };
    goto L5(p1);
  L5(as_is_orDefault):
    st `as.is` = as_is_orDefault;
    na_strings_isMissing = missing.0(na_strings);
    if na_strings_isMissing then L6("NA") else L6(na_strings);
  L6(na_strings_orDefault):
    st `na.strings` = na_strings_orDefault;
    colClasses_isMissing = missing.0(colClasses);
    if colClasses_isMissing then L7(NA_LGL) else L7(colClasses);
  L7(colClasses_orDefault):
    st colClasses = colClasses_orDefault;
    nrows_isMissing = missing.0(nrows);
    if nrows_isMissing then L8() else L9(nrows);
  L8():
    p2 = prom<V +>{
      return -1.0;
    };
    goto L9(p2);
  L9(nrows_orDefault):
    st nrows = nrows_orDefault;
    skip_isMissing = missing.0(skip);
    if skip_isMissing then L10(0.0) else L10(skip);
  L10(skip_orDefault):
    st skip = skip_orDefault;
    check_names_isMissing = missing.0(check_names);
    if check_names_isMissing then L11(TRUE) else L11(check_names);
  L11(check_names_orDefault):
    st `check.names` = check_names_orDefault;
    blank_lines_skip_isMissing = missing.0(blank_lines_skip);
    if blank_lines_skip_isMissing then L12(TRUE) else L12(blank_lines_skip);
  L12(blank_lines_skip_orDefault):
    st `blank.lines.skip` = blank_lines_skip_orDefault;
    stringsAsFactors_isMissing = missing.0(stringsAsFactors);
    if stringsAsFactors_isMissing then L13(FALSE) else L13(stringsAsFactors);
  L13(stringsAsFactors_orDefault):
    st stringsAsFactors = stringsAsFactors_orDefault;
    transpose_isMissing = missing.0(transpose);
    if transpose_isMissing then L14(FALSE) else L14(transpose);
  L14(transpose_orDefault):
    st transpose = transpose_orDefault;
    fileEncoding_isMissing = missing.0(fileEncoding);
    if fileEncoding_isMissing then L15("") else L15(fileEncoding);
  L15(fileEncoding_orDefault):
    st fileEncoding = fileEncoding_orDefault;
    _Platform = ld `.Platform`;
    check L250() else D0();
  D0():
    deopt 0 [_Platform];
  L250():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c1 = `is.object`(_Platform1);
    if c1 then L252() else L253(_Platform1);
  L251(dx1):
    r8 = `==`(dx1, "windows");
    c2 = `as.logical`(r8);
    if c2 then L255() else L16(c2);
  L252():
    dr = tryDispatchBuiltin.1("$", _Platform1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L254() else L253(dr);
  L253(_Platform3):
    r7 = `$`(_Platform3, <sym OS.type>);
    goto L251(r7);
  L16(c4):
    c11 = `as.logical`(c4);
    if c11 then L261() else L18();
  L254():
    dx = getTryDispatchBuiltinValue(dr);
    goto L251(dx);
  L255():
    sym1 = ldf identical;
    base1 = ldf identical in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L256() else L257();
  L17(c7, r10):
    c8 = `as.logical`(r10);
    c9 = `&&`(c7, c8);
    goto L16(c9);
  L18():
    sym2 = ldf nzchar;
    base2 = ldf nzchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L271() else L272();
  L21():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L285() else L286();
  L256():
    file1 = ld file;
    check L258() else D1();
  L257():
    r9 = dyn base1(<sym file>, "clipboard");
    goto L17(c2, r9);
  L261():
    _in_ = ldf `%in%`;
    check L262() else D3();
  D1():
    deopt 7 [c2, file1];
  D3():
    deopt 21 [];
  L22(r21):
    c13 = `as.logical`(r21);
    if c13 then L275() else L23();
  L24(r33):
    r35 = `<`(r33, 1);
    c14 = `as.logical`(r35);
    if c14 then L289() else L25();
  L258():
    file2 = force? file1;
    checkMissing(file2);
    identical = ldf identical in base;
    r11 = dyn identical(file2, "clipboard", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L259() else D2();
  L262():
    p3 = prom<V +>{
      getClipboardFormats = ldf getClipboardFormats;
      r12 = dyn getClipboardFormats[numeric](TRUE);
      return r12;
    };
    r14 = dyn _in_(5.0, p3);
    check L263() else D4();
  L271():
    fileEncoding1 = ld fileEncoding;
    check L273() else D9();
  L272():
    r20 = dyn base2(<sym fileEncoding>);
    goto L22(r20);
  L285():
    lines = ld lines;
    check L287() else D19();
  L286():
    r32 = dyn base3(<sym lines>);
    goto L24(r32);
  D2():
    deopt 18 [c2, r11];
  D4():
    deopt 24 [r14];
  D9():
    deopt 39 [fileEncoding1];
  D19():
    deopt 67 [lines];
  L23():
    readLines1 = ldf readLines;
    check L283() else D17();
  L25():
    goto L26();
  L26():
    st topic = "";
    st nrow = NA_LGL;
    st ncol = NA_LGL;
    st i = 1;
    goto L38();
  L259():
    goto L17(c2, r11);
  L263():
    r15 = `!`(r14);
    c12 = `as.logical`(r15);
    if c12 then L264() else L19();
  L273():
    fileEncoding2 = force? fileEncoding1;
    checkMissing(fileEncoding2);
    nzchar = ldf nzchar in base;
    r22 = dyn nzchar(fileEncoding2);
    check L274() else D10();
  L275():
    file3 = ldf file;
    check L276() else D11();
  L287():
    lines1 = force? lines;
    checkMissing(lines1);
    length = ldf length in base;
    r34 = dyn length(lines1);
    check L288() else D20();
  L289():
    stop1 = ldf stop;
    check L290() else D21();
  D10():
    deopt 42 [r22];
  D11():
    deopt 44 [];
  D17():
    deopt 61 [];
  D20():
    deopt 70 [r34];
  D21():
    deopt 74 [];
  L19():
    goto L20();
  L20():
    readClipboard = ldf readClipboard;
    check L268() else D7();
  L38():
    topic = ld topic;
    check L293() else D23();
  L264():
    stop = ldf stop;
    check L265() else D5();
  L274():
    goto L22(r22);
  L276():
    p4 = prom<V +>{
      file4 = ld file;
      file5 = force? file4;
      checkMissing(file5);
      return file5;
    };
    p5 = prom<V +>{
      fileEncoding3 = ld fileEncoding;
      fileEncoding4 = force? fileEncoding3;
      checkMissing(fileEncoding4);
      return fileEncoding4;
    };
    r25 = dyn file3[, , encoding](p4, "rt", p5);
    check L277() else D12();
  L283():
    p8 = prom<V +>{
      file6 = ld file;
      file7 = force? file6;
      checkMissing(file7);
      return file7;
    };
    r31 = dyn readLines1(p8);
    check L284() else D18();
  L288():
    goto L24(r34);
  L290():
    r36 = dyn stop1("file had no lines");
    check L291() else D22();
  D5():
    deopt 27 [];
  D7():
    deopt 33 [];
  D12():
    deopt 49 [r25];
  D18():
    deopt 63 [r31];
  D22():
    deopt 76 [r36];
  D23():
    deopt 91 [topic];
  L265():
    r16 = dyn stop("No DIF data on clipboard");
    check L266() else D6();
  L268():
    r18 = dyn readClipboard(5.0);
    check L269() else D8();
  L277():
    st con = r25;
    readLines = ldf readLines;
    check L278() else D13();
  L284():
    st lines = r31;
    goto L21();
  L291():
    goto L26();
  L293():
    topic1 = force? topic;
    checkMissing(topic1);
    r38 = `!=`(topic1, "DATA");
    c15 = `as.logical`(r38);
    if c15 then L294() else L27();
  D6():
    deopt 29 [r16];
  D8():
    deopt 35 [r18];
  D13():
    deopt 52 [];
  L27():
    sym5 = ldf `is.na`;
    base5 = ldf `is.na` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L328() else L329();
  L266():
    goto L20();
  L269():
    st lines = r18;
    goto L21();
  L278():
    p6 = prom<V +>{
      con = ld con;
      con1 = force? con;
      checkMissing(con1);
      return con1;
    };
    r27 = dyn readLines(p6);
    check L279() else D14();
  L294():
    lines2 = ld lines;
    check L295() else D24();
  D14():
    deopt 54 [r27];
  D24():
    deopt 95 [lines2];
  L39(r51):
    c22 = `as.logical`(r51);
    if c22 then L40(c22) else L332();
  L279():
    st lines = r27;
    close = ldf close;
    check L280() else D15();
  L295():
    lines3 = force? lines2;
    checkMissing(lines3);
    c16 = `is.object`(lines3);
    if c16 then L296() else L297(lines3);
  L328():
    nrow = ld nrow;
    check L330() else D40();
  L329():
    r50 = dyn base5(<sym nrow>);
    goto L39(r50);
  D15():
    deopt 57 [];
  D40():
    deopt 156 [nrow];
  L28(dx3):
    st topic = dx3;
    lines6 = ld lines;
    check L300() else D26();
  L40(c23):
    c31 = `as.logical`(c23);
    if c31 then L338() else L42();
  L280():
    p7 = prom<V +>{
      con2 = ld con;
      con3 = force? con2;
      checkMissing(con3);
      return con3;
    };
    r29 = dyn close(p7);
    check L281() else D16();
  L296():
    dr2 = tryDispatchBuiltin.1("[", lines3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L298() else L297(dr2);
  L297(lines5):
    i = ld i;
    check L299() else D25();
  L330():
    nrow1 = force? nrow;
    checkMissing(nrow1);
    is_na = ldf `is.na` in base;
    r52 = dyn is_na(nrow1);
    check L331() else D41();
  L332():
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L333() else L334();
  D16():
    deopt 59 [r29];
  D25():
    deopt 97 [lines5, i];
  D26():
    deopt 101 [lines6];
  D41():
    deopt 159 [r52];
  L41(c27, r54):
    c28 = `as.logical`(r54);
    c29 = `||`(c27, c28);
    goto L40(c29);
  L42():
    goto L43();
  L43():
    matrix = ldf matrix;
    check L342() else D46();
  L281():
    goto L21();
  L298():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L28(dx2);
  L299():
    i1 = force? i;
    __ = ldf `[` in base;
    r39 = dyn __(lines5, i1);
    goto L28(r39);
  L300():
    lines7 = force? lines6;
    checkMissing(lines7);
    c17 = `is.object`(lines7);
    if c17 then L301() else L302(lines7);
  L331():
    goto L39(r52);
  L333():
    ncol = ld ncol;
    check L335() else D42();
  L334():
    r53 = dyn base6(<sym ncol>);
    goto L41(c22, r53);
  L338():
    stop2 = ldf stop;
    check L339() else D44();
  D42():
    deopt 162 [c22, ncol];
  D44():
    deopt 168 [];
  D46():
    deopt 174 [];
  L29(dx5):
    st vnum = dx5;
    sym4 = ldf `as.numeric`;
    base4 = ldf `as.numeric` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L305() else L306();
  L301():
    dr4 = tryDispatchBuiltin.1("[", lines7);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L303() else L302(dr4);
  L302(lines9):
    i2 = ld i;
    check L304() else D27();
  L335():
    ncol1 = force? ncol;
    checkMissing(ncol1);
    is_na1 = ldf `is.na` in base;
    r55 = dyn is_na1(ncol1);
    check L336() else D43();
  L339():
    r56 = dyn stop2("row and column counts not found");
    check L340() else D45();
  L342():
    p10 = prom<V +>{
      nrow2 = ld nrow;
      nrow3 = force? nrow2;
      checkMissing(nrow3);
      return nrow3;
    };
    p11 = prom<V +>{
      ncol2 = ld ncol;
      ncol3 = force? ncol2;
      checkMissing(ncol3);
      return ncol3;
    };
    r60 = dyn matrix("", p10, p11);
    check L343() else D47();
  D27():
    deopt 103 [lines9, i2];
  D43():
    deopt 165 [c22, r55];
  D45():
    deopt 170 [r56];
  D47():
    deopt 178 [r60];
  L30(r43):
    st num = r43;
    i4 = ld i;
    check L310() else D31();
  L303():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L29(dx4);
  L304():
    i3 = force? i2;
    checkMissing(i3);
    r40 = `+`(i3, 1.0);
    __1 = ldf `[` in base;
    r41 = dyn __1(lines9, r40);
    goto L29(r41);
  L305():
    sub = ldf sub;
    check L307() else D28();
  L306():
    r42 = dyn base4(<lang sub("^.*,", "", vnum)>);
    goto L30(r42);
  L336():
    goto L41(c22, r55);
  L340():
    goto L43();
  L343():
    st data = r60;
    matrix1 = ldf matrix;
    check L344() else D48();
  D28():
    deopt 112 [];
  D31():
    deopt 120 [i4];
  D48():
    deopt 181 [];
  L307():
    p9 = prom<V +>{
      vnum = ld vnum;
      vnum1 = force? vnum;
      checkMissing(vnum1);
      return vnum1;
    };
    r45 = dyn sub("^.*,", "", p9);
    check L308() else D29();
  L310():
    i5 = force? i4;
    checkMissing(i5);
    r47 = `+`(i5, 3);
    st i = r47;
    topic2 = ld topic;
    check L311() else D32();
  L344():
    p12 = prom<V +>{
      nrow4 = ld nrow;
      nrow5 = force? nrow4;
      checkMissing(nrow5);
      return nrow5;
    };
    p13 = prom<V +>{
      ncol4 = ld ncol;
      ncol5 = force? ncol4;
      checkMissing(ncol5);
      return ncol5;
    };
    r63 = dyn matrix1(NA_STR, p12, p13);
    check L345() else D49();
  D29():
    deopt 116 [r45];
  D32():
    deopt 125 [topic2];
  D49():
    deopt 185 [r63];
  L308():
    as_numeric = ldf `as.numeric` in base;
    r46 = dyn as_numeric(r45);
    check L309() else D30();
  L311():
    topic3 = force? topic2;
    checkMissing(topic3);
    r48 = `==`(topic3, "VECTORS");
    c18 = `as.logical`(r48);
    if c18 then L312() else L31();
  L345():
    st types = r63;
    st row = 0;
    goto L77();
  D30():
    deopt 118 [r46];
  L31():
    topic4 = ld topic;
    check L319() else D36();
  L34():
    goto L38();
  L77():
    i6 = ld i;
    check L346() else D50();
  L309():
    goto L30(r46);
  L312():
    transpose1 = ld transpose;
    check L313() else D33();
  D33():
    deopt 129 [transpose1];
  D36():
    deopt 137 [topic4];
  D50():
    deopt 190 [i6];
  L313():
    transpose2 = force? transpose1;
    checkMissing(transpose2);
    c19 = `as.logical`(transpose2);
    if c19 then L314() else L32();
  L319():
    topic5 = force? topic4;
    checkMissing(topic5);
    r49 = `==`(topic5, "TUPLES");
    c20 = `as.logical`(r49);
    if c20 then L320() else L35();
  L346():
    i7 = force? i6;
    checkMissing(i7);
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L347() else L348();
  L32():
    num3 = ld num;
    check L317() else D35();
  L33(num2):
    goto L34();
  L35():
    goto L34();
  L44(i10, r65):
    r67 = `<`(i10, r65);
    c32 = `as.logical`(r67);
    if c32 then L351() else L45();
  L314():
    num = ld num;
    check L315() else D34();
  L320():
    transpose3 = ld transpose;
    check L321() else D37();
  L347():
    lines10 = ld lines;
    check L349() else D51();
  L348():
    r64 = dyn base7(<sym lines>);
    goto L44(i7, r64);
  D34():
    deopt 131 [num];
  D35():
    deopt 134 [num3];
  D37():
    deopt 141 [transpose3];
  D51():
    deopt 193 [i7, lines10];
  L45():
    skip1 = ld skip;
    check L479() else D114();
  L315():
    num1 = force? num;
    checkMissing(num1);
    st nrow = num1;
    goto L33(num1);
  L317():
    num4 = force? num3;
    checkMissing(num4);
    st ncol = num4;
    goto L33(num4);
  L321():
    transpose4 = force? transpose3;
    checkMissing(transpose4);
    c21 = `as.logical`(transpose4);
    if c21 then L322() else L36();
  L349():
    lines11 = force? lines10;
    checkMissing(lines11);
    length1 = ldf length in base;
    r66 = dyn length1(lines11);
    check L350() else D52();
  L351():
    lines12 = ld lines;
    check L352() else D53();
  D52():
    deopt 196 [i7, r66];
  D53():
    deopt 198 [lines12];
  D114():
    deopt 421 [skip1];
  L36():
    num9 = ld num;
    check L325() else D39();
  L37(num8):
    goto L34();
  L322():
    num6 = ld num;
    check L323() else D38();
  L350():
    goto L44(i7, r66);
  L352():
    lines13 = force? lines12;
    checkMissing(lines13);
    c33 = `is.object`(lines13);
    if c33 then L353() else L354(lines13);
  L479():
    skip2 = force? skip1;
    checkMissing(skip2);
    r150 = `>`(skip2, 0);
    c57 = `as.logical`(r150);
    if c57 then L480() else L78();
  D38():
    deopt 143 [num6];
  D39():
    deopt 146 [num9];
  L46(dx7):
    st typenum = dx7;
    sym8 = ldf `as.numeric`;
    base8 = ldf `as.numeric` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L357() else L358();
  L78():
    goto L80();
  L80():
    nrow8 = ldf nrow;
    check L487() else D117();
  L323():
    num7 = force? num6;
    checkMissing(num7);
    st ncol = num7;
    goto L37(num7);
  L325():
    num10 = force? num9;
    checkMissing(num10);
    st nrow = num10;
    goto L37(num10);
  L353():
    dr6 = tryDispatchBuiltin.1("[", lines13);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L355() else L354(dr6);
  L354(lines15):
    i11 = ld i;
    check L356() else D54();
  L480():
    data = ld data;
    check L481() else D115();
  D54():
    deopt 200 [lines15, i11];
  D115():
    deopt 425 [data];
  D117():
    deopt 441 [];
  L47(r70):
    st type = r70;
    sym9 = ldf `as.numeric`;
    base9 = ldf `as.numeric` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L362() else L363();
  L355():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L46(dx6);
  L356():
    i12 = force? i11;
    __2 = ldf `[` in base;
    r68 = dyn __2(lines15, i12);
    goto L46(r68);
  L357():
    sub1 = ldf sub;
    check L359() else D55();
  L358():
    r69 = dyn base8(<lang sub(",.*$", "", typenum)>);
    goto L47(r69);
  L481():
    data1 = force? data;
    checkMissing(data1);
    c58 = `is.object`(data1);
    if c58 then L482() else L483(data1);
  L487():
    p18 = prom<V +>{
      data4 = ld data;
      data5 = force? data4;
      checkMissing(data5);
      return data5;
    };
    r155 = dyn nrow8(p18);
    check L488() else D118();
  D55():
    deopt 207 [];
  D118():
    deopt 443 [r155];
  L48(r75):
    st num = r75;
    lines16 = ld lines;
    check L367() else D61();
  L79(dx31):
    st data = dx31;
    goto L80();
  L359():
    p14 = prom<V +>{
      typenum = ld typenum;
      typenum1 = force? typenum;
      checkMissing(typenum1);
      return typenum1;
    };
    r72 = dyn sub1(",.*$", "", p14);
    check L360() else D56();
  L362():
    sub2 = ldf sub;
    check L364() else D58();
  L363():
    r74 = dyn base9(<lang sub("^.*,", "", typenum)>);
    goto L48(r74);
  L482():
    dr30 = tryDispatchBuiltin.1("[", data1);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L484() else L483(dr30);
  L483(data3):
    skip3 = ld skip;
    check L485() else D116();
  L488():
    st nlines = r155;
    nlines = ld nlines;
    check L489() else D119();
  D56():
    deopt 211 [r72];
  D58():
    deopt 218 [];
  D61():
    deopt 226 [lines16];
  D116():
    deopt 428 [data3, 1, skip3];
  D119():
    deopt 445 [nlines];
  L360():
    as_numeric1 = ldf `as.numeric` in base;
    r73 = dyn as_numeric1(r72);
    check L361() else D57();
  L364():
    p15 = prom<V +>{
      typenum2 = ld typenum;
      typenum3 = force? typenum2;
      checkMissing(typenum3);
      return typenum3;
    };
    r77 = dyn sub2("^.*,", "", p15);
    check L365() else D59();
  L367():
    lines17 = force? lines16;
    checkMissing(lines17);
    c34 = `is.object`(lines17);
    if c34 then L368() else L369(lines17);
  L484():
    dx30 = getTryDispatchBuiltinValue(dr30);
    goto L79(dx30);
  L485():
    skip4 = force? skip3;
    checkMissing(skip4);
    r151 = `:`(1, skip4);
    r152 = `-`(<missing>, r151);
    __4 = ldf `[` in base;
    r153 = dyn __4(data1, r152, <missing>, FALSE);
    goto L79(r153);
  L489():
    nlines1 = force? nlines;
    checkMissing(nlines1);
    r156 = `!`(nlines1);
    c59 = `as.logical`(r156);
    if c59 then L490() else L81();
  D57():
    deopt 213 [r73];
  D59():
    deopt 222 [r77];
  L49(dx9):
    st stringval = dx9;
    i15 = ld i;
    check L372() else D63();
  L81():
    goto L87();
  L87():
    data6 = ld data;
    check L512() else D131();
  L361():
    goto L47(r73);
  L365():
    as_numeric2 = ldf `as.numeric` in base;
    r78 = dyn as_numeric2(r77);
    check L366() else D60();
  L368():
    dr8 = tryDispatchBuiltin.1("[", lines17);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L370() else L369(dr8);
  L369(lines19):
    i13 = ld i;
    check L371() else D62();
  L490():
    sym10 = ldf missing;
    base10 = ldf missing in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L491() else L492();
  D60():
    deopt 224 [r78];
  D62():
    deopt 228 [lines19, i13];
  D63():
    deopt 234 [i15];
  D131():
    deopt 486 [data6];
  L82(r158):
    c60 = `as.logical`(r158);
    if c60 then L493() else L83();
  L366():
    goto L48(r78);
  L370():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L49(dx8);
  L371():
    i14 = force? i13;
    checkMissing(i14);
    r79 = `+`(i14, 1.0);
    __3 = ldf `[` in base;
    r80 = dyn __3(lines19, r79);
    goto L49(r80);
  L372():
    i16 = force? i15;
    checkMissing(i16);
    r81 = `+`(i16, 2);
    st i = r81;
    type = ld type;
    check L373() else D64();
  L491():
    missing = ldf missing in base;
    r159 = dyn missing(<sym col.names>);
    goto L82(r159);
  L492():
    r157 = dyn base10(<sym col.names>);
    goto L82(r157);
  L512():
    data7 = force? data6;
    checkMissing(data7);
    c61 = `is.object`(data7);
    if c61 then L513() else L514();
  D64():
    deopt 239 [type];
  L83():
    sym11 = ldf vector;
    base11 = ldf vector in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L497() else L498();
  L88(dx34):
    st first = dx34;
    first = ld first;
    check L516() else D132();
  L373():
    type1 = force? type;
    checkMissing(type1);
    r82 = `==`(type1, -1);
    c35 = `as.logical`(r82);
    if c35 then L374() else L50();
  L493():
    stop7 = ldf stop;
    check L494() else D120();
  L513():
    dr32 = tryDispatchBuiltin.1("[", data7);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L515() else L514();
  L514():
    __5 = ldf `[` in base;
    r171 = dyn __5(data7, 1, <missing>);
    goto L88(r171);
  D120():
    deopt 452 [];
  D132():
    deopt 493 [first];
  L50():
    col = ld col;
    check L392() else D74();
  L56():
    goto L77();
  L85(r163):
    st tmp = r163;
    col_names3 = ld `col.names`;
    check L504() else D125();
  L374():
    stringval = ld stringval;
    check L375() else D65();
  L494():
    r160 = dyn stop7("no lines available in input");
    check L495() else D121();
  L497():
    sym12 = ldf length;
    base12 = ldf length in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L499() else L500();
  L498():
    r162 = dyn base11("list", <lang length(col.names)>);
    goto L85(r162);
  L515():
    dx33 = getTryDispatchBuiltinValue(dr32);
    goto L88(dx33);
  L516():
    first1 = force? first;
    checkMissing(first1);
    c62 = `is.object`(first1);
    if c62 then L517() else L518(first1);
  D65():
    deopt 243 [stringval];
  D74():
    deopt 275 [col];
  D121():
    deopt 454 [r160];
  D125():
    deopt 467 [col_names3];
  L86(r165):
    vector = ldf vector in base;
    r167 = dyn vector("list", r165);
    check L503() else D124();
  L89(dx36):
    r173 = `==`(dx36, "");
    c63 = `as.logical`(r173);
    if c63 then L520() else L90();
  L375():
    stringval1 = force? stringval;
    checkMissing(stringval1);
    r83 = `==`(stringval1, "BOT");
    c36 = `as.logical`(r83);
    if c36 then L376() else L51();
  L392():
    col1 = force? col;
    checkMissing(col1);
    r92 = `+`(col1, 1);
    st col = r92;
    col2 = ld col;
    check L393() else D75();
  L495():
    goto L87();
  L499():
    col_names1 = ld `col.names`;
    check L501() else D122();
  L500():
    r164 = dyn base12(<sym col.names>);
    goto L86(r164);
  L504():
    col_names4 = force? col_names3;
    checkMissing(col_names4);
    l30 = ld tmp;
    names__ = ldf `names<-`;
    check L505() else D126();
  L517():
    dr34 = tryDispatchBuiltin.1("[", first1);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L519() else L518(dr34);
  L518(first3):
    __6 = ldf `[` in base;
    r172 = dyn __6(first3, 1);
    goto L89(r172);
  D75():
    deopt 280 [col2];
  D122():
    deopt 460 [col_names1];
  D124():
    deopt 465 [r167];
  D126():
    deopt 470 [col_names4, l30, col_names4];
  L51():
    stringval2 = ld stringval;
    check L385() else D71();
  L54(r88):
    goto L56();
  L90():
    goto L92();
  L92():
    ncol8 = ld ncol;
    check L526() else D134();
  L376():
    row = ld row;
    check L377() else D66();
  L393():
    col3 = force? col2;
    checkMissing(col3);
    ncol6 = ld ncol;
    check L394() else D76();
  L501():
    col_names2 = force? col_names1;
    checkMissing(col_names2);
    length2 = ldf length in base;
    r166 = dyn length2(col_names2);
    check L502() else D123();
  L503():
    goto L85(r167);
  L505():
    r168 = dyn names__(l30, NULL, col_names4);
    check L506() else D127();
  L519():
    dx35 = getTryDispatchBuiltinValue(dr34);
    goto L89(dx35);
  L520():
    first4 = ld first;
    check L521() else D133();
  D66():
    deopt 247 [row];
  D71():
    deopt 265 [stringval2];
  D76():
    deopt 281 [col3, ncol6];
  D123():
    deopt 463 [r166];
  D127():
    deopt 472 [col_names4, r168];
  D133():
    deopt 500 [first4];
  D134():
    deopt 508 [ncol8];
  L377():
    row1 = force? row;
    checkMissing(row1);
    r84 = `+`(row1, 1);
    st row = r84;
    row2 = ld row;
    check L378() else D67();
  L385():
    stringval3 = force? stringval2;
    checkMissing(stringval3);
    r89 = `==`(stringval3, "EOD");
    c38 = `as.logical`(r89);
    if c38 then L386() else L55();
  L394():
    ncol7 = force? ncol6;
    checkMissing(ncol7);
    r93 = `>`(col3, ncol7);
    c39 = `as.logical`(r93);
    if c39 then L395() else L57();
  L502():
    goto L86(r166);
  L506():
    st tmp = r168;
    l31 = ld tmp;
    class__ = ldf `class<-`;
    check L507() else D128();
  L521():
    first5 = force? first4;
    checkMissing(first5);
    c64 = `is.object`(first5);
    if c64 then L522() else L523(first5);
  L526():
    ncol9 = force? ncol8;
    checkMissing(ncol9);
    st cols = ncol9;
    sym13 = ldf all;
    base13 = ldf all in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L527() else L528();
  D67():
    deopt 252 [row2];
  D128():
    deopt 477 ["data.frame", l31, "data.frame"];
  L55():
    stop4 = ldf stop;
    check L389() else D72();
  L57():
    goto L58();
  L58():
    type2 = ld type;
    check L399() else D79();
  L91(dx38):
    st first = dx38;
    goto L92();
  L93(r176):
    c67 = `as.logical`(r176);
    if c67 then L537() else L96(c67);
  L378():
    row3 = force? row2;
    checkMissing(row3);
    nrow6 = ld nrow;
    check L379() else D68();
  L386():
    goto L45();
  L395():
    stop5 = ldf stop;
    check L396() else D77();
  L507():
    r169 = dyn class__(l31, NULL, "data.frame");
    check L508() else D129();
  L522():
    dr36 = tryDispatchBuiltin.1("[", first5);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L524() else L523(dr36);
  L523(first7):
    __7 = ldf `[` in base;
    r174 = dyn __7(first7, -1);
    goto L91(r174);
  L527():
    types = ld types;
    check L529() else D135();
  L528():
    r175 = dyn base13(<lang `==`(`[`(`[`(types, 1, ), `-`(1)), "character")>);
    goto L93(r175);
  D68():
    deopt 253 [row3, nrow6];
  D72():
    deopt 272 [];
  D77():
    deopt 285 [];
  D79():
    deopt 290 [type2];
  D129():
    deopt 479 ["data.frame", r169];
  D135():
    deopt 513 [types];
  L96(c69):
    st rlabp = c69;
    rlabp = ld rlabp;
    check L543() else D138();
  L379():
    nrow7 = force? nrow6;
    checkMissing(nrow7);
    r85 = `>`(row3, nrow7);
    c37 = `as.logical`(r85);
    if c37 then L380() else L52();
  L389():
    r90 = dyn stop4("Unrecognized special data value");
    check L390() else D73();
  L396():
    r94 = dyn stop5("More columns than specified in header; maybe use 'transpose=TRUE'");
    check L397() else D78();
  L399():
    type3 = force? type2;
    checkMissing(type3);
    r96 = `==`(type3, 0);
    c40 = `as.logical`(r96);
    if c40 then L400() else L59();
  L508():
    st tmp = r169;
    tmp = ld tmp;
    check L509() else D130();
  L524():
    dx37 = getTryDispatchBuiltinValue(dr36);
    goto L91(dx37);
  L529():
    types1 = force? types;
    checkMissing(types1);
    c65 = `is.object`(types1);
    if c65 then L530() else L531();
  L537():
    data10 = ld data;
    check L538() else D137();
  D73():
    deopt 274 [r90];
  D78():
    deopt 287 [r94];
  D130():
    deopt 481 [tmp];
  D137():
    deopt 526 [c67, data10];
  D138():
    deopt 536 [rlabp];
  L52():
    goto L53();
  L53():
    st col = 0;
    goto L54(0);
  L59():
    type4 = ld type;
    check L460() else D104();
  L94(dx41):
    c66 = `is.object`(dx41);
    if c66 then L533() else L534(dx41);
  L380():
    stop3 = ldf stop;
    check L381() else D69();
  L390():
    goto L54(r90);
  L397():
    goto L58();
  L400():
    l = ld types;
    c41 = `is.object`(l);
    if c41 then L401() else L402("numeric", l);
  L509():
    tmp1 = force? tmp;
    checkMissing(tmp1);
    popenv;
    return tmp1;
  L530():
    dr38 = tryDispatchBuiltin.1("[", types1);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L532() else L531();
  L531():
    __8 = ldf `[` in base;
    r177 = dyn __8(types1, 1, <missing>);
    goto L94(r177);
  L538():
    data11 = force? data10;
    checkMissing(data11);
    c70 = `is.object`(data11);
    if c70 then L539() else L540(c67, data11);
  L543():
    rlabp1 = force? rlabp;
    checkMissing(rlabp1);
    c78 = `as.logical`(rlabp1);
    if c78 then L544() else L98(c78);
  D69():
    deopt 257 [];
  D104():
    deopt 382 [type4];
  L60(dx11):
    st types = dx11;
    stringval4 = ld stringval;
    check L406() else D82();
  L95(dx45):
    r179 = `==`(dx45, "character");
    all = ldf all in base;
    r180 = dyn all(r179);
    check L536() else D136();
  L97(c74, dx47):
    r182 = `==`(dx47, "");
    c75 = `as.logical`(r182);
    c76 = `&&`(c74, c75);
    goto L96(c76);
  L98(c80):
    c87 = `as.logical`(c80);
    if c87 then L548() else L100();
  L381():
    r86 = dyn stop3("More rows than specified in header; maybe use 'transpose=TRUE'");
    check L382() else D70();
  L401():
    dr10 = tryDispatchBuiltin.0("[<-", l, "numeric");
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L403() else L402("numeric", dr10);
  L402(r98, l2):
    row4 = ld row;
    check L404() else D80();
  L460():
    type5 = force? type4;
    checkMissing(type5);
    r139 = `==`(type5, 1);
    c54 = `as.logical`(r139);
    if c54 then L461() else L74();
  L532():
    dx40 = getTryDispatchBuiltinValue(dr38);
    goto L94(dx40);
  L533():
    dr40 = tryDispatchBuiltin.1("[", dx41);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L535() else L534(dr40);
  L534(dx43):
    __9 = ldf `[` in base;
    r178 = dyn __9(dx43, -1);
    goto L95(r178);
  L539():
    dr42 = tryDispatchBuiltin.1("[", data11);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L541() else L540(c67, dr42);
  L540(c72, data13):
    __10 = ldf `[` in base;
    r181 = dyn __10(data13, 1, 1);
    goto L97(c72, r181);
  L544():
    sym14 = ldf missing;
    base14 = ldf missing in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L545() else L546();
  D70():
    deopt 259 [r86];
  D80():
    deopt 297 [r98, l2, "numeric", row4];
  D82():
    deopt 302 [stringval4];
  D136():
    deopt 525 [r180];
  L74():
    goto L56();
  L99(c83, r184):
    c84 = `as.logical`(r184);
    c85 = `&&`(c83, c84);
    goto L98(c85);
  L100():
    goto L101();
  L101():
    header1 = ld header;
    check L550() else D139();
  L382():
    goto L53();
  L403():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L60(dx10);
  L404():
    row5 = force? row4;
    col4 = ld col;
    check L405() else D81();
  L406():
    stringval5 = force? stringval4;
    checkMissing(stringval5);
    r102 = `==`(stringval5, "V");
    c42 = `as.logical`(r102);
    if c42 then L407() else L61();
  L461():
    l24 = ld types;
    c55 = `is.object`(l24);
    if c55 then L462() else L463("character", l24);
  L535():
    dx44 = getTryDispatchBuiltinValue(dr40);
    goto L95(dx44);
  L536():
    goto L93(r180);
  L541():
    dx46 = getTryDispatchBuiltinValue(dr42);
    goto L97(c67, dx46);
  L545():
    missing1 = ldf missing in base;
    r185 = dyn missing1(<sym header>);
    goto L99(c78, r185);
  L546():
    r183 = dyn base14(<sym header>);
    goto L99(c78, r183);
  L548():
    st header = TRUE;
    goto L101();
  D81():
    deopt 298 [r98, l2, "numeric", row5, col4];
  D139():
    deopt 547 [header1];
  L61():
    stringval6 = ld stringval;
    check L415() else D86();
  L63(num17):
    goto L56();
  L75(dx27):
    st types = dx27;
    sub3 = ldf sub;
    check L467() else D107();
  L405():
    col5 = force? col4;
    ___ = ldf `[<-` in base;
    r101 = dyn ___(l2, "numeric", row5, col5);
    goto L60(r101);
  L407():
    num11 = ld num;
    check L408() else D83();
  L462():
    dr26 = tryDispatchBuiltin.0("[<-", l24, "character");
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L464() else L463("character", dr26);
  L463(r141, l26):
    row20 = ld row;
    check L465() else D105();
  L550():
    header2 = force? header1;
    checkMissing(header2);
    r187 = `!`(header2);
    c88 = `as.logical`(r187);
    if c88 then L551() else L102();
  D83():
    deopt 306 [num11];
  D86():
    deopt 314 [stringval6];
  D105():
    deopt 389 [r141, l26, "character", row20];
  D107():
    deopt 395 [];
  L102():
    goto L103();
  L103():
    header3 = ld header;
    check L553() else D140();
  L408():
    num12 = force? num11;
    checkMissing(num12);
    l3 = ld data;
    c43 = `is.object`(l3);
    if c43 then L409() else L410(num12, l3);
  L415():
    stringval7 = force? stringval6;
    checkMissing(stringval7);
    r104 = `==`(stringval7, "NA");
    c44 = `as.logical`(r104);
    if c44 then L416() else L64();
  L464():
    dx26 = getTryDispatchBuiltinValue(dr26);
    goto L75(dx26);
  L465():
    row21 = force? row20;
    col20 = ld col;
    check L466() else D106();
  L467():
    p16 = prom<V +>{
      stringval14 = ld stringval;
      stringval15 = force? stringval14;
      checkMissing(stringval15);
      return stringval15;
    };
    r146 = dyn sub3("^\"", "", p16);
    check L468() else D108();
  L551():
    st rlabp = FALSE;
    goto L103();
  D106():
    deopt 390 [r141, l26, "character", row21, col20];
  D108():
    deopt 399 [r146];
  D140():
    deopt 555 [header3];
  L62(num16, dx13):
    st data = dx13;
    goto L63(num16);
  L64():
    stringval8 = ld stringval;
    check L423() else D89();
  L409():
    dr12 = tryDispatchBuiltin.0("[<-", l3, num12);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L411() else L410(num12, dr12);
  L410(num14, l5):
    row6 = ld row;
    check L412() else D84();
  L416():
    l6 = ld data;
    c45 = `is.object`(l6);
    if c45 then L417() else L418(NA_LGL, l6);
  L466():
    col21 = force? col20;
    ___8 = ldf `[<-` in base;
    r144 = dyn ___8(l26, "character", row21, col21);
    goto L75(r144);
  L468():
    st stringval = r146;
    sub4 = ldf sub;
    check L469() else D109();
  L553():
    header4 = force? header3;
    checkMissing(header4);
    c89 = `as.logical`(header4);
    if c89 then L554() else L104();
  D84():
    deopt 309 [num14, l5, num12, row6];
  D89():
    deopt 326 [stringval8];
  D109():
    deopt 402 [];
  L65(r108, dx15):
    st data = dx15;
    goto L63(r108);
  L104():
    sym18 = ldf missing;
    base18 = ldf missing in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L581() else L582();
  L113():
    sym19 = ldf length;
    base19 = ldf length in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L587() else L588();
  L411():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L62(num12, dx12);
  L412():
    row7 = force? row6;
    col6 = ld col;
    check L413() else D85();
  L417():
    dr14 = tryDispatchBuiltin.0("[<-", l6, NA_LGL);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L419() else L418(NA_LGL, dr14);
  L418(r106, l8):
    row8 = ld row;
    check L420() else D87();
  L423():
    stringval9 = force? stringval8;
    checkMissing(stringval9);
    r110 = `==`(stringval9, "ERROR");
    c46 = `as.logical`(r110);
    if c46 then L424() else L66();
  L469():
    p17 = prom<V +>{
      stringval16 = ld stringval;
      stringval17 = force? stringval16;
      checkMissing(stringval17);
      return stringval17;
    };
    r148 = dyn sub4("\"$", "", p17);
    check L470() else D110();
  L554():
    data14 = ld data;
    check L555() else D141();
  D85():
    deopt 310 [num14, l5, num12, row7, col6];
  D87():
    deopt 321 [r106, l8, NA_LGL, row8];
  D110():
    deopt 406 [r148];
  D141():
    deopt 557 [data14];
  L66():
    stringval10 = ld stringval;
    check L431() else D92();
  L114(r206):
    c94 = `as.logical`(r206);
    if c94 then L583() else L115();
  L116(r212):
    rlabp2 = ld rlabp;
    check L591() else D154();
  L413():
    col7 = force? col6;
    ___1 = ldf `[<-` in base;
    r103 = dyn ___1(l5, num12, row7, col7);
    goto L62(num14, r103);
  L419():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L65(NA_LGL, dx14);
  L420():
    row9 = force? row8;
    col8 = ld col;
    check L421() else D88();
  L424():
    l9 = ld data;
    c47 = `is.object`(l9);
    if c47 then L425() else L426(NA_LGL, l9);
  L470():
    st stringval = r148;
    stringval18 = ld stringval;
    check L471() else D111();
  L555():
    data15 = force? data14;
    checkMissing(data15);
    c90 = `is.object`(data15);
    if c90 then L556() else L557();
  L581():
    missing3 = ldf missing in base;
    r207 = dyn missing3(<sym col.names>);
    goto L114(r207);
  L582():
    r205 = dyn base18(<sym col.names>);
    goto L114(r205);
  L587():
    col_names7 = ld `col.names`;
    check L589() else D152();
  L588():
    r211 = dyn base19(<sym col.names>);
    goto L116(r211);
  D88():
    deopt 322 [r106, l8, NA_LGL, row9, col8];
  D92():
    deopt 338 [stringval10];
  D111():
    deopt 408 [stringval18];
  D152():
    deopt 614 [col_names7];
  D154():
    deopt 617 [r212, rlabp2];
  L67(r114, dx17):
    st data = dx17;
    goto L63(r114);
  L105(dx49):
    st data = dx49;
    types4 = ld types;
    check L559() else D142();
  L115():
    goto L113();
  L421():
    col9 = force? col8;
    ___2 = ldf `[<-` in base;
    r109 = dyn ___2(l8, NA_LGL, row9, col9);
    goto L65(r106, r109);
  L425():
    dr16 = tryDispatchBuiltin.0("[<-", l9, NA_LGL);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L427() else L426(NA_LGL, dr16);
  L426(r112, l11):
    row10 = ld row;
    check L428() else D90();
  L431():
    stringval11 = force? stringval10;
    checkMissing(stringval11);
    r116 = `==`(stringval11, "TRUE");
    c48 = `as.logical`(r116);
    if c48 then L432() else L68();
  L471():
    stringval19 = force? stringval18;
    checkMissing(stringval19);
    l27 = ld data;
    c56 = `is.object`(l27);
    if c56 then L472() else L473(stringval19, l27);
  L556():
    dr44 = tryDispatchBuiltin.1("[", data15);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L558() else L557();
  L557():
    __11 = ldf `[` in base;
    r189 = dyn __11(data15, -1, <missing>, FALSE);
    goto L105(r189);
  L583():
    paste0 = ldf paste0;
    check L584() else D150();
  L589():
    col_names8 = force? col_names7;
    checkMissing(col_names8);
    length5 = ldf length in base;
    r213 = dyn length5(col_names8);
    check L590() else D153();
  L591():
    rlabp3 = force? rlabp2;
    checkMissing(rlabp3);
    r214 = `+`(r212, rlabp3);
    cols2 = ld cols;
    check L592() else D155();
  D90():
    deopt 333 [r112, l11, NA_LGL, row10];
  D142():
    deopt 567 [types4];
  D150():
    deopt 605 [];
  D153():
    deopt 617 [r213];
  D155():
    deopt 619 [r214, cols2];
  L68():
    stringval12 = ld stringval;
    check L444() else D97();
  L76(stringval23, dx29):
    st data = dx29;
    goto L56();
  L427():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L67(NA_LGL, dx16);
  L428():
    row11 = force? row10;
    col10 = ld col;
    check L429() else D91();
  L432():
    l12 = ld data;
    c49 = `is.object`(l12);
    if c49 then L433() else L434("TRUE", l12);
  L472():
    dr28 = tryDispatchBuiltin.0("[<-", l27, stringval19);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L474() else L473(stringval19, dr28);
  L473(stringval21, l29):
    row22 = ld row;
    check L475() else D112();
  L558():
    dx48 = getTryDispatchBuiltinValue(dr44);
    goto L105(dx48);
  L559():
    types5 = force? types4;
    checkMissing(types5);
    c91 = `is.object`(types5);
    if c91 then L560() else L561();
  L584():
    p19 = prom<V +>{
      cols = ld cols;
      cols1 = force? cols;
      checkMissing(cols1);
      r208 = `:`(1, cols1);
      return r208;
    };
    r210 = dyn paste0("V", p19);
    check L585() else D151();
  L590():
    goto L116(r213);
  L592():
    cols3 = force? cols2;
    checkMissing(cols3);
    r215 = `<`(r214, cols3);
    c95 = `as.logical`(r215);
    if c95 then L593() else L117();
  D91():
    deopt 334 [r112, l11, NA_LGL, row11, col10];
  D97():
    deopt 358 [stringval12];
  D112():
    deopt 411 [stringval21, l29, stringval19, row22];
  D151():
    deopt 608 [r210];
  L69(dx19):
    st data = dx19;
    l15 = ld types;
    c50 = `is.object`(l15);
    if c50 then L438() else L439("logical", l15);
  L106(dx51):
    st types = dx51;
    sym15 = ldf missing;
    base15 = ldf missing in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L563() else L564();
  L117():
    goto L118();
  L118():
    cols4 = ld cols;
    check L597() else D158();
  L429():
    col11 = force? col10;
    ___3 = ldf `[<-` in base;
    r115 = dyn ___3(l11, NA_LGL, row11, col11);
    goto L67(r112, r115);
  L433():
    dr18 = tryDispatchBuiltin.0("[<-", l12, "TRUE");
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L435() else L434("TRUE", dr18);
  L434(r118, l14):
    row12 = ld row;
    check L436() else D93();
  L444():
    stringval13 = force? stringval12;
    checkMissing(stringval13);
    r127 = `==`(stringval13, "FALSE");
    c51 = `as.logical`(r127);
    if c51 then L445() else L71();
  L474():
    dx28 = getTryDispatchBuiltinValue(dr28);
    goto L76(stringval19, dx28);
  L475():
    row23 = force? row22;
    col22 = ld col;
    check L476() else D113();
  L560():
    dr46 = tryDispatchBuiltin.1("[", types5);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L562() else L561();
  L561():
    __12 = ldf `[` in base;
    r190 = dyn __12(types5, -1, <missing>, FALSE);
    goto L106(r190);
  L585():
    st `col.names` = r210;
    goto L113();
  L593():
    stop8 = ldf stop;
    check L594() else D156();
  D93():
    deopt 345 [r118, l14, "TRUE", row12];
  D113():
    deopt 412 [stringval21, l29, stringval19, row23, col22];
  D156():
    deopt 623 [];
  D158():
    deopt 628 [cols4];
  L70(r125, dx21):
    st types = dx21;
    goto L63(r125);
  L71():
    stop6 = ldf stop;
    check L457() else D102();
  L107(r192):
    c92 = `as.logical`(r192);
    if c92 then L565() else L108();
  L435():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L69(dx18);
  L436():
    row13 = force? row12;
    col12 = ld col;
    check L437() else D94();
  L438():
    dr20 = tryDispatchBuiltin.0("[<-", l15, "logical");
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L440() else L439("logical", dr20);
  L439(r123, l17):
    row14 = ld row;
    check L441() else D95();
  L445():
    l18 = ld data;
    c52 = `is.object`(l18);
    if c52 then L446() else L447("FALSE", l18);
  L476():
    col23 = force? col22;
    ___9 = ldf `[<-` in base;
    r149 = dyn ___9(l29, stringval19, row23, col23);
    goto L76(stringval21, r149);
  L562():
    dx50 = getTryDispatchBuiltinValue(dr46);
    goto L106(dx50);
  L563():
    missing2 = ldf missing in base;
    r193 = dyn missing2(<sym col.names>);
    goto L107(r193);
  L564():
    r191 = dyn base15(<sym col.names>);
    goto L107(r191);
  L594():
    r216 = dyn stop8("more columns than column names");
    check L595() else D157();
  L597():
    cols5 = force? cols4;
    checkMissing(cols5);
    r218 = `>`(cols5, 0);
    c96 = `as.logical`(r218);
    if c96 then L598() else L119(c96);
  D94():
    deopt 346 [r118, l14, "TRUE", row13, col12];
  D95():
    deopt 353 [r123, l17, "logical", row14];
  D102():
    deopt 379 [];
  D157():
    deopt 625 [r216];
  L72(dx23):
    st data = dx23;
    l21 = ld types;
    c53 = `is.object`(l21);
    if c53 then L451() else L452("logical", l21);
  L108():
    sym16 = ldf length;
    base16 = ldf length in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L568() else L569();
  L109(first10):
    goto L113();
  L119(c98):
    c105 = `as.logical`(c98);
    if c105 then L605() else L121();
  L437():
    col13 = force? col12;
    ___4 = ldf `[<-` in base;
    r121 = dyn ___4(l14, "TRUE", row13, col13);
    goto L69(r121);
  L440():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L70("logical", dx20);
  L441():
    row15 = force? row14;
    col14 = ld col;
    check L442() else D96();
  L446():
    dr22 = tryDispatchBuiltin.0("[<-", l18, "FALSE");
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L448() else L447("FALSE", dr22);
  L447(r129, l20):
    row16 = ld row;
    check L449() else D98();
  L457():
    r138 = dyn stop6("Unrecognized value indicator");
    check L458() else D103();
  L565():
    first8 = ld first;
    check L566() else D143();
  L595():
    goto L118();
  L598():
    sym20 = ldf length;
    base20 = ldf length in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L599() else L600();
  D96():
    deopt 354 [r123, l17, "logical", row15, col14];
  D98():
    deopt 365 [r129, l20, "FALSE", row16];
  D103():
    deopt 381 [r138];
  D143():
    deopt 580 [first8];
  L73(r136, dx25):
    st types = dx25;
    goto L63(r136);
  L110(r195):
    sym17 = ldf length;
    base17 = ldf length in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L572() else L573();
  L120(c101, r220):
    cols6 = ld cols;
    check L603() else D161();
  L121():
    goto L122();
  L122():
    cols8 = ld cols;
    check L609() else D164();
  L442():
    col15 = force? col14;
    ___5 = ldf `[<-` in base;
    r126 = dyn ___5(l17, "logical", row15, col15);
    goto L70(r123, r126);
  L448():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L72(dx22);
  L449():
    row17 = force? row16;
    col16 = ld col;
    check L450() else D99();
  L451():
    dr24 = tryDispatchBuiltin.0("[<-", l21, "logical");
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L453() else L452("logical", dr24);
  L452(r134, l23):
    row18 = ld row;
    check L454() else D100();
  L458():
    goto L63(r138);
  L566():
    first9 = force? first8;
    checkMissing(first9);
    st `col.names` = first9;
    goto L109(first9);
  L568():
    first11 = ld first;
    check L570() else D144();
  L569():
    r194 = dyn base16(<sym first>);
    goto L110(r194);
  L599():
    col_names9 = ld `col.names`;
    check L601() else D159();
  L600():
    r219 = dyn base20(<sym col.names>);
    goto L120(c96, r219);
  L605():
    stop9 = ldf stop;
    check L606() else D162();
  D99():
    deopt 366 [r129, l20, "FALSE", row17, col16];
  D100():
    deopt 373 [r134, l23, "logical", row18];
  D144():
    deopt 585 [first11];
  D159():
    deopt 634 [c96, col_names9];
  D161():
    deopt 637 [c101, r220, cols6];
  D162():
    deopt 642 [];
  D164():
    deopt 647 [cols8];
  L111(r200, r201):
    r203 = `!=`(r200, r201);
    c93 = `as.logical`(r203);
    if c93 then L576() else L112();
  L450():
    col17 = force? col16;
    ___6 = ldf `[<-` in base;
    r132 = dyn ___6(l20, "FALSE", row17, col17);
    goto L72(r132);
  L453():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L73("logical", dx24);
  L454():
    row19 = force? row18;
    col18 = ld col;
    check L455() else D101();
  L570():
    first12 = force? first11;
    checkMissing(first12);
    length3 = ldf length in base;
    r196 = dyn length3(first12);
    check L571() else D145();
  L572():
    col_names5 = ld `col.names`;
    check L574() else D146();
  L573():
    r199 = dyn base17(<sym col.names>);
    goto L111(r195, r199);
  L601():
    col_names10 = force? col_names9;
    checkMissing(col_names10);
    length6 = ldf length in base;
    r221 = dyn length6(col_names10);
    check L602() else D160();
  L603():
    cols7 = force? cols6;
    checkMissing(cols7);
    r222 = `>`(r220, cols7);
    c102 = `as.logical`(r222);
    c103 = `&&`(c101, c102);
    goto L119(c103);
  L606():
    r223 = dyn stop9("more column names than columns");
    check L607() else D163();
  L609():
    cols9 = force? cols8;
    checkMissing(cols9);
    r225 = `==`(cols9, 0);
    c106 = `as.logical`(r225);
    if c106 then L610() else L123();
  D101():
    deopt 374 [r134, l23, "logical", row19, col18];
  D145():
    deopt 588 [r196];
  D146():
    deopt 590 [r195, col_names5];
  D160():
    deopt 637 [c96, r221];
  D163():
    deopt 644 [r223];
  L112():
    goto L109(NULL);
  L123():
    goto L124();
  L124():
    check_names1 = ld `check.names`;
    check L614() else D167();
  L455():
    col19 = force? col18;
    ___7 = ldf `[<-` in base;
    r137 = dyn ___7(l23, "logical", row19, col19);
    goto L73(r134, r137);
  L571():
    goto L110(r196);
  L574():
    col_names6 = force? col_names5;
    checkMissing(col_names6);
    length4 = ldf length in base;
    r202 = dyn length4(col_names6);
    check L575() else D147();
  L576():
    warning = ldf warning;
    check L577() else D148();
  L602():
    goto L120(c96, r221);
  L607():
    goto L122();
  L610():
    stop10 = ldf stop;
    check L611() else D165();
  D147():
    deopt 593 [r195, r202];
  D148():
    deopt 596 [];
  D165():
    deopt 652 [];
  D167():
    deopt 657 [check_names1];
  L575():
    goto L111(r195, r202);
  L577():
    r204 = dyn warning("header and 'col.names' are of different lengths");
    check L578() else D149();
  L611():
    r226 = dyn stop10("rows are empty: giving up");
    check L612() else D166();
  L614():
    check_names2 = force? check_names1;
    checkMissing(check_names2);
    c107 = `as.logical`(check_names2);
    if c107 then L615() else L125();
  D149():
    deopt 598 [r204];
  D166():
    deopt 654 [r226];
  L125():
    goto L126();
  L126():
    rlabp4 = ld rlabp;
    check L619() else D170();
  L578():
    goto L109(r204);
  L612():
    goto L124();
  L615():
    make_names = ldf `make.names`;
    check L616() else D168();
  D168():
    deopt 660 [];
  D170():
    deopt 668 [rlabp4];
  L616():
    p20 = prom<V +>{
      col_names11 = ld `col.names`;
      col_names12 = force? col_names11;
      checkMissing(col_names12);
      return col_names12;
    };
    r229 = dyn make_names[, unique](p20, TRUE);
    check L617() else D169();
  L619():
    rlabp5 = force? rlabp4;
    checkMissing(rlabp5);
    c108 = `as.logical`(rlabp5);
    if c108 then L620() else L127();
  D169():
    deopt 664 [r229];
  L127():
    goto L129();
  L129():
    sym22 = ldf names;
    base22 = ldf names in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L626() else L627();
  L617():
    st `col.names` = r229;
    goto L126();
  L620():
    sym21 = ldf c;
    base21 = ldf c in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L621() else L622();
  L128(r232):
    st `col.names` = r232;
    goto L129();
  L130(r236):
    st nmColClasses = r236;
    sym23 = ldf length;
    base23 = ldf length in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L630() else L631();
  L621():
    col_names13 = ld `col.names`;
    check L623() else D171();
  L622():
    r231 = dyn base21("row.names", <sym col.names>);
    goto L128(r231);
  L626():
    colClasses1 = ld colClasses;
    check L628() else D173();
  L627():
    r235 = dyn base22(<sym colClasses>);
    goto L130(r235);
  D171():
    deopt 673 [col_names13];
  D173():
    deopt 682 [colClasses1];
  L131(r239):
    cols10 = ld cols;
    check L634() else D177();
  L623():
    col_names14 = force? col_names13;
    checkMissing(col_names14);
    c109 = ldf c in base;
    r233 = dyn c109("row.names", col_names14);
    check L624() else D172();
  L628():
    colClasses2 = force? colClasses1;
    checkMissing(colClasses2);
    names = ldf names in base;
    r237 = dyn names(colClasses2);
    check L629() else D174();
  L630():
    colClasses3 = ld colClasses;
    check L632() else D175();
  L631():
    r238 = dyn base23(<sym colClasses>);
    goto L131(r238);
  D172():
    deopt 676 [r233];
  D174():
    deopt 685 [r237];
  D175():
    deopt 689 [colClasses3];
  D177():
    deopt 692 [r239, cols10];
  L624():
    goto L128(r233);
  L629():
    goto L130(r237);
  L632():
    colClasses4 = force? colClasses3;
    checkMissing(colClasses4);
    length7 = ldf length in base;
    r240 = dyn length7(colClasses4);
    check L633() else D176();
  L634():
    cols11 = force? cols10;
    checkMissing(cols11);
    r241 = `<`(r239, cols11);
    c110 = `as.logical`(r241);
    if c110 then L635() else L132();
  D176():
    deopt 692 [r240];
  L132():
    goto L144();
  L144():
    l40 = ld colClasses;
    c116 = `is.object`(l40);
    if c116 then L677() else L678("numeric", l40);
  L633():
    goto L131(r240);
  L635():
    sym24 = ldf `is.null`;
    base24 = ldf `is.null` in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L636() else L637();
  L133(r243):
    c112 = `as.logical`(r243);
    if c112 then L639() else L134();
  L145(dx57):
    st colClasses = dx57;
    _in_2 = ldf `%in%`;
    check L682() else D200();
  L636():
    nmColClasses = ld nmColClasses;
    check L638() else D178();
  L637():
    r242 = dyn base24(<sym nmColClasses>);
    goto L133(r242);
  L677():
    dr52 = tryDispatchBuiltin.0("[<-", l40, "numeric");
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L679() else L678("numeric", dr52);
  L678(r266, l42):
    _in_1 = ldf `%in%`;
    check L680() else D198();
  D178():
    deopt 696 [nmColClasses];
  D198():
    deopt 769 [r266, l42, "numeric"];
  D200():
    deopt 776 [];
  L134():
    sym26 = ldf rep_len;
    base26 = ldf rep_len in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L646() else L647();
  L136(r247):
    goto L144();
  L638():
    nmColClasses1 = force? nmColClasses;
    checkMissing(nmColClasses1);
    c111 = `==`(nmColClasses1, NULL);
    goto L133(c111);
  L639():
    sym25 = ldf rep_len;
    base25 = ldf rep_len in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L640() else L641();
  L679():
    dx56 = getTryDispatchBuiltinValue(dr52);
    goto L145(dx56);
  L680():
    p21 = prom<V +>{
      colClasses21 = ld colClasses;
      colClasses22 = force? colClasses21;
      checkMissing(colClasses22);
      return colClasses22;
    };
    p22 = prom<V +>{
      sym29 = ldf c;
      base29 = ldf c in base;
      guard29 = `==`.4(sym29, base29);
      if guard29 then L1() else L2();
    L0(r271):
      return r271;
    L1():
      c117 = ldf c in base;
      r272 = dyn c117("real", "double");
      goto L0(r272);
    L2():
      r270 = dyn base29("real", "double");
      goto L0(r270);
    };
    r274 = dyn _in_1(p21, p22);
    check L681() else D199();
  L682():
    p23 = prom<V +>{
      colClasses23 = ld colClasses;
      colClasses24 = force? colClasses23;
      checkMissing(colClasses24);
      return colClasses24;
    };
    p24 = prom<V +>{
      sym30 = ldf c;
      base30 = ldf c in base;
      guard30 = `==`.4(sym30, base30);
      if guard30 then L1() else L2();
    L0(r278):
      return r278;
    L1():
      c118 = ldf c in base;
      r279 = dyn c118("logical", "integer", "numeric", "complex", "character");
      goto L0(r279);
    L2():
      r277 = dyn base30("logical", "integer", "numeric", "complex", "character");
      goto L0(r277);
    };
    r281 = dyn _in_2(p23, p24);
    check L683() else D201();
  D199():
    deopt 772 [r266, l42, "numeric", r274];
  D201():
    deopt 779 [r281];
  L135(r245):
    st colClasses = r245;
    goto L136(r245);
  L137(r249):
    st tmp = r249;
    col_names15 = ld `col.names`;
    check L650() else D184();
  L640():
    colClasses5 = ld colClasses;
    check L642() else D179();
  L641():
    r244 = dyn base25(<sym colClasses>, <sym cols>);
    goto L135(r244);
  L646():
    cols14 = ld cols;
    check L648() else D182();
  L647():
    r248 = dyn base26(NA_STR, <sym cols>);
    goto L137(r248);
  L681():
    ___11 = ldf `[<-` in base;
    r275 = dyn ___11(l42, "numeric", r274);
    goto L145(r275);
  L683():
    st known = r281;
    _in_3 = ldf `%in%`;
    check L684() else D202();
  D179():
    deopt 701 [colClasses5];
  D182():
    deopt 711 [cols14];
  D184():
    deopt 716 [col_names15];
  D202():
    deopt 782 [];
  L642():
    colClasses6 = force? colClasses5;
    checkMissing(colClasses6);
    cols12 = ld cols;
    check L643() else D180();
  L648():
    cols15 = force? cols14;
    checkMissing(cols15);
    rep_len1 = ldf rep_len in base;
    r250 = dyn rep_len1(NA_STR, cols15);
    check L649() else D183();
  L650():
    col_names16 = force? col_names15;
    checkMissing(col_names16);
    l32 = ld tmp;
    names__1 = ldf `names<-`;
    check L651() else D185();
  L684():
    p25 = prom<V +>{
      colClasses25 = ld colClasses;
      colClasses26 = force? colClasses25;
      checkMissing(colClasses26);
      return colClasses26;
    };
    r283 = dyn _in_3(p25, "NULL");
    check L685() else D203();
  D180():
    deopt 703 [cols12];
  D183():
    deopt 714 [r250];
  D185():
    deopt 719 [col_names16, l32, col_names16];
  D203():
    deopt 785 [r283];
  L643():
    cols13 = force? cols12;
    checkMissing(cols13);
    rep_len = ldf rep_len in base;
    r246 = dyn rep_len(colClasses6, cols13);
    check L644() else D181();
  L649():
    goto L137(r250);
  L651():
    r251 = dyn names__1(l32, NULL, col_names16);
    check L652() else D186();
  L685():
    r284 = `!`(r283);
    st keep = r284;
    blank_lines_skip1 = ld `blank.lines.skip`;
    check L686() else D204();
  D181():
    deopt 706 [r246];
  D186():
    deopt 721 [col_names16, r251];
  D204():
    deopt 788 [blank_lines_skip1];
  L644():
    goto L135(r246);
  L652():
    st tmp = r251;
    sym27 = ldf match;
    base27 = ldf match in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L653() else L654();
  L686():
    blank_lines_skip2 = force? blank_lines_skip1;
    checkMissing(blank_lines_skip2);
    c119 = `as.logical`(blank_lines_skip2);
    if c119 then L687() else L146();
  L138(r253):
    st i = r253;
    sym28 = ldf any;
    base28 = ldf any in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L658() else L659();
  L146():
    goto L148();
  L148():
    nrows1 = ld nrows;
    check L695() else D208();
  L653():
    nmColClasses2 = ld nmColClasses;
    check L655() else D187();
  L654():
    r252 = dyn base27(<sym nmColClasses>, <sym col.names>, 0);
    goto L138(r252);
  L687():
    data18 = ld data;
    check L688() else D205();
  D187():
    deopt 725 [nmColClasses2];
  D205():
    deopt 790 [data18];
  D208():
    deopt 806 [nrows1];
  L139(r256):
    c113 = `as.logical`(r256);
    if c113 then L662() else L140();
  L655():
    nmColClasses3 = force? nmColClasses2;
    checkMissing(nmColClasses3);
    col_names17 = ld `col.names`;
    check L656() else D188();
  L658():
    i17 = ld i;
    check L660() else D190();
  L659():
    r255 = dyn base28(<lang `<=`(i, 0)>);
    goto L139(r255);
  L688():
    data19 = force? data18;
    checkMissing(data19);
    c120 = `is.object`(data19);
    if c120 then L689() else L690(data19);
  L695():
    nrows2 = force? nrows1;
    checkMissing(nrows2);
    r290 = `>`(nrows2, -1.0);
    c121 = `as.logical`(r290);
    if c121 then L696() else L149(c121);
  D188():
    deopt 727 [col_names17];
  D190():
    deopt 736 [i17];
  L140():
    goto L141();
  L141():
    colClasses7 = ld colClasses;
    check L666() else D194();
  L147(dx59):
    st data = dx59;
    goto L148();
  L149(c123):
    c127 = `as.logical`(c123);
    if c127 then L701() else L150();
  L656():
    col_names18 = force? col_names17;
    checkMissing(col_names18);
    match = ldf match in base;
    r254 = dyn match(nmColClasses3, col_names18, 0, NULL);
    check L657() else D189();
  L660():
    i18 = force? i17;
    checkMissing(i18);
    r257 = `<=`(i18, 0);
    any = ldf any in base;
    r258 = dyn any(r257);
    check L661() else D191();
  L662():
    warning1 = ldf warning;
    check L663() else D192();
  L689():
    dr54 = tryDispatchBuiltin.1("[", data19);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L691() else L690(dr54);
  L690(data21):
    apply = ldf apply;
    check L692() else D206();
  L696():
    nrows3 = ld nrows;
    check L697() else D209();
  D189():
    deopt 732 [r254];
  D191():
    deopt 741 [r258];
  D192():
    deopt 743 [];
  D194():
    deopt 748 [colClasses7];
  D206():
    deopt 793 [data21];
  D209():
    deopt 810 [c121, nrows3];
  L150():
    goto L153();
  L153():
    nrow10 = ldf nrow;
    check L710() else D214();
  L657():
    goto L138(r254);
  L661():
    goto L139(r258);
  L663():
    r259 = dyn warning1("not all columns named in 'colClasses' exist");
    check L664() else D193();
  L666():
    colClasses8 = force? colClasses7;
    checkMissing(colClasses8);
    l33 = ld tmp;
    c114 = `is.object`(l33);
    if c114 then L667() else L668(colClasses8, l33);
  L691():
    dx58 = getTryDispatchBuiltinValue(dr54);
    goto L147(dx58);
  L692():
    p26 = prom<V +>{
      data22 = ld data;
      data23 = force? data22;
      checkMissing(data23);
      return data23;
    };
    p27 = prom<V +>{
      r286 = clos inner2501545716;
      return r286;
    };
    r288 = dyn apply(p26, 1, p27);
    check L693() else D207();
  L697():
    nrows4 = force? nrows3;
    checkMissing(nrows4);
    nrow9 = ldf nrow;
    check L698() else D210();
  L701():
    data26 = ld data;
    check L702() else D212();
  D193():
    deopt 745 [r259];
  D207():
    deopt 797 [data21, r288];
  D210():
    deopt 812 [c121, nrows4];
  D212():
    deopt 817 [data26];
  D214():
    deopt 832 [];
  L142(dx53):
    st tmp = dx53;
    tmp2 = ld tmp;
    check L675() else D197();
  L664():
    goto L141();
  L667():
    dr48 = tryDispatchBuiltin.0("[<-", l33, colClasses8);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L669() else L668(colClasses8, dr48);
  L668(colClasses10, l35):
    i19 = ld i;
    check L670() else D195();
  L693():
    __14 = ldf `[` in base;
    r289 = dyn __14(data19, r288, <missing>, FALSE);
    goto L147(r289);
  L698():
    p28 = prom<V +>{
      data24 = ld data;
      data25 = force? data24;
      checkMissing(data25);
      return data25;
    };
    r292 = dyn nrow9(p28);
    check L699() else D211();
  L702():
    data27 = force? data26;
    checkMissing(data27);
    c128 = `is.object`(data27);
    if c128 then L703() else L704(data27);
  L710():
    p29 = prom<V +>{
      data33 = ld data;
      data34 = force? data33;
      checkMissing(data34);
      return data34;
    };
    r299 = dyn nrow10(p29);
    check L711() else D215();
  D195():
    deopt 751 [colClasses10, l35, colClasses8, i19];
  D197():
    deopt 760 [tmp2];
  D211():
    deopt 814 [c121, nrows4, r292];
  D215():
    deopt 834 [r299];
  L151(dx62):
    st data = dx62;
    goto L153();
  L669():
    dx52 = getTryDispatchBuiltinValue(dr48);
    goto L142(dx52);
  L670():
    i20 = force? i19;
    checkMissing(i20);
    c115 = `is.object`(i20);
    if c115 then L671() else L672(colClasses10, l35, colClasses8, i20);
  L675():
    tmp3 = force? tmp2;
    checkMissing(tmp3);
    st colClasses = tmp3;
    goto L136(tmp3);
  L699():
    r293 = `<`(nrows4, r292);
    c124 = `as.logical`(r293);
    c125 = `&&`(c121, c124);
    goto L149(c125);
  L703():
    dr56 = tryDispatchBuiltin.1("[", data27);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L705() else L704(dr56);
  L704(data29):
    sym31 = ldf seq_len;
    base31 = ldf seq_len in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L706() else L707();
  L711():
    st nlines = r299;
    l43 = ld data;
    c129 = `is.object`(l43);
    if c129 then L712() else L713(NA_LGL, l43);
  L143(colClasses19, l39, colClasses20, dx55):
    ___10 = ldf `[<-` in base;
    r263 = dyn ___10(l39, colClasses20, dx55);
    goto L142(r263);
  L152(r295):
    __15 = ldf `[` in base;
    r297 = dyn __15(data27, r295, <missing>, FALSE);
    goto L151(r297);
  L154(dx65):
    st data = dx65;
    as_data_frame = ldf `as.data.frame`;
    check L717() else D218();
  L671():
    dr50 = tryDispatchBuiltin.1("[", i20);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L673() else L672(colClasses10, l35, colClasses8, dr50);
  L672(colClasses15, l37, colClasses16, i22):
    i23 = ld i;
    check L674() else D196();
  L705():
    dx61 = getTryDispatchBuiltinValue(dr56);
    goto L151(dx61);
  L706():
    nrows5 = ld nrows;
    check L708() else D213();
  L707():
    r294 = dyn base31(<sym nrows>);
    goto L152(r294);
  L712():
    dr58 = tryDispatchBuiltin.0("[<-", l43, NA_LGL);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L714() else L713(NA_LGL, dr58);
  L713(r301, l45):
    _in_4 = ldf `%in%`;
    check L715() else D216();
  D196():
    deopt 753 [colClasses15, l37, colClasses16, i22, i23];
  D213():
    deopt 820 [data29, nrows5];
  D216():
    deopt 840 [r301, l45, NA_LGL];
  D218():
    deopt 847 [];
  L673():
    dx54 = getTryDispatchBuiltinValue(dr50);
    goto L143(colClasses10, l35, colClasses8, dx54);
  L674():
    i24 = force? i23;
    checkMissing(i24);
    r261 = `>`(i24, 0);
    __13 = ldf `[` in base;
    r262 = dyn __13(i22, r261);
    goto L143(colClasses15, l37, colClasses16, r262);
  L708():
    nrows6 = force? nrows5;
    checkMissing(nrows6);
    r296 = seq_len(nrows6);
    goto L152(r296);
  L714():
    dx64 = getTryDispatchBuiltinValue(dr58);
    goto L154(dx64);
  L715():
    p30 = prom<V +>{
      data35 = ld data;
      data36 = force? data35;
      checkMissing(data36);
      return data36;
    };
    p31 = prom<V +>{
      na_strings1 = ld `na.strings`;
      na_strings2 = force? na_strings1;
      checkMissing(na_strings2);
      return na_strings2;
    };
    r306 = dyn _in_4(p30, p31);
    check L716() else D217();
  L717():
    p32 = prom<V +>{
      data37 = ld data;
      data38 = force? data37;
      checkMissing(data38);
      return data38;
    };
    r309 = dyn as_data_frame[, stringsAsFactors](p32, FALSE);
    check L718() else D219();
  D217():
    deopt 843 [r301, l45, NA_LGL, r306];
  D219():
    deopt 851 [r309];
  L716():
    ___12 = ldf `[<-` in base;
    r307 = dyn ___12(l45, NA_LGL, r306);
    goto L154(r307);
  L718():
    st data = r309;
    col_names19 = ld `col.names`;
    check L719() else D220();
  D220():
    deopt 853 [col_names19];
  L719():
    col_names20 = force? col_names19;
    checkMissing(col_names20);
    l46 = ld data;
    names__2 = ldf `names<-`;
    check L720() else D221();
  D221():
    deopt 856 [col_names20, l46, col_names20];
  L720():
    r310 = dyn names__2(l46, NULL, col_names20);
    check L721() else D222();
  D222():
    deopt 858 [col_names20, r310];
  L721():
    st data = r310;
    cols16 = ld cols;
    check L722() else D223();
  D223():
    deopt 860 [cols16];
  L722():
    cols17 = force? cols16;
    checkMissing(cols17);
    sym32 = ldf length;
    base32 = ldf length in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L723() else L724();
  L155(cols20, r312):
    r314 = `!=`(cols20, r312);
    c130 = `as.logical`(r314);
    if c130 then L727() else L156();
  L723():
    data39 = ld data;
    check L725() else D224();
  L724():
    r311 = dyn base32(<sym data>);
    goto L155(cols17, r311);
  D224():
    deopt 863 [cols17, data39];
  L156():
    goto L158();
  L158():
    sym35 = ldf `is.logical`;
    base35 = ldf `is.logical` in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L735() else L736();
  L725():
    data40 = force? data39;
    checkMissing(data40);
    length8 = ldf length in base;
    r313 = dyn length8(data40);
    check L726() else D225();
  L727():
    warning2 = ldf warning;
    check L728() else D226();
  D225():
    deopt 866 [cols17, r313];
  D226():
    deopt 869 [];
  L159(r326):
    c132 = `as.logical`(r326);
    if c132 then L738() else L160();
  L726():
    goto L155(cols17, r313);
  L728():
    p33 = prom<V +>{
      cols21 = ld cols;
      cols22 = force? cols21;
      checkMissing(cols22);
      return cols22;
    };
    p34 = prom<V +>{
      sym33 = ldf length;
      base33 = ldf length in base;
      guard33 = `==`.4(sym33, base33);
      if guard33 then L1() else L2();
    L0(r317):
      return r317;
    L1():
      data41 = ld data;
      data42 = force? data41;
      checkMissing(data42);
      length9 = ldf length in base;
      r318 = dyn length9(data42);
      goto L0(r318);
    L2():
      r316 = dyn base33(<sym data>);
      goto L0(r316);
    };
    r320 = dyn warning2[, , , , domain]("cols = ", p33, " != length(data) = ", p34, NA_LGL);
    check L729() else D227();
  L735():
    as_is1 = ld `as.is`;
    check L737() else D230();
  L736():
    r325 = dyn base35(<sym as.is>);
    goto L159(r325);
  D227():
    deopt 876 [r320];
  D230():
    deopt 887 [as_is1];
  L160():
    sym37 = ldf `is.numeric`;
    base37 = ldf `is.numeric` in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L745() else L746();
  L162():
    keep = ld keep;
    check L810() else D264();
  L729():
    sym34 = ldf length;
    base34 = ldf length in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L730() else L731();
  L737():
    as_is2 = force? as_is1;
    checkMissing(as_is2);
    c131 = `is.logical`(as_is2);
    goto L159(c131);
  L738():
    sym36 = ldf rep_len;
    base36 = ldf rep_len in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L739() else L740();
  D264():
    deopt 1009 [keep];
  L157(r322):
    st cols = r322;
    goto L158();
  L161(r328):
    st `as.is` = r328;
    goto L162();
  L163(r332):
    c133 = `as.logical`(r332);
    if c133 then L749() else L164();
  L730():
    data43 = ld data;
    check L732() else D228();
  L731():
    r321 = dyn base34(<sym data>);
    goto L157(r321);
  L739():
    as_is3 = ld `as.is`;
    check L741() else D231();
  L740():
    r327 = dyn base36(<sym as.is>, <sym cols>);
    goto L161(r327);
  L745():
    as_is5 = ld `as.is`;
    check L747() else D234();
  L746():
    r331 = dyn base37(<sym as.is>);
    goto L163(r331);
  L810():
    keep1 = force? keep;
    checkMissing(keep1);
    known = ld known;
    check L811() else D265();
  D228():
    deopt 879 [data43];
  D231():
    deopt 892 [as_is3];
  D234():
    deopt 901 [as_is5];
  D265():
    deopt 1010 [keep1, known];
  L164():
    sym40 = ldf `is.character`;
    base40 = ldf `is.character` in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L770() else L771();
  L732():
    data44 = force? data43;
    checkMissing(data44);
    length10 = ldf length in base;
    r323 = dyn length10(data44);
    check L733() else D229();
  L741():
    as_is4 = force? as_is3;
    checkMissing(as_is4);
    cols23 = ld cols;
    check L742() else D232();
  L747():
    as_is6 = force? as_is5;
    checkMissing(as_is6);
    is_numeric = ldf `is.numeric` in base;
    r333 = dyn is_numeric(as_is6);
    check L748() else D235();
  L749():
    sym38 = ldf any;
    base38 = ldf any in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L750() else L751();
  L811():
    known1 = force? known;
    checkMissing(known1);
    r383 = `!`(known1);
    r384 = `&&`(keep1, r383);
    st do = r384;
    rlabp6 = ld rlabp;
    check L812() else D266();
  D229():
    deopt 882 [r323];
  D232():
    deopt 894 [cols23];
  D235():
    deopt 904 [r333];
  D266():
    deopt 1015 [rlabp6];
  L165(r335):
    c134 = `as.logical`(r335);
    if c134 then L756() else L166();
  L170(r351):
    c137 = `as.logical`(r351);
    if c137 then L773() else L171();
  L733():
    goto L157(r323);
  L742():
    cols24 = force? cols23;
    checkMissing(cols24);
    rep_len2 = ldf rep_len in base;
    r329 = dyn rep_len2(as_is4, cols24);
    check L743() else D233();
  L748():
    goto L163(r333);
  L750():
    as_is7 = ld `as.is`;
    check L752() else D236();
  L751():
    r334 = dyn base38(<lang `|`(`<`(as.is, 1.0), `>`(as.is, cols))>);
    goto L165(r334);
  L770():
    as_is13 = ld `as.is`;
    check L772() else D246();
  L771():
    r350 = dyn base40(<sym as.is>);
    goto L170(r350);
  L812():
    rlabp7 = force? rlabp6;
    checkMissing(rlabp7);
    c142 = `as.logical`(rlabp7);
    if c142 then L813() else L181();
  D233():
    deopt 897 [r329];
  D236():
    deopt 907 [as_is7];
  D246():
    deopt 942 [as_is13];
  L166():
    goto L167();
  L167():
    sym39 = ldf `rep.int`;
    base39 = ldf `rep.int` in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L760() else L761();
  L171():
    sym44 = ldf length;
    base44 = ldf length in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L801() else L802();
  L181():
    goto L183();
  L183():
    cols35 = ld cols;
    check L818() else D267();
  L743():
    goto L161(r329);
  L752():
    as_is8 = force? as_is7;
    checkMissing(as_is8);
    r336 = `<`(as_is8, 1.0);
    as_is9 = ld `as.is`;
    check L753() else D237();
  L756():
    stop11 = ldf stop;
    check L757() else D240();
  L772():
    as_is14 = force? as_is13;
    checkMissing(as_is14);
    c136 = `is.character`(as_is14);
    goto L170(c136);
  L773():
    sym41 = ldf match;
    base41 = ldf match in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L774() else L775();
  L813():
    l53 = ld do;
    c143 = `is.object`(l53);
    if c143 then L814() else L815(FALSE, l53);
  D237():
    deopt 910 [r336, as_is9];
  D240():
    deopt 918 [];
  D267():
    deopt 1027 [1, cols35];
  L168(r343):
    st i = r343;
    l47 = ld i;
    c135 = `is.object`(l47);
    if c135 then L764() else L765(TRUE, l47);
  L172(r353):
    st i = r353;
    sym42 = ldf any;
    base42 = ldf any in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L779() else L780();
  L179(r372):
    cols31 = ld cols;
    check L805() else D261();
  L182(r388, dx73):
    st do = dx73;
    goto L183();
  L753():
    as_is10 = force? as_is9;
    checkMissing(as_is10);
    cols25 = ld cols;
    check L754() else D238();
  L757():
    r340 = dyn stop11("invalid numeric 'as.is' expression");
    check L758() else D241();
  L760():
    cols27 = ld cols;
    check L762() else D242();
  L761():
    r342 = dyn base39(FALSE, <sym cols>);
    goto L168(r342);
  L774():
    as_is15 = ld `as.is`;
    check L776() else D247();
  L775():
    r352 = dyn base41(<sym as.is>, <sym col.names>, 0);
    goto L172(r352);
  L801():
    as_is17 = ld `as.is`;
    check L803() else D259();
  L802():
    r371 = dyn base44(<sym as.is>);
    goto L179(r371);
  L814():
    dr66 = tryDispatchBuiltin.0("[<-", l53, FALSE);
    dc33 = getTryDispatchBuiltinDispatched(dr66);
    if dc33 then L816() else L815(FALSE, dr66);
  L815(r386, l55):
    ___15 = ldf `[<-` in base;
    r389 = dyn ___15(l55, FALSE, 1);
    goto L182(r386, r389);
  L818():
    cols36 = force? cols35;
    checkMissing(cols36);
    r391 = `:`(1, cols36);
    c144 = `is.object`(r391);
    if c144 then L819() else L820(r391);
  D238():
    deopt 911 [r336, as_is10, cols25];
  D241():
    deopt 920 [r340];
  D242():
    deopt 926 [cols27];
  D247():
    deopt 947 [as_is15];
  D259():
    deopt 995 [as_is17];
  D261():
    deopt 998 [r372, cols31];
  L169(dx67):
    st i = dx67;
    i25 = ld i;
    check L768() else D245();
  L173(r356):
    c138 = `as.logical`(r356);
    if c138 then L783() else L174();
  L184(dx75):
    s = toForSeq(dx75);
    l56 = length(s);
    i37 = 0;
    goto L185(i37);
  L754():
    cols26 = force? cols25;
    checkMissing(cols26);
    r337 = `>`(as_is10, cols26);
    r338 = `||`(r336, r337);
    any1 = ldf any in base;
    r339 = dyn any1(r338);
    check L755() else D239();
  L758():
    goto L167();
  L762():
    cols28 = force? cols27;
    checkMissing(cols28);
    rep_int = ldf `rep.int` in base;
    r344 = dyn rep_int(FALSE, cols28);
    check L763() else D243();
  L764():
    dr60 = tryDispatchBuiltin.0("[<-", l47, TRUE);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L766() else L765(TRUE, dr60);
  L765(r346, l49):
    as_is11 = ld `as.is`;
    check L767() else D244();
  L776():
    as_is16 = force? as_is15;
    checkMissing(as_is16);
    col_names21 = ld `col.names`;
    check L777() else D248();
  L779():
    i27 = ld i;
    check L781() else D250();
  L780():
    r355 = dyn base42(<lang `<=`(i, 0)>);
    goto L173(r355);
  L803():
    as_is18 = force? as_is17;
    checkMissing(as_is18);
    length11 = ldf length in base;
    r373 = dyn length11(as_is18);
    check L804() else D260();
  L805():
    cols32 = force? cols31;
    checkMissing(cols32);
    r374 = `!=`(r372, cols32);
    c141 = `as.logical`(r374);
    if c141 then L806() else L180();
  L816():
    dx72 = getTryDispatchBuiltinValue(dr66);
    goto L182(FALSE, dx72);
  L819():
    dr68 = tryDispatchBuiltin.1("[", r391);
    dc34 = getTryDispatchBuiltinDispatched(dr68);
    if dc34 then L821() else L820(dr68);
  L820(r393):
    do = ld do;
    check L822() else D268();
  D239():
    deopt 916 [r339];
  D243():
    deopt 929 [r344];
  D244():
    deopt 934 [r346, l49, TRUE, as_is11];
  D245():
    deopt 938 [i25];
  D248():
    deopt 949 [col_names21];
  D250():
    deopt 958 [i27];
  D260():
    deopt 998 [r373];
  D268():
    deopt 1030 [r393, do];
  L174():
    goto L175();
  L175():
    i29 = ld i;
    check L787() else D254();
  L180():
    goto L162();
  L185(i38):
    i39 = `+`.1(i38, 1);
    c145 = `<`.1(l56, i39);
    if c145 then L823() else L205();
  L755():
    goto L165(r339);
  L763():
    goto L168(r344);
  L766():
    dx66 = getTryDispatchBuiltinValue(dr60);
    goto L169(dx66);
  L767():
    as_is12 = force? as_is11;
    ___13 = ldf `[<-` in base;
    r349 = dyn ___13(l49, TRUE, as_is12);
    goto L169(r349);
  L768():
    i26 = force? i25;
    checkMissing(i26);
    st `as.is` = i26;
    goto L162();
  L777():
    col_names22 = force? col_names21;
    checkMissing(col_names22);
    match1 = ldf match in base;
    r354 = dyn match1(as_is16, col_names22, 0, NULL);
    check L778() else D249();
  L781():
    i28 = force? i27;
    checkMissing(i28);
    r357 = `<=`(i28, 0);
    any2 = ldf any in base;
    r358 = dyn any2(r357);
    check L782() else D251();
  L783():
    warning3 = ldf warning;
    check L784() else D252();
  L804():
    goto L179(r373);
  L806():
    stop12 = ldf stop;
    check L807() else D262();
  L821():
    dx74 = getTryDispatchBuiltinValue(dr68);
    goto L184(dx74);
  L822():
    do1 = force? do;
    __17 = ldf `[` in base;
    r394 = dyn __17(r393, do1);
    goto L184(r394);
  D249():
    deopt 954 [r354];
  D251():
    deopt 963 [r358];
  D252():
    deopt 965 [];
  D254():
    deopt 970 [i29];
  D262():
    deopt 1002 [];
  L205():
    x = `[[`(s, i39, NULL, TRUE);
    st i = x;
    sym46 = ldf `is.na`;
    base46 = ldf `is.na` in base;
    guard46 = `==`.4(sym46, base46);
    if guard46 then L824() else L825();
  L778():
    goto L172(r354);
  L782():
    goto L173(r358);
  L784():
    r359 = dyn warning3("not all columns named in 'as.is' exist");
    check L785() else D253();
  L787():
    i30 = force? i29;
    checkMissing(i30);
    c139 = `is.object`(i30);
    if c139 then L788() else L789(i30);
  L807():
    p37 = prom<V +>{
      gettextf = ldf gettextf;
      p35 = prom<V +>{
        sym45 = ldf length;
        base45 = ldf length in base;
        guard45 = `==`.4(sym45, base45);
        if guard45 then L1() else L2();
      L0(r376):
        return r376;
      L1():
        as_is19 = ld `as.is`;
        as_is20 = force? as_is19;
        checkMissing(as_is20);
        length12 = ldf length in base;
        r377 = dyn length12(as_is20);
        goto L0(r377);
      L2():
        r375 = dyn base45(<sym as.is>);
        goto L0(r375);
      };
      p36 = prom<V +>{
        cols33 = ld cols;
        cols34 = force? cols33;
        checkMissing(cols34);
        return cols34;
      };
      r380 = dyn gettextf("'as.is' has the wrong length %d  != cols = %d", p35, p36);
      return r380;
    };
    r382 = dyn stop12[, domain](p37, NA_LGL);
    check L808() else D263();
  L823():
    st compactRN = TRUE;
    sym48 = ldf missing;
    base48 = ldf missing in base;
    guard48 = `==`.4(sym48, base48);
    if guard48 then L897() else L898();
  D253():
    deopt 967 [r359];
  D263():
    deopt 1006 [r382];
  L176(dx69):
    st i = dx69;
    sym43 = ldf `rep.int`;
    base43 = ldf `rep.int` in base;
    guard43 = `==`.4(sym43, base43);
    if guard43 then L792() else L793();
  L186(i44, r396):
    c147 = `as.logical`(r396);
    if c147 then L832() else L188();
  L206(r450):
    c178 = `as.logical`(r450);
    if c178 then L899() else L207();
  L785():
    goto L175();
  L788():
    dr62 = tryDispatchBuiltin.1("[", i30);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L790() else L789(dr62);
  L789(i32):
    i33 = ld i;
    check L791() else D255();
  L808():
    goto L162();
  L824():
    colClasses27 = ld colClasses;
    check L826() else D269();
  L825():
    r395 = dyn base46(<lang `[`(colClasses, i)>);
    goto L186(i39, r395);
  L897():
    missing4 = ldf missing in base;
    r451 = dyn missing4(<sym row.names>);
    goto L206(r451);
  L898():
    r449 = dyn base48(<sym row.names>);
    goto L206(r449);
  D255():
    deopt 972 [i32, i33];
  D269():
    deopt 1035 [i39, colClasses27];
  L177(r364):
    st `as.is` = r364;
    l50 = ld `as.is`;
    c140 = `is.object`(l50);
    if c140 then L796() else L797(TRUE, l50);
  L188():
    colClasses31 = ld colClasses;
    check L863() else D284();
  L197(i88, r421):
    l57 = ld data;
    c177 = `is.object`(l57);
    if c177 then L893() else L894(i88, r421, l57);
  L207():
    sym50 = ldf `is.null`;
    base50 = ldf `is.null` in base;
    guard50 = `==`.4(sym50, base50);
    if guard50 then L918() else L919();
  L213():
    data97 = ld data;
    check L990() else D335();
  L790():
    dx68 = getTryDispatchBuiltinValue(dr62);
    goto L176(dx68);
  L791():
    i34 = force? i33;
    checkMissing(i34);
    r361 = `>`(i34, 0);
    __16 = ldf `[` in base;
    r362 = dyn __16(i32, r361);
    goto L176(r362);
  L792():
    cols29 = ld cols;
    check L794() else D256();
  L793():
    r363 = dyn base43(FALSE, <sym cols>);
    goto L177(r363);
  L826():
    colClasses28 = force? colClasses27;
    checkMissing(colClasses28);
    c146 = `is.object`(colClasses28);
    if c146 then L827() else L828(i39, colClasses28);
  L832():
    sym47 = ldf any;
    base47 = ldf any in base;
    guard47 = `==`.4(sym47, base47);
    if guard47 then L833() else L834();
  L899():
    rlabp8 = ld rlabp;
    check L900() else D300();
  D256():
    deopt 981 [cols29];
  D284():
    deopt 1085 [i44, colClasses31];
  D300():
    deopt 1141 [rlabp8];
  D335():
    deopt 1278 [data97];
  L178(r369, dx71):
    st `as.is` = dx71;
    goto L162();
  L187(i48, dx77):
    is_na2 = ldf `is.na` in base;
    r398 = dyn is_na2(dx77);
    check L831() else D271();
  L189(i55, r400):
    c149 = `as.logical`(r400);
    if c149 then L841() else L191();
  L204(i126, dx106):
    st data = dx106;
    goto L185(i126);
  L214(r463):
    c184 = `as.logical`(r463);
    if c184 then L921() else L215();
  L794():
    cols30 = force? cols29;
    checkMissing(cols30);
    rep_int1 = ldf `rep.int` in base;
    r365 = dyn rep_int1(FALSE, cols30);
    check L795() else D257();
  L796():
    dr64 = tryDispatchBuiltin.0("[<-", l50, TRUE);
    dc32 = getTryDispatchBuiltinDispatched(dr64);
    if dc32 then L798() else L797(TRUE, dr64);
  L797(r367, l52):
    i35 = ld i;
    check L799() else D258();
  L827():
    dr70 = tryDispatchBuiltin.1("[", colClasses28);
    dc35 = getTryDispatchBuiltinDispatched(dr70);
    if dc35 then L829() else L828(i39, dr70);
  L828(i46, colClasses30):
    i49 = ld i;
    check L830() else D270();
  L833():
    types8 = ld types;
    check L835() else D272();
  L834():
    r399 = dyn base47(<lang `==`(`[`(types, , i), "character")>);
    goto L189(i44, r399);
  L863():
    colClasses32 = force? colClasses31;
    checkMissing(colClasses32);
    c166 = `is.object`(colClasses32);
    if c166 then L864() else L865(i44, colClasses32);
  L893():
    dr100 = tryDispatchBuiltin.0("[[<-", l57, r421);
    dc50 = getTryDispatchBuiltinDispatched(dr100);
    if dc50 then L895() else L894(i88, r421, dr100);
  L894(i124, r445, l59):
    i127 = ld i;
    check L896() else D299();
  L900():
    rlabp9 = force? rlabp8;
    checkMissing(rlabp9);
    c179 = `as.logical`(rlabp9);
    if c179 then L901() else L208();
  L918():
    row_names1 = ld `row.names`;
    check L920() else D306();
  L919():
    r462 = dyn base50(<sym row.names>);
    goto L214(r462);
  L990():
    data98 = force? data97;
    checkMissing(data98);
    c205 = `is.object`(data98);
    if c205 then L991() else L992(data98);
  D257():
    deopt 984 [r365];
  D258():
    deopt 989 [r367, l52, TRUE, i35];
  D270():
    deopt 1037 [i46, colClasses30, i49];
  D271():
    deopt 1041 [i48, r398];
  D272():
    deopt 1044 [i44, types8];
  D299():
    deopt 1128 [i124, r445, l59, r421, i127];
  D306():
    deopt 1170 [row_names1];
  L191():
    type_convert = ldf `type.convert`;
    check L860() else D282();
  L196(i83, r411):
    goto L197(i83, r411);
  L198(i92, dx90):
    r423 = `==`(dx90, "factor");
    c167 = `as.logical`(r423);
    if c167 then L868() else L199();
  L208():
    _set_row_names = ldf `.set_row_names`;
    check L915() else D304();
  L212(r455):
    goto L213();
  L215():
    sym52 = ldf `is.character`;
    base52 = ldf `is.character` in base;
    guard52 = `==`.4(sym52, base52);
    if guard52 then L925() else L926();
  L233(dx129):
    st data = dx129;
    sym57 = ldf `is.object`;
    base57 = ldf `is.object` in base;
    guard57 = `==`.4(sym57, base57);
    if guard57 then L995() else L996();
  L795():
    goto L177(r365);
  L798():
    dx70 = getTryDispatchBuiltinValue(dr64);
    goto L178(TRUE, dx70);
  L799():
    i36 = force? i35;
    ___14 = ldf `[<-` in base;
    r370 = dyn ___14(l52, TRUE, i36);
    goto L178(r367, r370);
  L829():
    dx76 = getTryDispatchBuiltinValue(dr70);
    goto L187(i39, dx76);
  L830():
    i50 = force? i49;
    __18 = ldf `[` in base;
    r397 = dyn __18(colClasses30, i50);
    goto L187(i46, r397);
  L831():
    goto L186(i48, r398);
  L835():
    types9 = force? types8;
    checkMissing(types9);
    c148 = `is.object`(types9);
    if c148 then L836() else L837(i44, types9);
  L841():
    stringsAsFactors3 = ld stringsAsFactors;
    check L842() else D275();
  L864():
    dr84 = tryDispatchBuiltin.1("[", colClasses32);
    dc42 = getTryDispatchBuiltinDispatched(dr84);
    if dc42 then L866() else L865(i44, dr84);
  L865(i90, colClasses34):
    i93 = ld i;
    check L867() else D285();
  L895():
    dx105 = getTryDispatchBuiltinValue(dr100);
    goto L204(i88, dx105);
  L896():
    i128 = force? i127;
    ____ = ldf `[[<-` in base;
    r448 = dyn ____(l59, r421, i128);
    goto L204(i124, r448);
  L901():
    data73 = ld data;
    check L902() else D301();
  L920():
    row_names2 = force? row_names1;
    checkMissing(row_names2);
    c183 = `==`(row_names2, NULL);
    goto L214(c183);
  L921():
    _set_row_names1 = ldf `.set_row_names`;
    check L922() else D307();
  L991():
    dr122 = tryDispatchBuiltin.1("[", data98);
    dc61 = getTryDispatchBuiltinDispatched(dr122);
    if dc61 then L993() else L992(dr122);
  L992(data100):
    keep14 = ld keep;
    check L994() else D336();
  D275():
    deopt 1055 [i55, stringsAsFactors3];
  D282():
    deopt 1074 [i55];
  D285():
    deopt 1087 [i90, colClasses34, i93];
  D301():
    deopt 1143 [data73];
  D304():
    deopt 1165 [];
  D307():
    deopt 1174 [];
  D336():
    deopt 1280 [data100, keep14];
  L190(i59, dx79):
    r402 = `==`(dx79, "character");
    any3 = ldf any in base;
    r403 = dyn any3(r402);
    check L840() else D274();
  L199():
    colClasses35 = ld colClasses;
    check L872() else D288();
  L216(r470):
    c186 = `as.logical`(r470);
    if c186 then L928() else L217();
  L234(r506):
    c207 = `as.logical`(r506);
    if c207 then L235(c207) else L998();
  L836():
    dr72 = tryDispatchBuiltin.1("[", types9);
    dc36 = getTryDispatchBuiltinDispatched(dr72);
    if dc36 then L838() else L837(i44, dr72);
  L837(i57, types11):
    i60 = ld i;
    check L839() else D273();
  L842():
    stringsAsFactors4 = force? stringsAsFactors3;
    checkMissing(stringsAsFactors4);
    c150 = `as.logical`(stringsAsFactors4);
    if c150 then L843() else L192(i55, c150);
  L860():
    p39 = prom<V +>{
      data53 = ld data;
      data54 = force? data53;
      checkMissing(data54);
      c164 = `is.object`(data54);
      if c164 then L1() else L2(data54);
    L0(dx86):
      return dx86;
    L1():
      dr80 = tryDispatchBuiltin.1("[[", data54);
      dc40 = getTryDispatchBuiltinDispatched(dr80);
      if dc40 then L3() else L2(dr80);
    L2(data56):
      i84 = ld i;
      i85 = force? i84;
      __23 = ldf `[[` in base;
      r412 = dyn __23(data56, i85);
      goto L0(r412);
    L3():
      dx85 = getTryDispatchBuiltinValue(dr80);
      goto L0(dx85);
    };
    p40 = prom<V +>{
      as_is25 = ld `as.is`;
      as_is26 = force? as_is25;
      checkMissing(as_is26);
      c165 = `is.object`(as_is26);
      if c165 then L1() else L2(as_is26);
    L0(dx88):
      return dx88;
    L1():
      dr82 = tryDispatchBuiltin.1("[", as_is26);
      dc41 = getTryDispatchBuiltinDispatched(dr82);
      if dc41 then L3() else L2(dr82);
    L2(as_is28):
      i86 = ld i;
      i87 = force? i86;
      __24 = ldf `[` in base;
      r414 = dyn __24(as_is28, i87);
      goto L0(r414);
    L3():
      dx87 = getTryDispatchBuiltinValue(dr82);
      goto L0(dx87);
    };
    p41 = prom<V +>{
      dec1 = ld dec;
      dec2 = force? dec1;
      checkMissing(dec2);
      return dec2;
    };
    p42 = prom<V +>{
      character = ldf character;
      r417 = dyn character(0);
      return r417;
    };
    p43 = prom<V +>{
      numerals1 = ld numerals;
      numerals2 = force? numerals1;
      checkMissing(numerals2);
      return numerals2;
    };
    r420 = dyn type_convert[, `as.is`, dec, `na.strings`, numerals](p39, p40, p41, p42, p43);
    check L861() else D283();
  L866():
    dx89 = getTryDispatchBuiltinValue(dr84);
    goto L198(i44, dx89);
  L867():
    i94 = force? i93;
    __25 = ldf `[` in base;
    r422 = dyn __25(colClasses34, i94);
    goto L198(i90, r422);
  L868():
    as_factor1 = ldf `as.factor`;
    check L869() else D286();
  L902():
    data74 = force? data73;
    checkMissing(data74);
    c180 = `is.object`(data74);
    if c180 then L903() else L904(data74);
  L915():
    p49 = prom<V +>{
      sym49 = ldf `as.integer`;
      base49 = ldf `as.integer` in base;
      guard49 = `==`.4(sym49, base49);
      if guard49 then L1() else L2();
    L0(r457):
      return r457;
    L1():
      nlines2 = ld nlines;
      nlines3 = force? nlines2;
      checkMissing(nlines3);
      as_integer = ldf `as.integer` in base;
      r458 = dyn as_integer(nlines3);
      goto L0(r458);
    L2():
      r456 = dyn base49(<sym nlines>);
      goto L0(r456);
    };
    r460 = dyn _set_row_names(p49);
    check L916() else D305();
  L922():
    p50 = prom<V +>{
      sym51 = ldf `as.integer`;
      base51 = ldf `as.integer` in base;
      guard51 = `==`.4(sym51, base51);
      if guard51 then L1() else L2();
    L0(r465):
      return r465;
    L1():
      nlines4 = ld nlines;
      nlines5 = force? nlines4;
      checkMissing(nlines5);
      as_integer1 = ldf `as.integer` in base;
      r466 = dyn as_integer1(nlines5);
      goto L0(r466);
    L2():
      r464 = dyn base51(<sym nlines>);
      goto L0(r464);
    };
    r468 = dyn _set_row_names1(p50);
    check L923() else D308();
  L925():
    row_names3 = ld `row.names`;
    check L927() else D309();
  L926():
    r469 = dyn base52(<sym row.names>);
    goto L216(r469);
  L993():
    dx128 = getTryDispatchBuiltinValue(dr122);
    goto L233(dx128);
  L994():
    keep15 = force? keep14;
    __44 = ldf `[` in base;
    r504 = dyn __44(data100, keep15);
    goto L233(r504);
  L995():
    row_names15 = ld `row.names`;
    check L997() else D337();
  L996():
    r505 = dyn base57(<sym row.names>);
    goto L234(r505);
  D273():
    deopt 1047 [i57, types11, i60];
  D274():
    deopt 1054 [i59, r403];
  D283():
    deopt 1084 [i55, r420];
  D286():
    deopt 1093 [i92];
  D288():
    deopt 1096 [i92, colClasses35];
  D305():
    deopt 1167 [r460];
  D308():
    deopt 1176 [r468];
  D309():
    deopt 1179 [row_names3];
  D337():
    deopt 1285 [row_names15];
  L192(i65, c152):
    c161 = `as.logical`(c152);
    if c161 then L850() else L194();
  L209(dx108):
    st `row.names` = dx108;
    data77 = ld data;
    check L906() else D302();
  L217():
    sym55 = ldf `is.numeric`;
    base55 = ldf `is.numeric` in base;
    guard55 = `==`.4(sym55, base55);
    if guard55 then L960() else L961();
  L235(c208):
    c217 = `as.logical`(c208);
    if c217 then L1003() else L237();
  L838():
    dx78 = getTryDispatchBuiltinValue(dr72);
    goto L190(i44, dx78);
  L839():
    i61 = force? i60;
    __19 = ldf `[` in base;
    r401 = dyn __19(types9, <missing>, i61);
    goto L190(i57, r401);
  L840():
    goto L189(i59, r403);
  L843():
    as_is21 = ld `as.is`;
    check L844() else D276();
  L861():
    goto L196(i55, r420);
  L869():
    p44 = prom<V +>{
      data57 = ld data;
      data58 = force? data57;
      checkMissing(data58);
      c168 = `is.object`(data58);
      if c168 then L1() else L2(data58);
    L0(dx92):
      return dx92;
    L1():
      dr86 = tryDispatchBuiltin.1("[[", data58);
      dc43 = getTryDispatchBuiltinDispatched(dr86);
      if dc43 then L3() else L2(dr86);
    L2(data60):
      i97 = ld i;
      i98 = force? i97;
      __26 = ldf `[[` in base;
      r424 = dyn __26(data60, i98);
      goto L0(r424);
    L3():
      dx91 = getTryDispatchBuiltinValue(dr86);
      goto L0(dx91);
    };
    r426 = dyn as_factor1(p44);
    check L870() else D287();
  L872():
    colClasses36 = force? colClasses35;
    checkMissing(colClasses36);
    c169 = `is.object`(colClasses36);
    if c169 then L873() else L874(i92, colClasses36);
  L903():
    dr102 = tryDispatchBuiltin.1("[[", data74);
    dc51 = getTryDispatchBuiltinDispatched(dr102);
    if dc51 then L905() else L904(dr102);
  L904(data76):
    __34 = ldf `[[` in base;
    r452 = dyn __34(data76, 1);
    goto L209(r452);
  L916():
    st `row.names` = r460;
    goto L212(r460);
  L923():
    st `row.names` = r468;
    goto L213();
  L927():
    row_names4 = force? row_names3;
    checkMissing(row_names4);
    c185 = `is.character`(row_names4);
    goto L216(c185);
  L928():
    st compactRN = FALSE;
    sym53 = ldf length;
    base53 = ldf length in base;
    guard53 = `==`.4(sym53, base53);
    if guard53 then L929() else L930();
  L997():
    row_names16 = force? row_names15;
    checkMissing(row_names16);
    c206 = `is.object`(row_names16);
    goto L234(c206);
  L998():
    sym58 = ldf `is.integer`;
    base58 = ldf `is.integer` in base;
    guard58 = `==`.4(sym58, base58);
    if guard58 then L999() else L1000();
  D276():
    deopt 1057 [i55, c150, as_is21];
  D287():
    deopt 1095 [i92, r426];
  D302():
    deopt 1149 [data77];
  L194():
    data49 = ld data;
    check L854() else D280();
  L195(i77, r409):
    goto L196(i77, r409);
  L200(i102, dx94):
    r428 = `==`(dx94, "Date");
    c170 = `as.logical`(r428);
    if c170 then L877() else L201();
  L218(r472):
    r474 = `==`(r472, 1);
    c187 = `as.logical`(r474);
    if c187 then L933() else L219();
  L226(r492):
    c192 = `as.logical`(r492);
    if c192 then L964() else L227(c192);
  L236(c212, r508):
    r509 = `!`(r508);
    c214 = `as.logical`(r509);
    c215 = `||`(c212, c214);
    goto L235(c215);
  L237():
    goto L239();
  L239():
    compactRN = ld compactRN;
    check L1009() else D341();
  L844():
    as_is22 = force? as_is21;
    checkMissing(as_is22);
    c153 = `is.object`(as_is22);
    if c153 then L845() else L846(i55, c150, as_is22);
  L850():
    as_factor = ldf `as.factor`;
    check L851() else D278();
  L870():
    goto L197(i92, r426);
  L873():
    dr88 = tryDispatchBuiltin.1("[", colClasses36);
    dc44 = getTryDispatchBuiltinDispatched(dr88);
    if dc44 then L875() else L874(i92, dr88);
  L874(i100, colClasses38):
    i103 = ld i;
    check L876() else D289();
  L905():
    dx107 = getTryDispatchBuiltinValue(dr102);
    goto L209(dx107);
  L906():
    data78 = force? data77;
    checkMissing(data78);
    c181 = `is.object`(data78);
    if c181 then L907() else L908(data78);
  L929():
    row_names5 = ld `row.names`;
    check L931() else D310();
  L930():
    r471 = dyn base53(<sym row.names>);
    goto L218(r471);
  L960():
    row_names9 = ld `row.names`;
    check L962() else D322();
  L961():
    r491 = dyn base55(<sym row.names>);
    goto L226(r491);
  L999():
    row_names17 = ld `row.names`;
    check L1001() else D338();
  L1000():
    r507 = dyn base58(<sym row.names>);
    goto L236(c207, r507);
  L1003():
    sym59 = ldf `as.character`;
    base59 = ldf `as.character` in base;
    guard59 = `==`.4(sym59, base59);
    if guard59 then L1004() else L1005();
  D278():
    deopt 1065 [i65];
  D280():
    deopt 1068 [i65, data49];
  D289():
    deopt 1098 [i100, colClasses38, i103];
  D310():
    deopt 1187 [row_names5];
  D322():
    deopt 1235 [row_names9];
  D338():
    deopt 1289 [c207, row_names17];
  D341():
    deopt 1303 [compactRN];
  L193(i69, c157, dx81):
    r405 = `!`(dx81);
    c158 = `as.logical`(r405);
    c159 = `&&`(c157, c158);
    goto L192(i69, c159);
  L201():
    colClasses39 = ld colClasses;
    check L881() else D292();
  L210(dx110):
    st data = dx110;
    keep2 = ld keep;
    check L910() else D303();
  L219():
    goto L225(NULL);
  L225(dx121):
    goto L213();
  L227(c194):
    c201 = `as.logical`(c194);
    if c201 then L970() else L229();
  L238(r511):
    st `row.names` = r511;
    goto L239();
  L845():
    dr74 = tryDispatchBuiltin.1("[", as_is22);
    dc37 = getTryDispatchBuiltinDispatched(dr74);
    if dc37 then L847() else L846(i55, c150, dr74);
  L846(i67, c155, as_is24):
    i70 = ld i;
    check L848() else D277();
  L851():
    p38 = prom<V +>{
      data45 = ld data;
      data46 = force? data45;
      checkMissing(data46);
      c162 = `is.object`(data46);
      if c162 then L1() else L2(data46);
    L0(dx83):
      return dx83;
    L1():
      dr76 = tryDispatchBuiltin.1("[[", data46);
      dc38 = getTryDispatchBuiltinDispatched(dr76);
      if dc38 then L3() else L2(dr76);
    L2(data48):
      i75 = ld i;
      i76 = force? i75;
      __21 = ldf `[[` in base;
      r406 = dyn __21(data48, i76);
      goto L0(r406);
    L3():
      dx82 = getTryDispatchBuiltinValue(dr76);
      goto L0(dx82);
    };
    r408 = dyn as_factor(p38);
    check L852() else D279();
  L854():
    data50 = force? data49;
    checkMissing(data50);
    c163 = `is.object`(data50);
    if c163 then L855() else L856(i65, data50);
  L875():
    dx93 = getTryDispatchBuiltinValue(dr88);
    goto L200(i92, dx93);
  L876():
    i104 = force? i103;
    __27 = ldf `[` in base;
    r427 = dyn __27(colClasses38, i104);
    goto L200(i100, r427);
  L877():
    as_Date = ldf `as.Date`;
    check L878() else D290();
  L907():
    dr104 = tryDispatchBuiltin.1("[", data78);
    dc52 = getTryDispatchBuiltinDispatched(dr104);
    if dc52 then L909() else L908(dr104);
  L908(data80):
    __35 = ldf `[` in base;
    r453 = dyn __35(data80, -1);
    goto L210(r453);
  L931():
    row_names6 = force? row_names5;
    checkMissing(row_names6);
    length13 = ldf length in base;
    r473 = dyn length13(row_names6);
    check L932() else D311();
  L933():
    cols37 = ld cols;
    check L934() else D312();
  L962():
    row_names10 = force? row_names9;
    checkMissing(row_names10);
    is_numeric1 = ldf `is.numeric` in base;
    r493 = dyn is_numeric1(row_names10);
    check L963() else D323();
  L964():
    sym56 = ldf length;
    base56 = ldf length in base;
    guard56 = `==`.4(sym56, base56);
    if guard56 then L965() else L966();
  L1001():
    row_names18 = force? row_names17;
    checkMissing(row_names18);
    c213 = `is.integer`(row_names18);
    goto L236(c207, c213);
  L1004():
    row_names19 = ld `row.names`;
    check L1006() else D339();
  L1005():
    r510 = dyn base59(<sym row.names>);
    goto L238(r510);
  L1009():
    compactRN1 = force? compactRN;
    checkMissing(compactRN1);
    r514 = `!`(compactRN1);
    c218 = `as.logical`(r514);
    if c218 then L1010() else L240();
  D277():
    deopt 1059 [i67, c155, as_is24, i70];
  D279():
    deopt 1067 [i65, r408];
  D290():
    deopt 1104 [i102];
  D292():
    deopt 1107 [i102, colClasses39];
  D303():
    deopt 1155 [keep2];
  D311():
    deopt 1190 [r473];
  D312():
    deopt 1194 [1, cols37];
  D323():
    deopt 1238 [r493];
  D339():
    deopt 1296 [row_names19];
  L228(c197, r495):
    r497 = `==`(r495, 1);
    c198 = `as.logical`(r497);
    c199 = `&&`(c197, c198);
    goto L227(c199);
  L229():
    stop13 = ldf stop;
    check L988() else D333();
  L240():
    goto L249();
  L249():
    row_names27 = ld `row.names`;
    check L1035() else D355();
  L847():
    dx80 = getTryDispatchBuiltinValue(dr74);
    goto L193(i55, c150, dx80);
  L848():
    i71 = force? i70;
    __20 = ldf `[` in base;
    r404 = dyn __20(as_is24, i71);
    goto L193(i67, c155, r404);
  L852():
    goto L195(i65, r408);
  L855():
    dr78 = tryDispatchBuiltin.1("[[", data50);
    dc39 = getTryDispatchBuiltinDispatched(dr78);
    if dc39 then L857() else L856(i65, dr78);
  L856(i79, data52):
    i81 = ld i;
    check L858() else D281();
  L878():
    p45 = prom<V +>{
      data61 = ld data;
      data62 = force? data61;
      checkMissing(data62);
      c171 = `is.object`(data62);
      if c171 then L1() else L2(data62);
    L0(dx96):
      return dx96;
    L1():
      dr90 = tryDispatchBuiltin.1("[[", data62);
      dc45 = getTryDispatchBuiltinDispatched(dr90);
      if dc45 then L3() else L2(dr90);
    L2(data64):
      i107 = ld i;
      i108 = force? i107;
      __28 = ldf `[[` in base;
      r429 = dyn __28(data64, i108);
      goto L0(r429);
    L3():
      dx95 = getTryDispatchBuiltinValue(dr90);
      goto L0(dx95);
    };
    r431 = dyn as_Date(p45);
    check L879() else D291();
  L881():
    colClasses40 = force? colClasses39;
    checkMissing(colClasses40);
    c172 = `is.object`(colClasses40);
    if c172 then L882() else L883(i102, colClasses40);
  L909():
    dx109 = getTryDispatchBuiltinValue(dr104);
    goto L210(dx109);
  L910():
    keep3 = force? keep2;
    checkMissing(keep3);
    c182 = `is.object`(keep3);
    if c182 then L911() else L912(keep3);
  L932():
    goto L218(r473);
  L934():
    cols38 = force? cols37;
    checkMissing(cols38);
    r475 = `:`(1, cols38);
    c188 = `is.object`(r475);
    if c188 then L935() else L936(r475);
  L963():
    goto L226(r493);
  L965():
    row_names11 = ld `row.names`;
    check L967() else D324();
  L966():
    r494 = dyn base56(<sym row.names>);
    goto L228(c192, r494);
  L970():
    st compactRN = FALSE;
    row_names13 = ld `row.names`;
    check L971() else D326();
  L1006():
    row_names20 = force? row_names19;
    checkMissing(row_names20);
    as_character = ldf `as.character` in base;
    r512 = dyn as_character(row_names20);
    check L1007() else D340();
  L1010():
    sym60 = ldf length;
    base60 = ldf length in base;
    guard60 = `==`.4(sym60, base60);
    if guard60 then L1011() else L1012();
  D281():
    deopt 1070 [i79, data52, i81];
  D291():
    deopt 1106 [i102, r431];
  D324():
    deopt 1241 [c192, row_names11];
  D326():
    deopt 1251 [row_names13];
  D333():
    deopt 1275 [];
  D340():
    deopt 1299 [r512];
  D355():
    deopt 1344 [row_names27];
  L202(i112, dx98):
    r433 = `==`(dx98, "POSIXct");
    c173 = `as.logical`(r433);
    if c173 then L886() else L203();
  L211(dx112):
    st keep = dx112;
    st compactRN = FALSE;
    goto L212(FALSE);
  L220(dx114):
    st rowvar = dx114;
    data81 = ld data;
    check L943() else D316();
  L241(r516):
    nlines6 = ld nlines;
    check L1015() else D344();
  L857():
    dx84 = getTryDispatchBuiltinValue(dr78);
    goto L195(i65, dx84);
  L858():
    i82 = force? i81;
    __22 = ldf `[[` in base;
    r410 = dyn __22(data52, i82);
    goto L195(i79, r410);
  L879():
    goto L197(i102, r431);
  L882():
    dr92 = tryDispatchBuiltin.1("[", colClasses40);
    dc46 = getTryDispatchBuiltinDispatched(dr92);
    if dc46 then L884() else L883(i102, dr92);
  L883(i110, colClasses42):
    i113 = ld i;
    check L885() else D293();
  L911():
    dr106 = tryDispatchBuiltin.1("[", keep3);
    dc53 = getTryDispatchBuiltinDispatched(dr106);
    if dc53 then L913() else L912(dr106);
  L912(keep5):
    __36 = ldf `[` in base;
    r454 = dyn __36(keep5, -1);
    goto L211(r454);
  L935():
    dr108 = tryDispatchBuiltin.1("[", r475);
    dc54 = getTryDispatchBuiltinDispatched(dr108);
    if dc54 then L937() else L936(dr108);
  L936(r477):
    sym54 = ldf match;
    base54 = ldf match in base;
    guard54 = `==`.4(sym54, base54);
    if guard54 then L938() else L939();
  L967():
    row_names12 = force? row_names11;
    checkMissing(row_names12);
    length14 = ldf length in base;
    r496 = dyn length14(row_names12);
    check L968() else D325();
  L971():
    row_names14 = force? row_names13;
    checkMissing(row_names14);
    st rlabp = row_names14;
    data89 = ld data;
    check L972() else D327();
  L988():
    r503 = dyn stop13("invalid 'row.names' specification");
    check L989() else D334();
  L1007():
    goto L238(r512);
  L1011():
    row_names21 = ld `row.names`;
    check L1013() else D342();
  L1012():
    r515 = dyn base60(<sym row.names>);
    goto L241(r515);
  L1035():
    row_names28 = force? row_names27;
    checkMissing(row_names28);
    l60 = ld data;
    attr__ = ldf `attr<-`;
    check L1036() else D356();
  D293():
    deopt 1109 [i110, colClasses42, i113];
  D316():
    deopt 1211 [data81];
  D325():
    deopt 1244 [c192, r496];
  D327():
    deopt 1254 [data89];
  D334():
    deopt 1277 [r503];
  D342():
    deopt 1308 [row_names21];
  D344():
    deopt 1311 [r516, nlines6];
  D356():
    deopt 1347 [row_names28, l60, row_names28];
  L203():
    __31 = ldf `::`;
    check L890() else D296();
  L221(r481, r482):
    r484 = `==`(r482, 1);
    __37 = ldf `[` in base;
    r485 = dyn __37(r481, r484);
    goto L220(r485);
  L884():
    dx97 = getTryDispatchBuiltinValue(dr92);
    goto L202(i102, dx97);
  L885():
    i114 = force? i113;
    __29 = ldf `[` in base;
    r432 = dyn __29(colClasses42, i114);
    goto L202(i110, r432);
  L886():
    as_POSIXct = ldf `as.POSIXct`;
    check L887() else D294();
  L913():
    dx111 = getTryDispatchBuiltinValue(dr106);
    goto L211(dx111);
  L937():
    dx113 = getTryDispatchBuiltinValue(dr108);
    goto L220(dx113);
  L938():
    col_names23 = ld `col.names`;
    check L940() else D313();
  L939():
    r480 = dyn base54(<sym col.names>, <sym row.names>, 0);
    goto L221(r477, r480);
  L943():
    data82 = force? data81;
    checkMissing(data82);
    c189 = `is.object`(data82);
    if c189 then L944() else L945(data82);
  L968():
    goto L228(c192, r496);
  L972():
    data90 = force? data89;
    checkMissing(data90);
    c202 = `is.object`(data90);
    if c202 then L973() else L974(data90);
  L989():
    goto L213();
  L1013():
    row_names22 = force? row_names21;
    checkMissing(row_names22);
    length15 = ldf length in base;
    r517 = dyn length15(row_names22);
    check L1014() else D343();
  L1015():
    nlines7 = force? nlines6;
    checkMissing(nlines7);
    r518 = `!=`(r516, nlines7);
    c219 = `as.logical`(r518);
    if c219 then L1016() else L242();
  L1036():
    r531 = dyn attr__(l60, NULL, "row.names", row_names28);
    check L1037() else D357();
  D294():
    deopt 1115 [i112];
  D296():
    deopt 1119 [i112];
  D313():
    deopt 1199 [r477, col_names23];
  D343():
    deopt 1311 [r517];
  D357():
    deopt 1350 [row_names28, r531];
  L222(dx116):
    st `row.names` = dx116;
    data85 = ld data;
    check L948() else D318();
  L230(dx123):
    st `row.names` = dx123;
    data93 = ld data;
    check L977() else D329();
  L242():
    goto L243();
  L243():
    anyDuplicated = ldf anyDuplicated;
    check L1020() else D347();
  L887():
    p46 = prom<V +>{
      data65 = ld data;
      data66 = force? data65;
      checkMissing(data66);
      c174 = `is.object`(data66);
      if c174 then L1() else L2(data66);
    L0(dx100):
      return dx100;
    L1():
      dr94 = tryDispatchBuiltin.1("[[", data66);
      dc47 = getTryDispatchBuiltinDispatched(dr94);
      if dc47 then L3() else L2(dr94);
    L2(data68):
      i117 = ld i;
      i118 = force? i117;
      __30 = ldf `[[` in base;
      r434 = dyn __30(data68, i118);
      goto L0(r434);
    L3():
      dx99 = getTryDispatchBuiltinValue(dr94);
      goto L0(dx99);
    };
    r436 = dyn as_POSIXct(p46);
    check L888() else D295();
  L890():
    r437 = dyn __31("methods", "as");
    check L891() else D297();
  L940():
    col_names24 = force? col_names23;
    checkMissing(col_names24);
    row_names7 = ld `row.names`;
    check L941() else D314();
  L944():
    dr110 = tryDispatchBuiltin.1("[[", data82);
    dc55 = getTryDispatchBuiltinDispatched(dr110);
    if dc55 then L946() else L945(dr110);
  L945(data84):
    rowvar = ld rowvar;
    check L947() else D317();
  L973():
    dr116 = tryDispatchBuiltin.1("[[", data90);
    dc58 = getTryDispatchBuiltinDispatched(dr116);
    if dc58 then L975() else L974(dr116);
  L974(data92):
    rlabp10 = ld rlabp;
    check L976() else D328();
  L1014():
    goto L241(r517);
  L1016():
    stop14 = ldf stop;
    check L1017() else D345();
  L1037():
    st data = r531;
    data101 = ld data;
    check L1038() else D358();
  D295():
    deopt 1117 [i112, r436];
  D297():
    deopt 1122 [i112, r437];
  D314():
    deopt 1201 [r477, row_names7];
  D317():
    deopt 1213 [data84, rowvar];
  D318():
    deopt 1217 [data85];
  D328():
    deopt 1256 [data92, rlabp10];
  D329():
    deopt 1260 [data93];
  D345():
    deopt 1315 [];
  D347():
    deopt 1321 [];
  D358():
    deopt 1352 [data101];
  L888():
    goto L197(i112, r436);
  L891():
    checkFun.0(r437);
    r438 = r437 as cls;
    p47 = prom<V +>{
      data69 = ld data;
      data70 = force? data69;
      checkMissing(data70);
      c175 = `is.object`(data70);
      if c175 then L1() else L2(data70);
    L0(dx102):
      return dx102;
    L1():
      dr96 = tryDispatchBuiltin.1("[[", data70);
      dc48 = getTryDispatchBuiltinDispatched(dr96);
      if dc48 then L3() else L2(dr96);
    L2(data72):
      i119 = ld i;
      i120 = force? i119;
      __32 = ldf `[[` in base;
      r439 = dyn __32(data72, i120);
      goto L0(r439);
    L3():
      dx101 = getTryDispatchBuiltinValue(dr96);
      goto L0(dx101);
    };
    p48 = prom<V +>{
      colClasses43 = ld colClasses;
      colClasses44 = force? colClasses43;
      checkMissing(colClasses44);
      c176 = `is.object`(colClasses44);
      if c176 then L1() else L2(colClasses44);
    L0(dx104):
      return dx104;
    L1():
      dr98 = tryDispatchBuiltin.1("[", colClasses44);
      dc49 = getTryDispatchBuiltinDispatched(dr98);
      if dc49 then L3() else L2(dr98);
    L2(colClasses46):
      i121 = ld i;
      i122 = force? i121;
      __33 = ldf `[` in base;
      r441 = dyn __33(colClasses46, i122);
      goto L0(r441);
    L3():
      dx103 = getTryDispatchBuiltinValue(dr98);
      goto L0(dx103);
    };
    r443 = dyn r438(p47, p48);
    check L892() else D298();
  L941():
    row_names8 = force? row_names7;
    checkMissing(row_names8);
    match2 = ldf match in base;
    r483 = dyn match2(col_names24, row_names8, 0, NULL);
    check L942() else D315();
  L946():
    dx115 = getTryDispatchBuiltinValue(dr110);
    goto L222(dx115);
  L947():
    rowvar1 = force? rowvar;
    __38 = ldf `[[` in base;
    r486 = dyn __38(data84, rowvar1);
    goto L222(r486);
  L948():
    data86 = force? data85;
    checkMissing(data86);
    c190 = `is.object`(data86);
    if c190 then L949() else L950(data86);
  L975():
    dx122 = getTryDispatchBuiltinValue(dr116);
    goto L230(dx122);
  L976():
    rlabp11 = force? rlabp10;
    __41 = ldf `[[` in base;
    r498 = dyn __41(data92, rlabp11);
    goto L230(r498);
  L977():
    data94 = force? data93;
    checkMissing(data94);
    c203 = `is.object`(data94);
    if c203 then L978() else L979(data94);
  L1017():
    r519 = dyn stop14("invalid 'row.names' length");
    check L1018() else D346();
  L1020():
    p51 = prom<V +>{
      row_names23 = ld `row.names`;
      row_names24 = force? row_names23;
      checkMissing(row_names24);
      return row_names24;
    };
    r522 = dyn anyDuplicated(p51);
    check L1021() else D348();
  L1038():
    data102 = force? data101;
    checkMissing(data102);
    popenv;
    return data102;
  D298():
    deopt 1126 [i112, r443];
  D315():
    deopt 1206 [r477, r483];
  D346():
    deopt 1317 [r519];
  D348():
    deopt 1323 [r522];
  L223(dx118):
    st data = dx118;
    keep6 = ld keep;
    check L953() else D320();
  L231(dx125):
    st data = dx125;
    keep10 = ld keep;
    check L982() else D331();
  L892():
    goto L197(i112, r443);
  L942():
    goto L221(r477, r483);
  L949():
    dr112 = tryDispatchBuiltin.1("[", data86);
    dc56 = getTryDispatchBuiltinDispatched(dr112);
    if dc56 then L951() else L950(dr112);
  L950(data88):
    rowvar2 = ld rowvar;
    check L952() else D319();
  L978():
    dr118 = tryDispatchBuiltin.1("[", data94);
    dc59 = getTryDispatchBuiltinDispatched(dr118);
    if dc59 then L980() else L979(dr118);
  L979(data96):
    rlabp12 = ld rlabp;
    check L981() else D330();
  L1018():
    goto L243();
  L1021():
    c220 = `as.logical`(r522);
    if c220 then L1022() else L244();
  D319():
    deopt 1219 [data88, rowvar2];
  D320():
    deopt 1224 [keep6];
  D330():
    deopt 1262 [data96, rlabp12];
  D331():
    deopt 1267 [keep10];
  L244():
    goto L245();
  L245():
    sym61 = ldf anyNA;
    base61 = ldf anyNA in base;
    guard61 = `==`.4(sym61, base61);
    if guard61 then L1026() else L1027();
  L951():
    dx117 = getTryDispatchBuiltinValue(dr112);
    goto L223(dx117);
  L952():
    rowvar3 = force? rowvar2;
    checkMissing(rowvar3);
    r487 = `-`(<missing>, rowvar3);
    __39 = ldf `[` in base;
    r488 = dyn __39(data88, r487);
    goto L223(r488);
  L953():
    keep7 = force? keep6;
    checkMissing(keep7);
    c191 = `is.object`(keep7);
    if c191 then L954() else L955(keep7);
  L980():
    dx124 = getTryDispatchBuiltinValue(dr118);
    goto L231(dx124);
  L981():
    rlabp13 = force? rlabp12;
    checkMissing(rlabp13);
    r499 = `-`(<missing>, rlabp13);
    __42 = ldf `[` in base;
    r500 = dyn __42(data96, r499);
    goto L231(r500);
  L982():
    keep11 = force? keep10;
    checkMissing(keep11);
    c204 = `is.object`(keep11);
    if c204 then L983() else L984(keep11);
  L1022():
    stop15 = ldf stop;
    check L1023() else D349();
  D349():
    deopt 1325 [];
  L224(dx120):
    st keep = dx120;
    goto L225(dx120);
  L232(dx127):
    st keep = dx127;
    goto L213();
  L246(r526):
    c221 = `as.logical`(r526);
    if c221 then L1030() else L247();
  L954():
    dr114 = tryDispatchBuiltin.1("[", keep7);
    dc57 = getTryDispatchBuiltinDispatched(dr114);
    if dc57 then L956() else L955(dr114);
  L955(keep9):
    rowvar4 = ld rowvar;
    check L957() else D321();
  L983():
    dr120 = tryDispatchBuiltin.1("[", keep11);
    dc60 = getTryDispatchBuiltinDispatched(dr120);
    if dc60 then L985() else L984(dr120);
  L984(keep13):
    rlabp14 = ld rlabp;
    check L986() else D332();
  L1023():
    r523 = dyn stop15("duplicate 'row.names' are not allowed");
    check L1024() else D350();
  L1026():
    row_names25 = ld `row.names`;
    check L1028() else D351();
  L1027():
    r525 = dyn base61(<sym row.names>);
    goto L246(r525);
  D321():
    deopt 1226 [keep9, rowvar4];
  D332():
    deopt 1269 [keep13, rlabp14];
  D350():
    deopt 1327 [r523];
  D351():
    deopt 1332 [row_names25];
  L247():
    goto L248(NULL);
  L248(r529):
    goto L249();
  L956():
    dx119 = getTryDispatchBuiltinValue(dr114);
    goto L224(dx119);
  L957():
    rowvar5 = force? rowvar4;
    checkMissing(rowvar5);
    r489 = `-`(<missing>, rowvar5);
    __40 = ldf `[` in base;
    r490 = dyn __40(keep9, r489);
    goto L224(r490);
  L985():
    dx126 = getTryDispatchBuiltinValue(dr120);
    goto L232(dx126);
  L986():
    rlabp15 = force? rlabp14;
    checkMissing(rlabp15);
    r501 = `-`(<missing>, rlabp15);
    __43 = ldf `[` in base;
    r502 = dyn __43(keep13, r501);
    goto L232(r502);
  L1024():
    goto L245();
  L1028():
    row_names26 = force? row_names25;
    checkMissing(row_names26);
    anyNA = ldf anyNA in base;
    r527 = dyn anyNA(row_names26);
    check L1029() else D352();
  L1030():
    stop16 = ldf stop;
    check L1031() else D353();
  D352():
    deopt 1335 [r527];
  D353():
    deopt 1337 [];
  L1029():
    goto L246(r527);
  L1031():
    r528 = dyn stop16("missing values in 'row.names' are not allowed");
    check L1032() else D354();
  D354():
    deopt 1339 [r528];
  L1032():
    goto L248(r528);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg r2:V, reg all:cls, reg r3:V, reg r4:V |
    mkenv;
    st x = x;
    sym = ldf all;
    base = ldf all in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    r4 = `!`(r1);
    popenv;
    return r4;
  L1():
    x1 = ld x;
    check L3() else D0();
  L2():
    r = dyn base(<lang `==`(x, "")>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    r2 = `==`(x2, "");
    all = ldf all in base;
    r3 = dyn all(r2);
    check L4() else D1();
  D1():
    deopt 7 [r3];
  L4():
    goto L0(r3);
  }
}