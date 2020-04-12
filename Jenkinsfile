pipeline {
    agent { docker { image 'python:3.5.1' } }
    stages {
        stage('deploy') {
            steps {
                sh 'hellow world'
                sh '''
                    echo 'test echo 1'
                    echo 'test echo 2'
                   '''
            }
        }
    }
}