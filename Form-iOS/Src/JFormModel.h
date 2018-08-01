//
//  JFormModel.h
//  Form-iOS
//
//  Created by 蔡杰 on 2018/8/1.
//  Copyright © 2018年 AllanCai. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef id (^MapFromKeyValueToSpecialValueBlock)(NSString *key,id value);

@interface JFormModel : NSObject

//唯一标示符
@property (nonatomic, copy) NSString *uniqueIdentifies;


/*
 
     服务器上传
 */

@property (nonatomic, strong) id  serverKey;
@property (nonatomic, strong) id  serverValue;
@property (nonatomic, assign,readonly,getter=isKeysArray) BOOL keysArray;
@property (nonatomic, strong) MapFromKeyValueToSpecialValueBlock serverKeyMap;

// 强制校验 默认为yes
@property (nonatomic, assign) BOOL required;

//default NO,如果设置为YES,不上传
@property (nonatomic, assign) BOOL ignoreKeys;

@property (nonatomic, copy) NSString *errorMessage;

/*
  表格显示

 */

@property (nonatomic, strong) id   displayKey;
@property (nonatomic, strong) id   display; //
@property (nonatomic, assign)  BOOL canDisplayMerge;
@property (nonatomic, strong) MapFromKeyValueToSpecialValueBlock disPlayKeyMap;

//表单是否可以编辑
@property (nonatomic, assign,getter=isFormEdit)  BOOL  formEdit;

//内部懒加载初始化
@property (nonatomic, strong) NSDictionary *  extension;

- (NSDictionary *)serverMap;

- (BOOL)checkServerValueIsValidation;


@end
