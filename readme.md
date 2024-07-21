# Prdiction Guide

## Create Environment

Create project and virtual environement : tutorial-env
```bash
python -m venv tutorial-env
```

Choose directory tutorial-env
```bash
cd tutorial-env
```

On Windows, run:
```bash
Scripts\activate
```

On Unix or MacOS, run:
```bash
source Scripts\activate
```

make your project folder
```bash
mkdir prediction
cd prediction
```

## Make Requirement.txt to save your dependencies
choose your folder project (not your environment, your project folder is always inside your environment folder)
```bash
cd prediction
```
เมื่อต้องการบันทึก dependency ลงไฟล์ requirements.txt
```bash
pip freeze > requirements.txt
```

เมื่อต้องการ install dependency จาก requirement.txt
```bash
pip install -r requirements.txt
```

เมื่อต้องการ uninstall dependency จาก requirement.txt
```bash
pip uninstall -r requirements.txt
```

dependency ที่พื้นฐานที่จำเป็นต้องใช้งาน สำหรับ โปรเจคนี้
```bash
pip install pandas
pip install notebook
pip install matplotlib
pip install statsmodels

pip install prophet

pip install scikit-learn
pip install tensorflow
pip install keras

pip install cython
```

run notebook
```bash
jupyter notebook
```

## Clone project and run again in another compouter

crete a new virtual environment
- see above

clone project with your git inside your environment folder
```bash
git clone https://github.com/arc6828/prediction
cd prediction
```

re-install your dependencies from requirements.txt
```bash
pip install -r requirements.txt
```

## Caution
prophet has some bug during change version to numpy 2.0.0, fix bug by change type float from "np.float_" to "np.float64" in site-packages/prophet/forecaster.py
```python
    @staticmethod
    def fourier_series(
        dates: pd.Series,
        period: Union[int, float],
        series_order: int,
    ) -> NDArray[np.float64]:
        print("sommething happend here")
```
