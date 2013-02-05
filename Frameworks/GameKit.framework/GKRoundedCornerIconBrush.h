/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@interface GKRoundedCornerIconBrush : GKImageBrush {
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    float _cornerRadiusProportion;
    } _outputSize;
    float _rotation;
    float _shadowBlur;
    } _shadowOffset;
}

@property float cornerRadiusProportion;
@property struct CGSize { float x1; float x2; } outputSize;
@property float rotation;
@property float shadowBlur;
@property struct CGSize { float x1; float x2; } shadowOffset;

- (id)clippingPathForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)cornerRadiusProportion;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withContext:(struct CGContext { }*)arg2 input:(id)arg3;
- (id)init;
- (struct CGSize { float x1; float x2; })outputSize;
- (float)rotation;
- (float)scaleForInput:(id)arg1;
- (void)setCornerRadiusProportion:(float)arg1;
- (void)setOutputSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setRotation:(float)arg1;
- (void)setShadowBlur:(float)arg1;
- (void)setShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (float)shadowBlur;
- (struct CGSize { float x1; float x2; })shadowOffset;
- (struct CGSize { float x1; float x2; })sizeForInput:(id)arg1;

@end